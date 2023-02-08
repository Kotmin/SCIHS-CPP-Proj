#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QMessageBox>
#include<QtPrintSupport/QAbstractPrintDialog>
#include<QtPrintSupport/QPrinter>
#include<iostream>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Ui::MainWindow *ui;
    QString currentFile = ""; // uchwyt dla naszej bazy
    QString display = "";

    void updateCurrentFile_fromTextF(){}; //f pomocnicza
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString const Text(){return currentFile;}; //getter
    std::string const sText(){return this->Text().toStdString();}; //getter ale zwracajacy string
    void Text(std::string text){currentFile = QString::fromStdString(text);}; //setter
    void Text(QString text){currentFile = std::move(text);};

//    void setDisplay(QString text); //wrzucenie czegos na display, nie zmienia bazy, odpowiednik cout
    void setDisplay(std::string text);

private slots:
    void on_actionNowy_triggered();

    void on_actionOtw_rz_triggered();

    void on_actionZapisz_jako_triggered();


    void on_update_btn_clicked();
};
#endif // MAINWINDOW_H
