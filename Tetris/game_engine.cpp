#include "game_engine.h"
shape* game_engine::place_a_shape(board& bd, int hrz, int vrtx, int num) {
	shape* _shape = nullptr;
	
	switch(num)
	{
	case O_SHAPE :
	{
		const QPoint point = bd.get_start_location(L_SHAPE, hrz, vrtx);
		cell& tmp = bd.get_a_cell(point.x(), point.y());
		_shape = new Lshape(tmp, bd);
	}
	case S_SHAPE :
			case Z_SHAPE 2
			case T_SHAPE 3
			case I_SHAPE 4
			case J_SHAPE 5
			case L_SHAPE 6
	default:
		break;
	}

}
