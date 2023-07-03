#include "Tetris.h"

/*
 �ࣺ
   �����ࣺ
        -Cells[][]
        +getCells[][]
        +setCells[][]
   ��״�ࣨ���ࣩ��
        -color
        -Lshape[][]
        -Oshape[][]
        -Zshape[][]
        -Tshape[][]
        -Sshape[][]
        -Ishape[][]
        +rotate
   �����ࣺ
        -color
        -location��cells�е�λ�ã�
        -position��ui�����ϵ�λ�ã�

   ��Ϸ���棨��Ϸ����̨ȥ�ٿ����������ࣩ��
        -move
        +moveleft
        +moveright
        +movedown
        +generateshape(random)
        +putonboard
   qt�������ࣨui���棩:
        +keyrelease(�������ƶ�)
        +keypress
        +paint


    ͼ�η���������
    �Լ������ƶ�
    �����������ƶ�
    ����ת
    ������
    �Ʒ�
*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tetris w;
    w.show();
    return a.exec();
}
