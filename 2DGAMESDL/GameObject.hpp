#ifndef GameObject_hpp
#define GameObject_hpp

#include "Transform.hpp"

class GameObject
{
public:
	GameObject();
	~GameObject();
private:
	Transform *transform;
};

#endif // !GameObject.hpp