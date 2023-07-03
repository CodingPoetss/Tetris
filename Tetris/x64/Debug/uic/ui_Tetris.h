/********************************************************************************
** Form generated from reading UI file 'Tetris.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TETRIS_H
#define UI_TETRIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TetrisClass
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TetrisClass)
    {
        if (TetrisClass->objectName().isEmpty())
            TetrisClass->setObjectName(QString::fromUtf8("TetrisClass"));
        TetrisClass->resize(600, 400);
        pushButton = new QPushButton(TetrisClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 170, 111, 51));

        retranslateUi(TetrisClass);

        QMetaObject::connectSlotsByName(TetrisClass);
    } // setupUi

    void retranslateUi(QWidget *TetrisClass)
    {
        TetrisClass->setWindowTitle(QCoreApplication::translate("TetrisClass", "Tetris", nullptr));
        pushButton->setText(QCoreApplication::translate("TetrisClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TetrisClass: public Ui_TetrisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TETRIS_H
