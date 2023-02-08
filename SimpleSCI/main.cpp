#include "mainwindow.h"
#include <iostream>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//    std::cout<<"Hello w "<<;

    w.setDisplay("Banialuki jakies z tymi lokienkami");
    w.show();

    std::cout<<w.sText()<<"bundle";
    return a.exec();
}
