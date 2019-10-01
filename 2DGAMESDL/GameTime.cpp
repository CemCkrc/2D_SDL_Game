#include "GameTime.hpp"

GameTime::GameTime(float RefreshRate, bool vsync)
{
	_startTime = SDL_GetPerformanceCounter();
	_frameRate = RefreshRate;
	_vsync = vsync;
}

void GameTime::update()
{
	_lastUpdate = SDL_GetTicks();
}

void GameTime::frameRate()
{
	if (!_vsync)
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
	Uint64 _endTime = SDL_GetPerformanceCounter();
	float secondsElapsed = (_endTime - _startTime) / (float)SDL_GetPerformanceFrequency();
	return secondsElapsed;
}

void GameTime::quit()
{

}

GameTime::~GameTime()
{
}
