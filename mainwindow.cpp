#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include <QApplication>
#include <QPushButton>
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    player = new QMediaPlayer();
    player->setMedia(QUrl("qrc:/music/pika.mp3"));
    player->play();

    ui->setupUi(this);//GIF image
    GIF = new QLabel();
    GIF->setGeometry(QRect(0,0,531,411));
    movie = new QMovie(":/images/image/gif.gif");
    ui->GIF->setMovie(movie);
    movie->start();
    ui->GIF->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
    game = new Game(this);
    game->show();
}
