#pragma once

#include <QtWidgets/QWidget>
#include "ui_Tetris.h"

class Tetris : public QWidget
{
    Q_OBJECT

public:
    Tetris(QWidget *parent = nullptr);
    ~Tetris();

private:
    Ui::TetrisClass ui;
};
