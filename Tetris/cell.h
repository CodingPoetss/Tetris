#pragma once
#include"public.h"

class cell{
private:
	QPointF position;			//ȫ��λ��
	QPoint location;			//����λ��
	cell& copy(const cell&);   //��װ��һ���������������ڿ������캯��������=
	int color;					//�����ͱ���������ɫ�������ת��ΪQColor

public:
	cell(){}
	cell(QPointF&, QPoint&, int _color = NO_COLOR);
	cell(const cell& c) { copy(c); }
	cell& operator=(const cell& c) { copy(c); }
	int getColor() { return color; }
	void setColor(int _color) { color = _color; }
	QPointF& getPosition() { return position; }
	QPoint& getLocation() { return location; }
	QColor draw_cell_color()const;
	~cell();







};

