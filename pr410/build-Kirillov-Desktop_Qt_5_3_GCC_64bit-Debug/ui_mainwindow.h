/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QAction *authors;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QGroupBox *groupBox_2;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QGroupBox *groupBox_3;
    QDial *dial;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_7;
    QLabel *label_8;
    QDial *dial_2;
    QLabel *label_9;
    QGroupBox *groupBox_4;
    QListWidget *listWidget;
    QGroupBox *groupBox_5;
    QListWidget *listWidget_2;
    QGroupBox *groupBox_6;
    QPushButton *pushButton;
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
        MainWindow->resize(714, 739);
        allBySelf = new QAction(MainWindow);
        allBySelf->setObjectName(QStringLiteral("allBySelf"));
        allAuto = new QAction(MainWindow);
        allAuto->setObjectName(QStringLiteral("allAuto"));
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName(QStringLiteral("menuExit"));
        authors = new QAction(MainWindow);
        authors->setObjectName(QStringLiteral("authors"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 381, 81));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 231, 27));
        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(240, 20, 69, 27));
        doubleSpinBox->setMaximum(50);
        doubleSpinBox->setSingleStep(0.1);
        doubleSpinBox->setValue(15);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 231, 27));
        doubleSpinBox_2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(240, 50, 69, 27));
        doubleSpinBox_2->setMaximum(100);
        doubleSpinBox_2->setSingleStep(0.1);
        doubleSpinBox_2->setValue(30);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 0, 311, 80));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 211, 27));
        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(230, 20, 69, 27));
        doubleSpinBox_3->setSingleStep(0.1);
        doubleSpinBox_3->setValue(50);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 50, 221, 27));
        doubleSpinBox_4 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(230, 50, 69, 27));
        doubleSpinBox_4->setSingleStep(0.1);
        doubleSpinBox_4->setValue(80);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(570, 100, 120, 271));
        dial = new QDial(groupBox_3);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(20, 80, 71, 51));
        dial->setValue(19);
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(30, 20, 61, 27));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        doubleSpinBox_6 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(20, 230, 69, 27));
        doubleSpinBox_6->setValue(60);
        doubleSpinBox_5 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(20, 130, 69, 27));
        doubleSpinBox_5->setValue(19);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 20, 31, 27));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 60, 111, 17));
        dial_2 = new QDial(groupBox_3);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setGeometry(QRect(20, 180, 71, 51));
        dial_2->setValue(60);
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 160, 81, 17));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 100, 561, 291));
        listWidget = new QListWidget(groupBox_4);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 541, 271));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 400, 681, 191));
        listWidget_2 = new QListWidget(groupBox_5);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 30, 671, 151));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 590, 681, 80));
        pushButton = new QPushButton(groupBox_6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 30, 85, 33));
        QIcon icon;
        icon.addFile(QStringLiteral("../build-Kirillov-Desktop_Qt_5_3_GCC_64bit-Debug/sysoff.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(150, 58));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 714, 25));
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
        QWidget::setTabOrder(listWidget, doubleSpinBox);
        QWidget::setTabOrder(doubleSpinBox, doubleSpinBox_2);
        QWidget::setTabOrder(doubleSpinBox_2, doubleSpinBox_3);
        QWidget::setTabOrder(doubleSpinBox_3, doubleSpinBox_4);
        QWidget::setTabOrder(doubleSpinBox_4, listWidget_2);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuSds->menuAction());
        menu->addAction(allBySelf);
        menu->addAction(allAuto);
        menu->addAction(menuExit);
        menuSds->addAction(authors);

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
        authors->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\321\213", 0));
#ifndef QT_NO_TOOLTIP
        authors->setToolTip(QApplication::translate("MainWindow", "\320\232\320\270\321\200\320\270\320\273\320\273\320\276\320\262 \320\277\321\203\320\277\321\201\320\270\320\272", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\276\320\271", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260(C):", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \321\202\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260(C):", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214\321\216", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214(%):", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214(%):", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\232\320\260\320\261\320\270\320\275\320\265\321\202\321\213", 0));
        label_7->setText(QApplication::translate("MainWindow", "#", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260:", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214:", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\202 \320\276 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\270 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\233\320\276\320\263 \320\276\321\210\320\270\320\261\320\276\320\272 \320\270 \320\277\321\200\320\265\320\264\321\203\320\277\321\200\320\265\320\266\320\264\320\265\320\275\320\270\320\271:", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0));
        pushButton->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", 0));
        menuSds->setTitle(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
