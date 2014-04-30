#pragma once
#include <vector>
#include "Line.h"
#include <iostream>

class Polygon
{
	vector<Line> v;

public:
	Polygon(void);
	~Polygon(void);
	
	void addEdge(Vec2f &start, Vec2f &end);
	void addEdge(Line &line);
	void Draw(const int &x, const int &y);
};

