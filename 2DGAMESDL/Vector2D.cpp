#include "Vector2D.hpp"

Vector2D::Vector2D(float xVal, float yVal)
{
	_x = new float;
	_y = new float;

	_x = &xVal;
	_y = &yVal;
}


Vector2D::~Vector2D()
{
	if (_x)
		delete _x;
	if (_y)
		delete _y;
}
