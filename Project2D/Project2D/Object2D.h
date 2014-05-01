#pragma once
#include "Polygon.h"

using namespace std;

class Object2D
{
protected:
	vector<Polygon> polygons;
	
public:
	Object2D(void);
	void fillColor();
	void Draw(const int &x, const int &y);
	void Draw();
	~Object2D(void);
};

