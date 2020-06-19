#include <math.h>
#define True 1
#define False 0
#ifndef GMATH_HPP
#define GMATH_HPP


/*
gmath, math for game developers.
CREATED BY: indefcodes
*/
/*
MIT License

Copyright (c) 2020 indefcodes

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

float GMATH_lerp(float start_point, float end_point, float amount);

double GMATH_pythagoreanTheorem(double a, double b);

float GMATH_dotProduct(float x, float y, float x2, float y2);

double GMATH_RadToDeg(float radian);

int  GMATH_check_circle_collisions(float circle1_posX, float circle1_posY, float circle2_posX, float circle2_posY, float circleRadius1, float circleRadius2);

float GMATH_clamp(float value, float _min, float _max);



#endif // !GMATH_HPP