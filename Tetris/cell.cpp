#include "cell.h"

cell::cell(QPointF& _position, QPoint& _location, int _color) {
	position = _position;
	location = _location;
	color = _color;
}
cell& cell::copy(const cell& c) {
	position = c.position;
	location = c.location;
	color = c.color;
}

QColor cell::draw_cell_color() const{
	QColor qcolor;
	switch (color) {
	case RED :
		qcolor = QColor{ "red" };
	case YELLOW:
		qcolor = QColor{ "yellow" };
	case BLUE :
		qcolor = QColor{ "blue" };
	case GRAY :
		qcolor = QColor{ "gray" };
	case BLACK :
		qcolor = QColor{ "black" };
	case PURPLE :
		qcolor = QColor{ "purple" };
	case ORANGE :
		qcolor = QColor{ "orange" };
	}

	return qcolor;
}