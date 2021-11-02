/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *left_Button;
    QPushButton *show_Button;
    QPushButton *hide_Button;
    QPushButton *right_Button;
    QCheckBox *lock_CheckBox;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 140, 81, 41));
        left_Button = new QPushButton(centralwidget);
        left_Button->setObjectName(QString::fromUtf8("left_Button"));
        left_Button->setGeometry(QRect(250, 60, 91, 41));
        show_Button = new QPushButton(centralwidget);
        show_Button->setObjectName(QString::fromUtf8("show_Button"));
        show_Button->setGeometry(QRect(350, 10, 91, 41));
        hide_Button = new QPushButton(centralwidget);
        hide_Button->setObjectName(QString::fromUtf8("hide_Button"));
        hide_Button->setGeometry(QRect(350, 60, 91, 41));
        right_Button = new QPushButton(centralwidget);
        right_Button->setObjectName(QString::fromUtf8("right_Button"));
        right_Button->setGeometry(QRect(450, 60, 91, 41));
        lock_CheckBox = new QCheckBox(centralwidget);
        lock_CheckBox->setObjectName(QString::fromUtf8("lock_CheckBox"));
        lock_CheckBox->setGeometry(QRect(360, 520, 81, 21));
        listWidget = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 350, 256, 192));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 300, 251, 21));
        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(60, 320, 166, 22));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "This is the label", nullptr));
        left_Button->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        show_Button->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        hide_Button->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        right_Button->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        lock_CheckBox->setText(QCoreApplication::translate("MainWindow", "Lock/Unlock", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Test1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Test2", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Test3", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
