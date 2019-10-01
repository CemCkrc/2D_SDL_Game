#include "GameEngine.hpp"

int main(int argc, char *argv[])
{
	GameEngine *game;

	game = new GameEngine(); // Game needs engine for start

	Vector2D *pos = new Vector2D(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
	Vector2D *size = new Vector2D(800,600);

	game->create("Test", *pos, *size, 1, 0);

	delete pos, size;

	while (game->isRunning())
		game->update();
	game->quit();

	return 0;
}