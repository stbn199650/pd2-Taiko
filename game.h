#ifndef GAME_H
#define GAME_H

#if QT_VERSION >= 0x050000
#include <QtWidgets/QMainWindow>
#else
#include <QtWidgets/QMainWindow>
#endif

#include <QTimer>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QKeyEvent>
#include <QString>
#include <QMediaPlayer>

namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = 0);
    ~Game();
    void keyPressEvent(QKeyEvent *event);
    void restart();
public slots:
    void drum();
    void moveB();
    void moveF();
    void moveK();
    void timecounter();


private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Game *ui;
    QTimer * Timer;
    QTimer * Timer1;
    QTimer * Timer2;
    QTimer * Timer3;
    QLabel * label_7,* label_8,* label_9;
    QLabel * s,* t,*B,* F,* K;
    QMediaPlayer * player;
    int score;
    int time;
    int x1;
    int x2;
    int x3;

};

#endif // GAME_H
