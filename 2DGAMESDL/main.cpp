#include "GameEngine.hpp"

int main(int argc, char *argv[])
{
	GameEngine *game;

	game = new GameEngine(); // Game needs engine for start

	game->create("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		800, 600, 1, 0);

	while (game->isRunning())
		game->update();
	game->quit();

	return 0;
}