/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowy;
    QAction *actionOtw_rz;
    QAction *actionZapisz_jako;
    QAction *actionZamknij;
    QAction *actionDodaj_studenta;
    QAction *actionUsu_studenta;
    QWidget *centralwidget;
    QToolButton *toolButton;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *update_btn;
    QLabel *label_2;
    QPlainTextEdit *display;
    QMenuBar *menubar;
    QMenu *menuPlik;
    QMenu *menuEdycja;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNowy = new QAction(MainWindow);
        actionNowy->setObjectName(QString::fromUtf8("actionNowy"));
        actionOtw_rz = new QAction(MainWindow);
        actionOtw_rz->setObjectName(QString::fromUtf8("actionOtw_rz"));
        actionZapisz_jako = new QAction(MainWindow);
        actionZapisz_jako->setObjectName(QString::fromUtf8("actionZapisz_jako"));
        actionZamknij = new QAction(MainWindow);
        actionZamknij->setObjectName(QString::fromUtf8("actionZamknij"));
        actionDodaj_studenta = new QAction(MainWindow);
        actionDodaj_studenta->setObjectName(QString::fromUtf8("actionDodaj_studenta"));
        actionUsu_studenta = new QAction(MainWindow);
        actionUsu_studenta->setObjectName(QString::fromUtf8("actionUsu_studenta"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(20, 510, 28, 27));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 510, 84, 28));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 70, 551, 70));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 63, 20));
        update_btn = new QPushButton(centralwidget);
        update_btn->setObjectName(QString::fromUtf8("update_btn"));
        update_btn->setGeometry(QRect(480, 160, 84, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 180, 63, 20));
        display = new QPlainTextEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(20, 210, 551, 251));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuPlik = new QMenu(menubar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuEdycja = new QMenu(menubar);
        menuEdycja->setObjectName(QString::fromUtf8("menuEdycja"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuPlik->menuAction());
        menubar->addAction(menuEdycja->menuAction());
        menuPlik->addAction(actionNowy);
        menuPlik->addAction(actionOtw_rz);
        menuPlik->addAction(actionZapisz_jako);
        menuPlik->addAction(actionZamknij);
        menuEdycja->addAction(actionDodaj_studenta);
        menuEdycja->addAction(actionUsu_studenta);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNowy->setText(QCoreApplication::translate("MainWindow", "Nowy", nullptr));
        actionOtw_rz->setText(QCoreApplication::translate("MainWindow", "Otw\303\263rz", nullptr));
        actionZapisz_jako->setText(QCoreApplication::translate("MainWindow", "Zapisz jako", nullptr));
        actionZamknij->setText(QCoreApplication::translate("MainWindow", "Zamknij", nullptr));
        actionDodaj_studenta->setText(QCoreApplication::translate("MainWindow", "Dodaj studenta", nullptr));
        actionUsu_studenta->setText(QCoreApplication::translate("MainWindow", "Usu\305\204 studenta", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Zamknij", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        update_btn->setText(QCoreApplication::translate("MainWindow", "Aktualizuj", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuPlik->setTitle(QCoreApplication::translate("MainWindow", "Plik", nullptr));
        menuEdycja->setTitle(QCoreApplication::translate("MainWindow", "Edycja", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
