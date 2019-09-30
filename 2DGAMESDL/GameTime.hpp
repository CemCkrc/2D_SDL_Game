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
	float gameTime();
	void quit();

	~GameTime();
private:
	Uint64 _startTime;
	Uint64 _lastUpdate;
	float _frameRate; // frame rate
	bool _vsync;
};

#endif // !GameTime.hpp