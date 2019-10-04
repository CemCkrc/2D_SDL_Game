#ifndef GAMETIME_HPP
#define GAMETIME_HPP

#include <stdio.h>
#include <iostream>
#include <string>
#include "SDL.h"

//TODO: Change it to singleton
class GameTime
{
public:
	GameTime(float RefreshRate, bool vsync);
	void update();
	void frameRate();
	void capFrameRate(int framePerSec);
	float gameTime();
	float deltaTime();

	~GameTime();
private:
	Uint32 _startTime;
	Uint32 _lastUpdate;
	float _frameRate; // frame rate
	float _deltaTime;
	bool _vsync;
};

#endif // !GameTime.hpp