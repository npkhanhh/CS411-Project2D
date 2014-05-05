#pragma once
#include "Polygon.h"

using namespace std;

class Object2D
{
private:
	const static int MININUM_PERIMETER = 10;  //Define the minimum perimeter for a cut
protected:
	vector<Polygon> polygons;
	bool isClicked;	// to determine whether any polygon is clicked without checking each polygon
	Polygon *clickedPolygon = NULL;	// point to the polygon that is clicked, for faster performance
public:
	Object2D(void);
	void fillColor();
	void Draw(const int &x, const int &y);
	void Cut(int pieces);
	void Draw();
	~Object2D(void);

	bool isInside(const int &x, const int &y);
	bool setClicked(const int &x, const int &y);
	void setReleased();
	void moveClickedPolygon(const int &x, const int &y);
};

