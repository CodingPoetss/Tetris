#pragma once
#include"public.h"
#include"cell.h"

class shape{
public:
	shape(cell&, board& bd);
	virtual ~shape() = 0;
	virtual void rotate();
	int getColor() { return color; }
	cell& get_a_cell(int n) { return cells[n]; }
	void set_a_cell(int n, cell& _cell) { cells[n] = _cell; }

protected:
	virtual void compute_rotate_position();
	bool is_valid_position(int);
	int color;
	cell cells[NUM_OF_SHAPES];
	QPoint rotate_positions[NUMBER_OF_ROTATE_POSITIONS][NUM_OF_CELLS];
	int which_position;
	board m_bd;
};

