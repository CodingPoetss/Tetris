#pragma once
#include"public.h"

class cell{
private:
	QPointF position;			//全局位置
	QPoint location;			//棋盘位置
	cell& copy(const cell&);   //封装的一个拷贝函数，用于拷贝构造函数和重载=
	int color;					//用整型变量代表颜色，随后再转换为QColor

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

