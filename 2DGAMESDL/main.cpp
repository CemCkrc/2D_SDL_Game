#include "GameEngine.hpp"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

//Checking for memory leak
#ifdef _DEBUG
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#else
#define DBG_NEW new
#endif

int main(int argc, char *argv[])
{
	GameEngine *game;

	game = new GameEngine(); // Start game

	Vector2D *pos = new Vector2D(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
	Vector2D *size = new Vector2D(800,600);

	game->create("Test", pos, size, 1, 0); // Create game window

	delete pos;
	delete size;

	while (game->isRunning())
		game->update();
	game->quit();

	delete game;

	_CrtDumpMemoryLeaks();
	return 0;
}