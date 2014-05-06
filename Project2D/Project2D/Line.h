#pragma once
#include "vectors.h"
#include <vector>
#include"GL/glut.h"
#include <algorithm>

class Line 
{
private:
	Vec2i start, end;
	Vec3f colorField;
	float Dx, Dy, A, B, C;

	void setPixel(const float &x, const float &y, const Vec3f &color);
public:
	Line();
	Line(Vec2i _start, Vec2i _end);
	Line(Vec2i _start, Vec2i _end, Vec3f _colorField);
	~Line();

	void Draw(const int &x, const int &y);
	void Draw();
	void DrawGL();
	void SetColor(Vec3f _color);
	void setEndPoints(const Vec2i &_start, const Vec2i &_end);
	float ymax();
	float ymin();
	float xmax();
	float xmin();
	void equation(float &a, float &b, float &c); // use to return A, B, C
	double length();
	int checkSide(Vec2i point); //check if the point is on the positive side or negative side
	Vec2i intersection(Line l);
	Vec2i Start();
	Vec2i End();
};

