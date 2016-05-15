#include "game.h"
#include "mainwindow.h"
#include "ui_game.h"
#include <stdlib.h>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QKeyEvent>

Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)
{

    ui->setupUi(this);

    //play music
    player = new QMediaPlayer();
    player->setMedia(QUrl("qrc:/music/Roll on.mp3"));
    player->play();

    //create Qlabel
    B = new QLabel();
    F = new QLabel();
    K = new QLabel();

    //make Label fousable
    ui->B->setFocus();
    ui->F->setFocus();
    ui->K->setFocus();

    x1=620;
    x2=620;
    x3=620;
    //load image
    ui->B->setPixmap(QPixmap(":/images/image/pokey7.JPG"));
    ui->F->setPixmap(QPixmap(":/images/image/pokey5.png"));
    ui->K->setPixmap(QPixmap(":/images/image/pokey4.jpg"));
    ui->B->hide();
    ui->F->hide();
    ui->K->hide();

    score=0;
    time=30;

    //create Taiko
    Timer = new QTimer();
    connect(Timer,SIGNAL(timeout()),this,SLOT(drum()));
    Timer->start(1500);

    //show score
    s = new QLabel();
    ui->s->setText(QString("SCORE ")+QString::number(score));

    //show time
    t=new QLabel();
    ui->t->setText(QString("TIME  ")+QString::number(time));
    connect(Timer,SIGNAL(timeout()),this,SLOT(timecounter()));
    Timer->start(1000);
}

Game::~Game()
{
    delete ui;
}

void Game::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_B){
        if(x1<130 && x1>20){
            ui->B->hide();
            score+=10;
            ui->s->setText(QString("SCORE  ")+QString::number(score));
        }
    }
    else if(event->key() == Qt::Key_F){
        if(x2<130 && x2>20){
            ui->F->hide();
            score+=10;
            ui->s->setText(QString("SCORE  ")+QString::number(score));
        }
    }
    else if(event->key() == Qt::Key_K){
        if(x3<130 && x3>20){
            ui->K->hide();
            score+=20;
            ui->s->setText(QString("SCORE  ")+QString::number(score));
        }
    }
}

void Game::drum()
{
    int random=rand()%3;
    //set Picture
    if(random==0){
        ui->B->setGeometry(QRect(620,130,71,61));
        ui->B->show();
        Timer1 = new QTimer(this);
        connect(Timer1,SIGNAL(timeout()),this,SLOT(moveB()));
        Timer1->start(50);
    }
    else if(random==1){
        ui->F->setGeometry(QRect(620,130,71,61));
        ui->F->show();
        Timer2 = new QTimer(this);
        connect(Timer2,SIGNAL(timeout()),this,SLOT(moveF()));
        Timer2->start(50);
    }
    else if(random==2){
        ui->K->setGeometry(QRect(620,130,71,61));
        ui->K->show();
        Timer3 = new QTimer(this);
        connect(Timer3,SIGNAL(timeout()),this,SLOT(moveK()));
        Timer3->start(50);
    }
}

void Game::moveB()
{
   x1-=2;
   ui->B->setGeometry(QRect(x1,130,71,61));
   if(x1<5){
       x1=620;
       ui->B->hide();
   }
}
void Game::moveF()
{
   x2-=2;
   ui->F->setGeometry(QRect(x2,130,71,61));
   if(x2<5){
       x2=620;
       ui->F->hide();
   }
}
void Game::moveK()
{
   x3-=2;
   ui->K->setGeometry(QRect(x3,130,71,61));
   if(x3<5){
        x3=620;
        ui->K->hide();
   }
}

void Game::timecounter()
{
    time--;
    ui->t->setText(QString("TIME  ")+QString::number(time));
    if(time==0){
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label_6->hide();
        ui->B->hide();
        ui->F->hide();
        ui->K->hide();
        ui->s->hide();
        ui->t->hide();
    }
}


void Game::on_pushButton_clicked()
{
    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->B->show();
    ui->F->show();
    ui->K->show();
    ui->s->show();
    ui->t->show();
    ui->label_9->hide();
    ui->pushButton->hide();
    /*start the game*/
    Game *game;
    game = new Game();
    game->show();
    this->close();
}

void Game::on_pushButton_2_clicked()
{

}
