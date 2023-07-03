#include "Tetris.h"

/*
 类：
   棋盘类：
        -Cells[][]
        +getCells[][]
        +setCells[][]
   形状类（父类）：
        -color
        -Lshape[][]
        -Oshape[][]
        -Zshape[][]
        -Tshape[][]
        -Sshape[][]
        -Ishape[][]
        +rotate
   方格类：
        -color
        -location（cells中的位置）
        -position（ui界面上的位置）

   游戏引擎（游戏控制台去操控上面三个类）：
        -move
        +moveleft
        +moveright
        +movedown
        +generateshape(random)
        +putonboard
   qt主窗口类（ui界面）:
        +keyrelease(左右下移动)
        +keypress
        +paint


    图形放在棋盘上
    自己向下移动
    可向左向右移动
    可旋转
    消除行
    计分
*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tetris w;
    w.show();
    return a.exec();
}
