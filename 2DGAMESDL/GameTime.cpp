#include "GameTime.hpp"

GameTime::GameTime(float RefreshRate, bool vsync)
{
	_startTime = SDL_GetPerformanceCounter();
	_frameRate = RefreshRate;
	_vsync = vsync;

}

void GameTime::update()
{
	_lastUpdate = SDL_GetPerformanceCounter();
}

void GameTime::frameRate()
{
	Uint64 end = SDL_GetPerformanceCounter();
	float elapsed = (end - _lastUpdate) / (float)SDL_GetPerformanceFrequency();
	std::cout << "Current Frame Rate: " << std::to_string(1.0f / elapsed) << std::endl;
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
