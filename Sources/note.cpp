#include "note.h"
#include "ui_note.h"

#include <QAction>
#include <QApplication>
#include <QClipboard>
#include <QColorDialog>
#include <QComboBox>
#include <QFontComboBox>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <QFontDatabase>
#include <QMenu>
#include <QMenuBar>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPageSetupDialog>
#include <QtPrintSupport/QPrintPreviewDialog>
//#include <QPrinter>
#include <QtPrintSupport/QPrintEngine>
#include <QTextCodec>
#include <QTextEdit>
#include <QToolBar>
#include <QTextCursor>
#include <QTextDocumentWriter>
#include <QTextList>
#include <QtDebug>
#include <QCloseEvent>
#include <QMessageBox>
#include <QMimeData>

Note::Note(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Note)
{
    ui->setupUi(this);
    UIsetup();
    if(argsC==1)
    {
        InitalFile = args[1];
        openARG(InitalFile);
    }

}

Note::~Note()
{
    delete ui;
}

void Note::UIsetup()
{
    sLabel = new QLabel;
    sLabel->setText(tr("Loading "));
    sProg = new QProgressBar;
    textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);
    args = QCoreApplication::arguments();
    if(args.count()==2)
        argsC=1;
    else
        argsC=0;

    ui->actionCut->setEnabled(false);
    ui->actionCopy->setEnabled(false);
    
    ui->statusBar->addWidget(sLabel, 1);
    ui->statusBar->addWidget(sProg, 1);
    
    sProg->setValue(1);
    Note::connect(ui->actionCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
    Note::connect(ui->actionCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
    Note::connect(ui->actionPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
    Note::connect(ui->actionZoomIn, SIGNAL(triggered()), textEdit, SLOT(zoomIn()));
    Note::connect(ui->actionZoom_Out, SIGNAL(triggered()), textEdit, SLOT(zoomOut()));
    Note::connect(ui->actionBold, SIGNAL(triggered()), this, SLOT(textBold()));
    sProg->setValue(10);
    Note::connect(ui->actionItalics, SIGNAL(triggered()), this, SLOT(textItalic()));
    Note::connect(ui->actionUnderline, SIGNAL(triggered()), this, SLOT(textUnderline()));
    Note::connect(ui->actionExport, SIGNAL(triggered()), this, SLOT(filePDF()));
    Note::connect(ui->actionPrint, SIGNAL(triggered()), this, SLOT(filePrintPreview()));

    Note::connect(ui->action_About, SIGNAL(triggered()), this, SLOT(about()));

    sProg->setValue(50);
    Note::connect(textEdit, SIGNAL(copyAvailable(bool)), ui->actionCut, SLOT(setEnabled(bool)));
    Note::connect(textEdit, SIGNAL(copyAvailable(bool)), ui->actionCopy, SLOT(setEnabled(bool)));

    Note::connect(ui->actionNew, SIGNAL(triggered()), this, SLOT(newFile()));
    Note::connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(save()));
    Note::connect(ui->actionSave_As, SIGNAL(triggered()), this, SLOT(saveAs()));
    Note::connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(open()));
    Note::connect(ui->action_Quit, SIGNAL(triggered()), this, SLOT(close()));

    sProg->setValue(75);
    ui->toolBar->addAction(ui->actionNew);
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actionWarp_Text);
    Note::fontBox = new QFontComboBox;
    ui->toolBar->addSeparator();
    ui->toolBar->addWidget(fontBox);
    ui->toolBar->addSeparator();
    Note::sizeBox = new QComboBox;
    ui->toolBar->addWidget(sizeBox);
    sizeBox->setObjectName("comboSize");
    sizeBox->setEditable(true);
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->action_Quit);

    QFontDatabase db;
        foreach(int size, db.standardSizes())
            sizeBox->addItem(QString::number(size));


    sizeBox->setCurrentIndex(sizeBox->findText(QString::number(QApplication::font()
                                                                       .pointSize())));

    sProg->setValue(100);
    wrapcheck = 0;
    ui->statusBar->removeWidget(sLabel);
    ui->statusBar->removeWidget(sProg);
    ui->statusBar->showMessage(tr("Ideal"));


    //font and text size
    Note::connect(sizeBox, SIGNAL(activated(int)), this, SLOT(textSize(int)));
    Note::connect(fontBox, SIGNAL(currentFontChanged(QFont)), this, SLOT(fontChanged(QFont)));
}

void Note::closeEvent(QCloseEvent *e)
{
    if (savecheck())
        e->accept();
    else
        e->ignore();
}

bool Note::savecheck()
{
    if(!Note::textEdit->document()->isModified())
        return true;
    if (fileName.startsWith(QLatin1String(":/")))
        return true;

    QMessageBox::StandardButton ret;
        ret = QMessageBox::warning(this, tr("Application"),
                                   tr("The document has been modified.\n"
                                      "Do you want to save your changes?"),
                                   QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        if (ret == QMessageBox::Save)
            return Note::save();
        else if (ret == QMessageBox::Cancel)
            return false;
        return true;
}

bool Note::save()
{
    if (fileName.isEmpty())
            return Note::saveAs();

    QFile sfile(fn);
    if(sfile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out(&sfile);
        out << textEdit->toPlainText();
        sfile.flush();
        sfile.close();
    }

    textEdit->document()->setModified(false);
    return true;

}

bool Note::saveAs()
{
    fn = QFileDialog::getSaveFileName(this, tr("Save as"), QString(),
                                                  tr("Text Document (*.txt);;All Files (*)"));
        fileName = fn;
        if(fileName.isEmpty())
            return false;
        setCurrentFileName(fn);
        return Note::save();
}

void Note::newFile()
{
    if (Note::savecheck())
    {
        textEdit->clear();
        setCurrentFileName(QString());
    }
}

void Note::setCurrentFileName(const QString &fileName)
{
    this->fileName = fileName;
    textEdit->document()->setModified(false);

    QString shownName;
    if (fileName.isEmpty())
        shownName = "untitled.txt";
    else
        shownName = QFileInfo(fileName).fileName();

    setWindowTitle(tr("%1[*] - %2").arg(shownName).arg(tr("Note")));
    setWindowModified(false);
}

void Note::openARG(const QString &path)
{
    FLoc=path;

    open();
}

void Note::open()
{
    if(!FLoc.isEmpty())
        goto skip;
    FLoc = QFileDialog::getOpenFileName(this, "Open");
    skip:
    QFile ofile(FLoc);
    if(!ofile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::StandardButton ret;
        QMessageBox::warning(this, tr("Application"),
                                       tr("The specified path doesn't exist or you don't have Permissions to view file.\n"
                                          "Note will open a New file."),
                                       QMessageBox::Ok);
        FLoc="";
    }

    else
    {
        fileName=FLoc;
        QTextStream in(&ofile);
        QString text = in.readAll();
        ofile.close();

        textEdit->setPlainText(text);
        textEdit->setWordWrapMode(QTextOption::NoWrap);
        setCurrentFileName(fileName);
        FLoc="";
    }
}

void Note::textBold()
{

    if(textEdit->fontWeight())
        textEdit->setFontWeight(QFont::Bold);
    else
        textEdit->setFontWeight(QFont::Normal);
}



void Note::textItalic()
{
    if(textEdit->fontItalic())
      textEdit->setFontItalic(0);
    else
      textEdit->setFontItalic(1);
}

void Note::textUnderline()
{
    if(textEdit->fontUnderline())
        textEdit->setFontUnderline(0);
    else
        textEdit->setFontUnderline(1);
}

void Note::on_actionWarp_Text_triggered()
{
    if(wrapcheck==0)
    {textEdit->setWordWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
        wrapcheck=1;}

    else
    {textEdit->setWordWrapMode(QTextOption::NoWrap);
        wrapcheck=0;}
}

void Note::on_actionWarp_Text_triggered(bool checked)
{

}

void Note::on_actionLeft_triggered()
{
    textEdit->setAlignment(Qt::AlignLeft | Qt::AlignAbsolute);
}

void Note::on_actionCenter_triggered()
{
    textEdit->setAlignment(Qt::AlignHCenter);
}

void Note::on_actionRight_triggered()
{
    textEdit->setAlignment(Qt::AlignRight | Qt::AlignAbsolute);
}

void Note::on_actionJustify_triggered()
{
    textEdit->setAlignment(Qt::AlignJustify);
}

void Note::filePDF()
{
#ifndef QT_NO_PRINTER
    QString fileName = QFileDialog::getSaveFileName(this, "Export PDF",
                                                        QString(), "*.pdf");
        if (!fileName.isEmpty()) {
            if (QFileInfo(fileName).suffix().isEmpty())
                fileName.append(".pdf");
            QPrinter printer(QPrinter::HighResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setOutputFileName(fileName);
            textEdit->document()->print(&printer);
    }
//! [0]
#endif
}

void Note::filePrintPreview()
{
#if !defined(QT_NO_PRINTER) && !defined(QT_NO_PRINTDIALOG)
    QPrinter printer(QPrinter::HighResolution);
    QPrintPreviewDialog preview(&printer, this);
    connect(&preview, SIGNAL(paintRequested(QPrinter*)), SLOT(printPreview(QPrinter*)));
    preview.exec();
#endif
}

void Note::printPreview(QPrinter *printer)
{
#ifdef QT_NO_PRINTER
    Q_UNUSED(printer);
#else
    textEdit->print(printer);
#endif
}

void Note::on_actionSelect_All_triggered()
{
    textEdit->selectAll();
}

void Note::about()
{
    QMessageBox::StandardButton ret;
    QMessageBox::information(this, tr("About Note"),
                                   tr("This is Note Ver 2.0.1 beta 1 \n This App is developed on Qt/C++. This software comes under GPL."),
                                   QMessageBox::Ok);
}

void Note::fontChanged(const QFont &font)
{
    textEdit->setCurrentFont(font);
}

void Note::textSize(int size)
{
    textEdit->setFontPointSize(size);
}

void Note::on_actionBlack_triggered()
{
    //textEdit->setTextBackgroundColor(000000);
}

void Note::on_actionWhite_triggered()
{
    //textEdit->setTextBackgroundColor(FFFFFF);
}
