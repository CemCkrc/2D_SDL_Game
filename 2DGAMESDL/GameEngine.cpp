#include "GameEngine.hpp"



GameEngine::GameEngine()
{
	time = new GameTime();
}

void GameEngine::create(const char* gameName, int posX, int posY, int width, int height, bool debugMode, bool screenMode)
{
	int flags = 0;
	flags = screenMode ? 1 : 0; // SDL_WINDOW_FULLSCREEN == 1

	if (!debugMode)
		ShowWindow(GetConsoleWindow(), SW_HIDE); //Hide Console if not debugging
	else
		ShowWindow(GetConsoleWindow(), SW_SHOW);

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		printf("Game Window Initializing...\n");
		gameWindow = SDL_CreateWindow(gameName, posX, posY, width, height, flags);
		if (!gameWindow)
			printf("Failed To Create Game Window\nError : %s\n", SDL_GetError());
		else
			printf("Game Window Created...\n");

		gameRenderer = SDL_CreateRenderer(gameWindow, -1, 0);
		if (!gameRenderer)
			printf("Failed To Create Game Renderer\nError : %s\n", SDL_GetError());
		else
			printf("Game Renderer Created...\n");

		_isRunning = true;
	}
	else
		_isRunning = false;
}

void GameEngine::update()
{
}

void GameEngine::events()
{
	SDL_Event _event;
	SDL_PollEvent(&_event);

	if (_event.type == SDL_QUIT)
		_isRunning = false;
}

void GameEngine::render()
{
	SDL_RenderClear(gameRenderer);
	SDL_RenderPresent(gameRenderer);
}

void GameEngine::quit()
{
	printf("Quitting Game...\n");

	time->quit();
	delete time;

	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

	printf("Quit.\n");
}

bool GameEngine::isRunning()
{
	return _isRunning;
}

GameEngine::~GameEngine()
{
}
