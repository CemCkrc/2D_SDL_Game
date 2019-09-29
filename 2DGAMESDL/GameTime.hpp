#ifndef GAMETIME_HPP
#define GAMETIME_HPP

class GameTime
{
public:
	GameTime();
	void quit();

	~GameTime();
private:
	float gameTime;
	float tick;
};

#endif // !GameTime.hpp