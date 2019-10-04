#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <Windows.h>
#include "GameTime.hpp"
#include "GameScene.hpp"

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
	GameScene *gameScene;
	bool _isRunning;
};

#endif // !GameEngine.hpp


