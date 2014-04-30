#pragma once
#include <vector>
#include "Line.h"
#include <iostream>
using namespace std;

class Object2D
{
protected:
	vector<Line> v;
	Vec3f color;
public:
	Object2D(void);
	void fillColor();
	void Draw();
	~Object2D(void);
};

