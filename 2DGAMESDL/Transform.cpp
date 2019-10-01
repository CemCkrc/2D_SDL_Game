#include "Transform.hpp"



Transform::Transform()
{
}


Transform::~Transform()
{
	if (pos)
		delete pos;
	if (rot)
		delete rot;
}
