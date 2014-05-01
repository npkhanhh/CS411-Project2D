#pragma once
#include "vectors.h"
#include <vector>
#include"GL/glut.h"
#include <algorithm>

class Line 
{
private:
	Vec2f start, end;
	Vec3f colorField;
	float Dx, Dy, A, B, C;

	void setPixel(const float &x, const float &y, const Vec3f &color);
public:
	Line();
	Line(Vec2f _start, Vec2f _end);
	Line(Vec2f _start, Vec2f _end, Vec3f _colorField);
	~Line();

	void Draw(const int &x, const int &y);
	void Draw();
	void SetColor(Vec3f _color);
	void setEndPoints(const Vec2f &_start, const Vec2f &_end);
	float ymax();
	float ymin();
	float xmax();
	float xmin();
	void equation(float &a, float &b, float &c); // use to return A, B, C
};

