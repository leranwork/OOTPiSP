#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    this->setAttribute(Qt::WA_DeleteOnClose);

    setWindowTitle("untitled[*]");

    ui->actionCopy->setEnabled(false);
    ui->actionCut->setEnabled(false);
    ui->actionUndo->setEnabled(false);
    ui->actionRedo->setEnabled(false);

    connect(ui->textEdit, SIGNAL(textChanged()), this, SLOT(documentModified()));
    connect(ui->textEdit, SIGNAL(copyAvailable(bool)), ui->actionCopy, SLOT(setEnabled(bool)));
    connect(ui->textEdit, SIGNAL(copyAvailable(bool)), ui->actionCut, SLOT(setEnabled(bool)));
    connect(ui->textEdit, SIGNAL(undoAvailable(bool)), ui->actionUndo, SLOT(setEnabled(bool)));
    connect(ui->textEdit, SIGNAL(redoAvailable(bool)), ui->actionRedo, SLOT(setEnabled(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    MainWindow *window = new MainWindow;
    window->show();
}

void MainWindow::on_actionOpen_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this,"Открыть файл");
      QFile file(file_name);
      file_path_ = file_name;
      if(!file.open(QFile::ReadOnly | QFile::Text)) {
          QMessageBox::warning(this,"..","файл не открыт");
          return;
        }
      QTextStream in(&file);
      QString text = in.readAll();
      ui->textEdit->setText(text);
      file_path_=file_name;
      file.close();
      setFileName(file_name);
      setWindowModified(false);

}

bool MainWindow::on_actionSave_triggered()
{
    if (file_path_.isNull()) {
        return (on_actionSave_as_triggered());
    }
    else {
        QFile file(file_path_);
        if(!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this,"..","файл не открыт");
            return false;
          }
        QTextStream out(&file);
        QString text = ui->textEdit->toPlainText();
        out << text;
        file.flush();
        file.close();
        setWindowModified(false);
        return true;
    }

}

bool MainWindow::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить документ",
       file_path_.isNull()?QDir::currentPath():file_path_, "Текстовый документ (*.txt)");
    if (fileName.isNull()) {
        return false;
    }
    else {
        setFileName(fileName);
        on_actionSave_triggered();
    }

}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    qApp->aboutQt();
}

void MainWindow::on_actionClose_triggered()
{
    this->close();
}

void MainWindow::on_actionExit_triggered()
{
    qApp->closeAllWindows();
}

void MainWindow::closeEvent(QCloseEvent *e)
{
if(ui->textEdit->document()->isModified())
    {
        QMessageBox msgBox;
        msgBox.warning(this,"Документ изменен",
                                            "Документ был изменен. "
                                            "Сохранить изменения?\n"
                                            "Несохраненная информация будет утрачена.",
                                            QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel,
                                            QMessageBox::Cancel);
        msgBox.setButtonText(QMessageBox::Yes, "Да");
        msgBox.setButtonText(QMessageBox::No, "Нет");
        msgBox.setButtonText(QMessageBox::Cancel, "Отмена");

        switch (msgBox.exec())
        {
        case QMessageBox::Yes:
            on_actionSave_triggered();
        case QMessageBox::No:
            e->accept();
            break;
        case QMessageBox::Cancel:
            e->ignore();
            break;
        }
    }
    else
    {
        e->accept();
    }

}

void MainWindow::documentModified() {
    setWindowModified(true);
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("О приложении"),
                tr("Приложения <b>Редактор</b> демонстрирует как "
                   "создавать современный интерфейсс использованием Qt."));
}

void MainWindow::on_actionFont_triggered()
{
    bool ok;
      QFont font = QFontDialog::getFont(&ok, this);

      if (ok) {
          ui->textEdit->setFont(font);
        } else return;
}

void MainWindow::setFileName(const QString &str)
{
    file_path_ = str;
    setWindowTitle(QString("%1[*] - %2")
                   .arg(file_path_.isNull()?"untitled":QFileInfo(file_path_).fileName())
                   .arg(QApplication::applicationName())
);
}

