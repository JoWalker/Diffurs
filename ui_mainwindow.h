/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(587, 470);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 60, 411, 20));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 10, 278, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 320, 171, 51));
        pushButton->setIconSize(QSize(150, 150));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 80, 401, 161));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 131, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 210, 251, 191));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/1.jpg")));
        label_3->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 587, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\265\320\271\321\210\320\265\320\265 \320\224\320\243 I \320\277\320\276\321\200\321\217\320\264\320\272\320\260", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\224\320\243 \321\201 \321\200\320\260\320\267\320\264\320\265\320\273\321\217\321\216\321\211\320\270\320\274\320\270\321\201\321\217 \320\277\320\265\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\274\320\270 I \320\277\320\276\321\200\321\217\320\264\320\272\320\260", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\275\320\276\320\265 \320\275\320\265\320\276\320\264\320\275\320\276\321\200\320\276\320\264\320\275\320\276\320\265 \320\224\320\243 I \320\277\320\276\321\200\321\217\320\264\320\272\320\260", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\224\320\243 \320\221\320\265\321\200\320\275\321\203\320\273\320\273\320\270 I \320\277\320\276\321\200\321\217\320\264\320\272\320\260", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\320\243\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265 \320\262 \320\277\320\276\320\273\320\275\321\213\321\205 \320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\320\260\320\273\320\260\321\205 I \320\277\320\276\321\200\321\217\320\264\320\272\320\260", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("MainWindow", "\320\240\320\265\321\210\320\270\321\202\321\214", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\320\265:", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
