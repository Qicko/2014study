/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *allBySelf;
    QAction *allAuto;
    QAction *menuExit;
    QWidget *centralWidget;
    QListWidget *listWidget;
    QCheckBox *checkBox;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label;
    QListWidget *listWidget_2;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QSpinBox *spinBox;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuSds;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(695, 546);
        allBySelf = new QAction(MainWindow);
        allBySelf->setObjectName(QStringLiteral("allBySelf"));
        allAuto = new QAction(MainWindow);
        allAuto->setObjectName(QStringLiteral("allAuto"));
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 441, 231));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(140, 0, 98, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 0, 231, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 60, 231, 20));
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(620, 20, 69, 27));
        doubleSpinBox->setMaximum(50);
        doubleSpinBox->setSingleStep(0.1);
        doubleSpinBox->setValue(15);
        doubleSpinBox_2 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(620, 80, 69, 27));
        doubleSpinBox_2->setMaximum(100);
        doubleSpinBox_2->setSingleStep(0.1);
        doubleSpinBox_2->setValue(30);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 120, 211, 17));
        doubleSpinBox_3 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(620, 140, 69, 27));
        doubleSpinBox_3->setSingleStep(0.1);
        doubleSpinBox_3->setValue(50);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(480, 180, 201, 17));
        doubleSpinBox_4 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(620, 200, 69, 27));
        doubleSpinBox_4->setSingleStep(0.1);
        doubleSpinBox_4->setValue(80);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 121, 17));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 280, 671, 151));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 260, 241, 17));
        doubleSpinBox_5 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(540, 240, 69, 27));
        doubleSpinBox_5->setValue(19);
        doubleSpinBox_6 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(620, 240, 69, 27));
        doubleSpinBox_6->setValue(60);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(470, 240, 48, 27));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 695, 24));
        menuBar->setDefaultUp(true);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuSds = new QMenu(menuBar);
        menuSds->setObjectName(QStringLiteral("menuSds"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(listWidget, checkBox);
        QWidget::setTabOrder(checkBox, doubleSpinBox);
        QWidget::setTabOrder(doubleSpinBox, doubleSpinBox_2);
        QWidget::setTabOrder(doubleSpinBox_2, doubleSpinBox_3);
        QWidget::setTabOrder(doubleSpinBox_3, doubleSpinBox_4);
        QWidget::setTabOrder(doubleSpinBox_4, listWidget_2);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuSds->menuAction());
        menu->addAction(allBySelf);
        menu->addAction(allAuto);
        menu->addAction(menuExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\241\320\243\320\232\320\242 \320\222\320\246", 0));
        allBySelf->setText(QApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\271 \320\262\320\262\320\276\320\264", 0));
        allAuto->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\262\320\262\320\276\320\264", 0));
        menuExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
#ifndef QT_NO_TOOLTIP
        menuExit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\320\224\320\260\320\275\320\275\321\213\320\271 \320\277\321\203\320\275\320\272\321\202 \320\274\320\265\320\275\321\216 \320\277\320\276\320\267\320\262\320\276\320\273\321\217\320\265\321\202 \320\277\320\276\320\272\320\270\320\275\321\203\321\202\321\214 \321\201\320\270\321\221 \321\202\320\262\320\276\321\200\320\265\320\275\320\270\320\265 \321\207\320\265\320\273\320\276\320\262\320\265\321\207\320\265\321\201\320\272\320\276\320\271 \320\274\321\213\321\201\320\273\320\270, \321\200\320\265\320\260\320\273\320\270\320\267\320\276\320\262\320\260\320\275\320\275\320\276\320\265 \320\277\320\276\321\201\321\200\320\265\320\264\321\201\321\202\320\262\320\276\320\274 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260 \320\272\320\274\320\276\320\277\321\214\321\216\321\202\320\265\321\200\320\275\321\213\321\205 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\271.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        menuExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        checkBox->setText(QApplication::translate("MainWindow", "On/Off", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260(C):", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260(C):", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214(%):", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214(%):", 0));
        label->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\321\213:", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\233\320\276\320\263 \320\276\321\210\320\270\320\261\320\276\320\272 \320\270 \320\277\321\200\320\265\320\264\321\203\320\277\321\200\320\265\320\266\320\264\320\265\320\275\320\270\320\271:", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", 0));
        menuSds->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
