#pragma once
#include <vector>
#include "Line.h"
#include <iostream>

class Polygon
{
	vector<Line> v;
	Vec3f color;
public:
	Polygon(void);
	Polygon(Vec3f color);
	~Polygon(void);
	void fillColor();
	void addEdge(Vec2f &start, Vec2f &end);
	void addEdge(Line &line);
	void Draw(const int &x, const int &y);
<<<<<<< HEAD
	double Perimeter();
=======
	void Draw();
>>>>>>> d7649c6eed5ad3d29bb50188893a3f629b217713
};

