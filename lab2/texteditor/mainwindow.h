#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QWidget>
#include <QMessageBox>
#include <QCloseEvent>
#include <QFontDialog>
#include <QFileDialog>
#include <QTextStream>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionRedo_triggered();

    void on_actionUndo_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionClose_triggered();

    void on_actionExit_triggered();

    void documentModified();

    void on_actionAbout_triggered();

    void on_actionFont_triggered();

    void on_actionOpen_triggered();

    bool on_actionSave_triggered();

    bool on_actionSave_as_triggered();

    void setFileName(const QString &);

private:
    Ui::MainWindow *ui;
    QString file_path_;


protected:
    void closeEvent(QCloseEvent *e);

};

#endif // MAINWINDOW_H
