#pragma once
#include "Polygon.h"

using namespace std;

class Object2D
{
protected:
	vector<Polygon> polygons;
	Vec3f color;
public:
	Object2D(void);
	//void fillColor();
	void Draw(const int &x, const int &y);
	~Object2D(void);
};

