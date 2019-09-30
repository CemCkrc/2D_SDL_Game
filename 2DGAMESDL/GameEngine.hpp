#ifndef GAMEENGINE_HPP
#define GAMEENGINE_HPP

#include <Windows.h>

#include "GameTime.hpp"

class GameEngine
{
public:
	GameEngine();
	void create(const char* gameName, int posX, int posY, int width, int height, bool debugMode, bool screenMode);
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


