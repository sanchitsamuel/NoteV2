/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Note
{
public:
    QAction *action_About;
    QAction *actionCheck_for_Updates;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelect_All;
    QAction *actionUndo;
    QAction *actionREDO;
    QAction *actionFind;
    QAction *actionWarp_Text;
    QAction *actionPrint;
    QAction *actionLeft;
    QAction *actionCenter;
    QAction *actionRight;
    QAction *actionJustify;
    QAction *actionBold;
    QAction *actionItalics;
    QAction *actionUnderline;
    QAction *actionText_Size;
    QAction *actionFont;
    QAction *actionZoomIn;
    QAction *actionZoom_Out;
    QAction *actionOpen;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExport;
    QAction *action_Quit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menu_Tools;
    QMenu *menuAlingnment;
    QMenu *menuFormatting;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Note)
    {
        if (Note->objectName().isEmpty())
            Note->setObjectName(QStringLiteral("Note"));
        Note->resize(594, 434);
        action_About = new QAction(Note);
        action_About->setObjectName(QStringLiteral("action_About"));
        actionCheck_for_Updates = new QAction(Note);
        actionCheck_for_Updates->setObjectName(QStringLiteral("actionCheck_for_Updates"));
        actionCut = new QAction(Note);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/Icons/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon);
        actionCopy = new QAction(Note);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/Icons/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon1);
        actionPaste = new QAction(Note);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/icons/Icons/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon2);
        actionSelect_All = new QAction(Note);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionUndo = new QAction(Note);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/icons/Icons/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionREDO = new QAction(Note);
        actionREDO->setObjectName(QStringLiteral("actionREDO"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/icons/Icons/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionREDO->setIcon(icon4);
        actionFind = new QAction(Note);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionWarp_Text = new QAction(Note);
        actionWarp_Text->setObjectName(QStringLiteral("actionWarp_Text"));
        actionWarp_Text->setCheckable(true);
        actionPrint = new QAction(Note);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/icons/Icons/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon5);
        actionLeft = new QAction(Note);
        actionLeft->setObjectName(QStringLiteral("actionLeft"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/icons/Icons/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon6);
        actionCenter = new QAction(Note);
        actionCenter->setObjectName(QStringLiteral("actionCenter"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/icons/Icons/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter->setIcon(icon7);
        actionRight = new QAction(Note);
        actionRight->setObjectName(QStringLiteral("actionRight"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/icons/Icons/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight->setIcon(icon8);
        actionJustify = new QAction(Note);
        actionJustify->setObjectName(QStringLiteral("actionJustify"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/icons/Icons/textjustify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJustify->setIcon(icon9);
        actionBold = new QAction(Note);
        actionBold->setObjectName(QStringLiteral("actionBold"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/icons/Icons/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon10);
        actionItalics = new QAction(Note);
        actionItalics->setObjectName(QStringLiteral("actionItalics"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/icons/Icons/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalics->setIcon(icon11);
        actionUnderline = new QAction(Note);
        actionUnderline->setObjectName(QStringLiteral("actionUnderline"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/icons/Icons/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon12);
        actionText_Size = new QAction(Note);
        actionText_Size->setObjectName(QStringLiteral("actionText_Size"));
        actionFont = new QAction(Note);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        actionZoomIn = new QAction(Note);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/new/icons/Icons/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon13);
        actionZoom_Out = new QAction(Note);
        actionZoom_Out->setObjectName(QStringLiteral("actionZoom_Out"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/new/icons/Icons/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon14);
        actionOpen = new QAction(Note);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/new/icons/Icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon15);
        actionNew = new QAction(Note);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionSave = new QAction(Note);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/new/icons/Icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon16);
        actionSave_As = new QAction(Note);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/new/icons/Icons/File Save As.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon17);
        actionExport = new QAction(Note);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/new/icons/Icons/exportpdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon18);
        action_Quit = new QAction(Note);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        centralWidget = new QWidget(Note);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Note->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Note);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 594, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        menuAlingnment = new QMenu(menu_Tools);
        menuAlingnment->setObjectName(QStringLiteral("menuAlingnment"));
        menuFormatting = new QMenu(menu_Tools);
        menuFormatting->setObjectName(QStringLiteral("menuFormatting"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        Note->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Note);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setMovable(true);
        mainToolBar->setIconSize(QSize(18, 18));
        mainToolBar->setFloatable(false);
        Note->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Note);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Note->setStatusBar(statusBar);
        toolBar = new QToolBar(Note);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        toolBar->setFloatable(false);
        Note->addToolBar(Qt::TopToolBarArea, toolBar);
        Note->insertToolBarBreak(toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(action_Quit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionREDO);
        menu_Tools->addAction(actionFind);
        menu_Tools->addAction(menuAlingnment->menuAction());
        menu_Tools->addAction(menuFormatting->menuAction());
        menu_Tools->addAction(actionWarp_Text);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionPrint);
        menu_Tools->addSeparator();
        menu_Tools->addAction(actionZoomIn);
        menu_Tools->addAction(actionZoom_Out);
        menuAlingnment->addAction(actionLeft);
        menuAlingnment->addAction(actionCenter);
        menuAlingnment->addAction(actionRight);
        menuAlingnment->addSeparator();
        menuAlingnment->addAction(actionJustify);
        menuFormatting->addAction(actionBold);
        menuFormatting->addAction(actionItalics);
        menuFormatting->addAction(actionUnderline);
        menu_Help->addAction(action_About);
        menu_Help->addSeparator();
        menu_Help->addAction(actionCheck_for_Updates);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBold);
        mainToolBar->addAction(actionItalics);
        mainToolBar->addAction(actionUnderline);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExport);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoomIn);
        mainToolBar->addAction(actionZoom_Out);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionLeft);
        mainToolBar->addAction(actionCenter);
        mainToolBar->addAction(actionRight);
        mainToolBar->addAction(actionJustify);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrint);

        retranslateUi(Note);

        QMetaObject::connectSlotsByName(Note);
    } // setupUi

    void retranslateUi(QMainWindow *Note)
    {
        Note->setWindowTitle(QApplication::translate("Note", "Note", 0));
        action_About->setText(QApplication::translate("Note", "&About", 0));
        actionCheck_for_Updates->setText(QApplication::translate("Note", "Check for &Updates", 0));
        actionCut->setText(QApplication::translate("Note", "C&ut", 0));
        actionCopy->setText(QApplication::translate("Note", "&Copy", 0));
        actionPaste->setText(QApplication::translate("Note", "&Paste", 0));
        actionSelect_All->setText(QApplication::translate("Note", "Select &All", 0));
        actionUndo->setText(QApplication::translate("Note", "&Undo ", 0));
        actionREDO->setText(QApplication::translate("Note", "&Redo", 0));
        actionFind->setText(QApplication::translate("Note", "&Find", 0));
        actionWarp_Text->setText(QApplication::translate("Note", "&Warp Text", 0));
        actionPrint->setText(QApplication::translate("Note", "&Print", 0));
        actionLeft->setText(QApplication::translate("Note", "Left", 0));
        actionCenter->setText(QApplication::translate("Note", "Center", 0));
        actionRight->setText(QApplication::translate("Note", "Right", 0));
        actionJustify->setText(QApplication::translate("Note", "Justify", 0));
        actionBold->setText(QApplication::translate("Note", "Bold", 0));
        actionItalics->setText(QApplication::translate("Note", "Italics", 0));
        actionUnderline->setText(QApplication::translate("Note", "Underline", 0));
        actionText_Size->setText(QApplication::translate("Note", "Text Size", 0));
        actionFont->setText(QApplication::translate("Note", "Font", 0));
        actionZoomIn->setText(QApplication::translate("Note", "Zoom &In", 0));
        actionZoom_Out->setText(QApplication::translate("Note", "Zoom &Out", 0));
        actionOpen->setText(QApplication::translate("Note", "&Open", 0));
        actionNew->setText(QApplication::translate("Note", "&New", 0));
        actionSave->setText(QApplication::translate("Note", "&Save", 0));
        actionSave_As->setText(QApplication::translate("Note", "Save &As", 0));
        actionExport->setText(QApplication::translate("Note", "&Export", 0));
        action_Quit->setText(QApplication::translate("Note", "&Quit", 0));
        menuFile->setTitle(QApplication::translate("Note", "&File", 0));
        menuEdit->setTitle(QApplication::translate("Note", "&Edit", 0));
        menu_Tools->setTitle(QApplication::translate("Note", "&Tools", 0));
        menuAlingnment->setTitle(QApplication::translate("Note", "&Alingnment", 0));
        menuFormatting->setTitle(QApplication::translate("Note", "&Formatting", 0));
        menu_Help->setTitle(QApplication::translate("Note", "&Help", 0));
        toolBar->setWindowTitle(QApplication::translate("Note", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Note: public Ui_Note {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H
