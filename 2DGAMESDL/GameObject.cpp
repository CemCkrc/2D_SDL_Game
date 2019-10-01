#include "GameObject.hpp"



GameObject::GameObject()
{
}


GameObject::~GameObject()
{
	if (transform)
		delete transform;
}
