/********************************************************************************
** Form generated from reading UI file 're.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RE_H
#define UI_RE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Re
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *Re)
    {
        if (Re->objectName().isEmpty())
            Re->setObjectName(QStringLiteral("Re"));
        Re->resize(665, 501);
        pushButton = new QPushButton(Re);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 280, 101, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\216\213\346\274\242\345\256\227\345\213\230\344\272\255\346\265\201\347\271\201"));
        font.setPointSize(11);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Re);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 280, 101, 51));
        pushButton_2->setFont(font);
        label = new QLabel(Re);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 671, 501));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/image/pokey.jpg")));
        label->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(Re);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Re, SLOT(close()));

        QMetaObject::connectSlotsByName(Re);
    } // setupUi

    void retranslateUi(QDialog *Re)
    {
        Re->setWindowTitle(QApplication::translate("Re", "Dialog", 0));
        pushButton->setText(QApplication::translate("Re", "RESTART", 0));
        pushButton_2->setText(QApplication::translate("Re", "EXIT", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Re: public Ui_Re {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RE_H
