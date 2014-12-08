/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(484, 120);
        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(390, 80, 81, 221));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(About);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 61, 64));
        label->setPixmap(QPixmap(QString::fromUtf8("../build-Kirillov-Desktop_Qt_5_3_GCC_64bit-Debug/1415750810_79904.ico")));
        label_2 = new QLabel(About);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 101, 20));
        QFont font;
        font.setItalic(true);
        label_2->setFont(font);
        label_3 = new QLabel(About);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 20, 351, 17));
        label_4 = new QLabel(About);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 40, 221, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_5 = new QLabel(About);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 60, 241, 17));
        label_5->setFont(font1);

        retranslateUi(About);
        QObject::connect(buttonBox, SIGNAL(accepted()), About, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), About, SLOT(reject()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("About", "\320\243\320\275\320\270\320\232\320\230\320\242 2014", 0));
        label_3->setText(QApplication::translate("About", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\320\260\320\275\320\260 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260\320\274\320\270 \320\263\321\200\321\203\320\277\320\277\321\213 \320\237-403:", 0));
        label_4->setText(QApplication::translate("About", "\320\241\320\276\320\273\320\276\320\262\321\214\320\265\320\262\321\213\320\274 \320\220\320\273\320\265\320\272\321\201\320\260\320\275\320\264\321\200\320\276\320\274", 0));
        label_5->setText(QApplication::translate("About", "\320\223\321\203\321\200\321\214\321\217\320\275\320\276\320\262\320\276\320\271 \320\256\320\273\320\270\320\265\320\271", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
