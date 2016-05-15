/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *B;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line;
    QLabel *t;
    QLabel *s;
    QLabel *K;
    QLabel *F;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *score;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(701, 522);
        centralwidget = new QWidget(Game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -20, 701, 521));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/image/pokemon1.jpg")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 120, 701, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/image/sfieldbg_gogo.png")));
        label_2->setScaledContents(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 61, 61));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/image/pokemon2.png")));
        B = new QLabel(centralwidget);
        B->setObjectName(QStringLiteral("B"));
        B->setGeometry(QRect(640, 130, 61, 61));
        B->setFocusPolicy(Qt::ClickFocus);
        B->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 430, 61, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/image/F.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 430, 91, 61));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/image/B.jpg")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 430, 91, 61));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/image/K.jpg")));
        label_6->setScaledContents(true);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(130, 130, 3, 61));
        line->setAutoFillBackground(true);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        t = new QLabel(centralwidget);
        t->setObjectName(QStringLiteral("t"));
        t->setGeometry(QRect(580, 10, 111, 51));
        QFont font;
        font.setFamily(QStringLiteral("Tempus Sans ITC"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        t->setFont(font);
        t->setScaledContents(true);
        s = new QLabel(centralwidget);
        s->setObjectName(QStringLiteral("s"));
        s->setGeometry(QRect(560, 70, 131, 51));
        s->setFont(font);
        s->setScaledContents(true);
        K = new QLabel(centralwidget);
        K->setObjectName(QStringLiteral("K"));
        K->setGeometry(QRect(640, 130, 61, 61));
        K->setScaledContents(true);
        F = new QLabel(centralwidget);
        F->setObjectName(QStringLiteral("F"));
        F->setGeometry(QRect(640, 130, 61, 61));
        F->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 701, 491));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/image/pokey.jpg")));
        label_9->setScaledContents(true);
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setWordWrap(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(230, 300, 111, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Caslon Pro Bold"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 300, 111, 61));
        pushButton_2->setFont(font1);
        score = new QLabel(centralwidget);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(310, 210, 101, 61));
        Game->setCentralWidget(centralwidget);
        label_9->raise();
        pushButton_2->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        line->raise();
        t->raise();
        s->raise();
        B->raise();
        F->raise();
        K->raise();
        score->raise();
        menubar = new QMenuBar(Game);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 701, 20));
        Game->setMenuBar(menubar);

        retranslateUi(Game);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Game, SLOT(close()));

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "MainWindow", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        B->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        t->setText(QString());
        s->setText(QString());
        K->setText(QString());
        F->setText(QString());
        label_9->setText(QString());
        pushButton->setText(QApplication::translate("Game", "RESTART", 0));
        pushButton_2->setText(QApplication::translate("Game", "EXIT", 0));
        score->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
