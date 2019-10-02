#include "GameTime.hpp"

GameTime::GameTime(float RefreshRate, bool vsync)
{
	_startTime = SDL_GetTicks();
	_frameRate = RefreshRate;
	_vsync = vsync;
}

void GameTime::update()
{
	_lastUpdate = SDL_GetTicks();
}

void GameTime::frameRate()
{
	std::cout << "game time :" << gameTime() << std::endl;
	if (!_vsync) //TODO: Add sdl vsync function
		return;

	Uint32 end = SDL_GetTicks();
	int frameTime = SDL_GetTicks() - _lastUpdate;

	if (_frameRate > frameTime)
		SDL_Delay(_frameRate - frameTime);
}

void GameTime::capFrameRate(int framePerSec)
{
	_frameRate = 1000 / framePerSec;
}

float GameTime::gameTime()
{
	Uint32 _endTime = SDL_GetPerformanceCounter();
	double secondsElapsed = (double)(_endTime - _startTime)*1000 / (double)SDL_GetPerformanceCounter();
	return secondsElapsed;
}

GameTime::~GameTime()
{
}
