#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <Windows.h>
#include "GameTime.hpp"
#include "GameObject.hpp" //replace with Scene class

//************************
//	TODO: Add inputManager, 2d elements, colliders, gameObjects
//************************

class GameEngine
{
public:
	GameEngine();
	void create(const char* gameName, Vector2D *position, Vector2D *size, bool debugMode, bool screenMode);
	void update();
	void events();
	void render();
	void quit();

	bool isRunning();

	~GameEngine();
private:
	SDL_Window *gameWindow;
	SDL_Renderer *gameRenderer;
	GameTime *time;
	bool _isRunning;
};

#endif // !GameEngine.hpp


