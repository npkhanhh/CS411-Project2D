#pragma once
#include "vectors.h"
#include <vector>
#include"GL/glut.h"

class Line 
{
private:
	Vec2f start, end;
	Vec3f colorField;
	float Dx, Dy, A, B, C;

	float F(float x, float y);
	void rDraw(float x, float y, float pi);
	
public:
	Line();
	Line(Vec2f _start, Vec2f _end);
	Line(Vec2f _start, Vec2f _end, Vec3f _colorField);
	~Line();

	void Draw();
	
	void SetColor(Vec3f _color);
	void SetStartingPoint(Vec2f _start);
	void SetEndingPoint(Vec2f _end);
	void setPixel(const float &x, const float &y, const Vec3f &color);
};

