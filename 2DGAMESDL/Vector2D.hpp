#ifndef Vector2D_hpp
#define Vector2D_hpp

class Vector2D
{
public:
	Vector2D(float xVal, float yVal);
	float X() { return *_x; };
	float Y() { return *_y; };

	~Vector2D();

private:
	float* _x;
	float* _y;
};
#endif // !Vector2D.hpp

