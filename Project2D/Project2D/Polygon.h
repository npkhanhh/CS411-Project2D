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
	double Perimeter();
};

