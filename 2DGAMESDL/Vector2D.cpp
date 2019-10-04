#include "Vector2D.hpp"

<<<<<<< HEAD
// TODO: Add friendly operators
=======
//TODO: Add friendly operators
>>>>>>> ea9bc2b113a32f01a67d0b56c80bd418b97d7f74

Vector2D::Vector2D(float xVal, float yVal)
{
	_x = new float;
	_y = new float;

	*_x = xVal;
	*_y = yVal;
}


Vector2D::~Vector2D()
{
	if (_x)
		delete _x;
	if (_y)
		delete _y;
}
