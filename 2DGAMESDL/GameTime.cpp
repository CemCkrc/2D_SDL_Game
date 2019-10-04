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
	int _deltaTime = SDL_GetTicks() - _lastUpdate;

	if (!_vsync) //TODO: Add sdl vsync function
		return;

	int waitTime = _frameRate - _deltaTime;

	if (waitTime > 0)
		SDL_Delay(waitTime);

}

void GameTime::capFrameRate(int framePerSec)
{
	_frameRate = 1000 / framePerSec;
}

float GameTime::gameTime()
{
	Uint32 _endTime = SDL_GetTicks();
	float secondsElapsed = (float)(_endTime - _startTime) / (float)SDL_GetTicks();
	return secondsElapsed;
}

float GameTime::deltaTime()
{
	return _deltaTime;
}

GameTime::~GameTime()
{
}
