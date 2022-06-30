/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *Run;
    QPushButton *Paste;
    QPushButton *connect;
    QPushButton *Remove;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Save;
    QListWidget *listWidget_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(698, 530);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 2, 1, 4);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        Run = new QPushButton(centralwidget);
        Run->setObjectName(QString::fromUtf8("Run"));

        gridLayout->addWidget(Run, 2, 5, 1, 1);

        Paste = new QPushButton(centralwidget);
        Paste->setObjectName(QString::fromUtf8("Paste"));

        gridLayout->addWidget(Paste, 2, 4, 1, 1);

        connect = new QPushButton(centralwidget);
        connect->setObjectName(QString::fromUtf8("connect"));

        gridLayout->addWidget(connect, 3, 2, 1, 4);

        Remove = new QPushButton(centralwidget);
        Remove->setObjectName(QString::fromUtf8("Remove"));

        gridLayout->addWidget(Remove, 2, 3, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 4, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 2);

        Save = new QPushButton(centralwidget);
        Save->setObjectName(QString::fromUtf8("Save"));

        gridLayout->addWidget(Save, 2, 2, 1, 1);

        listWidget_2 = new QListWidget(centralwidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        gridLayout->addWidget(listWidget_2, 4, 2, 1, 4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Content", nullptr));
        Run->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        Paste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        Remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Commands preset:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Commands:", nullptr));
        Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
