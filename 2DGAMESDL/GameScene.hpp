#ifndef GameScene_hpp
#define GameScene_hpp

#include "GameObject.hpp"

class GameScene
{
public:
	GameScene();
	~GameScene();

private:
	GameObject *objects; //Objects in scene
};

#endif // !GameScene.hpp