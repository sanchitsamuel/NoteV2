#ifndef NOTE_H
#define NOTE_H

#include <QMainWindow>
#include <QMap>
#include <QPointer>
#include <QLabel>
#include <QProgressBar>

class QAction;
class QComboBox;
class QFontComboBox;
class QTextEdit;
class QTextCharFormat;
class QMenu;
class QPrinter;

namespace Ui {
class Note;
}

class Note : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Note(QWidget *parent = 0);
    ~Note();
    


private slots:
    void newFile();
    void open();
    void openARG(const QString &path);
    bool save();
    bool saveAs();
//    void find();
    void about();
    bool savecheck();
    void filePDF();
    void filePrintPreview();
    void fontChanged(const QFont &font);
    void textSize(int size);
    void printPreview(QPrinter *printer);





    void textBold();
    void textUnderline();
    void textItalic();
//    void textColor();

    void on_actionWarp_Text_triggered();

    void on_actionWarp_Text_triggered(bool checked);

    void on_actionLeft_triggered();

    void on_actionCenter_triggered();

    void on_actionRight_triggered();

    void on_actionJustify_triggered();




    void on_actionSelect_All_triggered();

    void on_actionBlack_triggered();

    void on_actionWhite_triggered();

protected:
    virtual void closeEvent(QCloseEvent *e);





private:
    Ui::Note *ui;
    void UIsetup();

    QTextEdit *textEdit;                            //main writing section
    QFontComboBox *fontBox;                         //font
    QComboBox *sizeBox;                             //size

    QString FLoc;                                   //file location to open, for inital file too!
    QString fileName;

    QStringList args;                               //Argument Storage
    bool argsC;                                     //Argument Count
    QString InitalFile;                             //Initial file

    QString fn;
    bool wrapcheck;
    
    void setCurrentFileName(const QString &fileName);
    
    //statusBar
    
    QLabel *sLabel;
    QProgressBar *sProg;
    




};



#endif // NOTE_H
