#pragma once
#include "Polygon.h"

using namespace std;

class Object2D
{
private:
	const static int MININUM_PERIMETER = 10;  //Define the minimum perimeter for a cut
protected:
	vector<Polygon> polygons;
	
public:
	Object2D(void);
	void fillColor();
	void Draw(const int &x, const int &y);
	void Cut(int pieces);
	void Draw();
	~Object2D(void);

	bool isInside(const int &x, const int &y);
};

