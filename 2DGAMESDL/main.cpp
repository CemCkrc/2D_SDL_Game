#include "GameEngine.hpp"

GameEngine *game;

int main(int argc, char *argv[])
{
	game = new GameEngine(); // Game needs engine for start

	game->create("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		800, 600, 1, 0);

	while (game->isRunning())
	{
		game->events();
		game->update();
		game->render();
	}

	game->quit();


	return 0;
}