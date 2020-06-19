#include "gmath.hpp"





float GMATH_lerp(float start_point, float end_point, float amount)
{
	return amount * (end_point - start_point) + start_point;
}

double GMATH_pythagoreanTheorem(double a, double b)
{
	return sqrt(pow(a, 2) + pow(b, 2));
}

float GMATH_dotProduct(float x, float y, float x2, float y2)
{
	return (x * x2 + y * y2);
}

double GMATH_RadToDeg(float radian)
{
	return radian * 180 / 3.14;
}

int GMATH_check_circle_collisions(float circle1_posX, float circle1_posY, float circle2_posX, float circle2_posY, float circleRadius1, float circleRadius2)
{
	if (pow(circle2_posX - circle1_posX, 2) + pow(circle2_posY - circle1_posY, 2) <= pow(circleRadius1 + circleRadius2, 2)) {
		return True;

	}
	else {
		return False;
	}
}

float GMATH_clamp(float value, float _min, float _max)
{
	if (value < _min) {
		return _min;
	}
	else if (value > _max) {
		return _max;
	}
	else {
		return value;
	}

}

