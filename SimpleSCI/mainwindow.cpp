#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::setDisplay(QString text)
//{
//    ui->display->setPlainText(text);
//}

void MainWindow::setDisplay(std::string text)
{
    //QString::fromStdString(text)
    ui->display->setPlainText(QString::fromStdString(text));
}



void MainWindow::on_actionNowy_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}

void MainWindow::on_actionOtw_rz_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open the file");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::ReadOnly | QFile:: Text)){
        QMessageBox::warning(this,"Warning","Cannot open file :" + file.errorString());
        return;
    }

    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText((text));
    file.close();
}

void MainWindow::on_actionZapisz_jako_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,"Save as");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QIODevice::WriteOnly | QFile:: Text)){
        QMessageBox::warning(this,"Warning","Cannot save file :" + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();

    out << text;
    file.close();
}

void MainWindow::on_update_btn_clicked() // aktualizujemy baze wpisujac do niej caly stan wejsciowy (to nie jest append!)
{   this->Text(ui->textEdit->toPlainText());
    ui->display->setPlainText(this->Text()); //wrzucamy do
}
