#ifndef Transform_hpp
#define Transform_hpp

#include "Vector2D.hpp"

class Transform
{
public:
	Transform();
	~Transform();
private:
	Vector2D *pos;
	Vector2D *rot;
};

#endif // !Transform.hpp