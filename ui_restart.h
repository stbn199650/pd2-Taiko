/********************************************************************************
** Form generated from reading UI file 'restart.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTART_H
#define UI_RESTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Restart
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *score2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Restart)
    {
        if (Restart->objectName().isEmpty())
            Restart->setObjectName(QStringLiteral("Restart"));
        Restart->resize(673, 532);
        centralwidget = new QWidget(Restart);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 230, 91, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\216\213\346\274\242\345\256\227\345\213\230\344\272\255\346\265\201\347\271\201"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 230, 91, 61));
        pushButton_2->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 671, 501));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/image/pokey.jpg")));
        label->setScaledContents(true);
        score2 = new QLabel(centralwidget);
        score2->setObjectName(QStringLiteral("score2"));
        score2->setGeometry(QRect(260, 140, 131, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        score2->setFont(font1);
        score2->setAlignment(Qt::AlignCenter);
        Restart->setCentralWidget(centralwidget);
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        score2->raise();
        menubar = new QMenuBar(Restart);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 673, 20));
        Restart->setMenuBar(menubar);
        statusbar = new QStatusBar(Restart);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Restart->setStatusBar(statusbar);

        retranslateUi(Restart);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Restart, SLOT(close()));

        QMetaObject::connectSlotsByName(Restart);
    } // setupUi

    void retranslateUi(QMainWindow *Restart)
    {
        Restart->setWindowTitle(QApplication::translate("Restart", "MainWindow", 0));
        pushButton->setText(QApplication::translate("Restart", "RESTART", 0));
        pushButton_2->setText(QApplication::translate("Restart", "EXIT", 0));
        label->setText(QString());
        score2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Restart: public Ui_Restart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTART_H
