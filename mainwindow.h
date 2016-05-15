#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#if QT_VERSION >= 0x050000
#include <QtWidgets/QMainWindow>
#else
#include <QtWidgets/QMainWindow>
#endif

#include "game.h"
#include <QLabel>
#include <QObject>
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();    
    int score;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Game *game;
    QLabel * GIF;
    QMovie * movie;
    QMediaPlayer * player;
    QLabel *label;

};

#endif // MAINWINDOW_H
