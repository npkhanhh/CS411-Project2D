#include "Object2D.h"


Object2D::Object2D(void)
{
}


void Object2D::Draw(const int &x, const int &y) {
	for (int i = 0; i < polygons.size(); ++i) {
		polygons[i].Draw(x, y);
	}
}

void Object2D::fillColor()
{
	for(int i=0;i<polygons.size();++i)
	{
		polygons[i].fillColor();
	}
}

void Object2D::Cut(int pieces)
{
	for(int i =0;i<pieces;++i)
	{
		
	}
}

Object2D::~Object2D(void)
{
}
