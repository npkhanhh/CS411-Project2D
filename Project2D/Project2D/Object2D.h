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
<<<<<<< HEAD
	void Cut(int pieces);
=======
	void Draw();
>>>>>>> d7649c6eed5ad3d29bb50188893a3f629b217713
	~Object2D(void);
};

