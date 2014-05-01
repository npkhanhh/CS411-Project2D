#include "Object2D.h"


Object2D::Object2D(void)
{
}


void Object2D::Draw(const int &x, const int &y) {
	for (int i = 0; i < polygons.size(); ++i) {
		polygons[i].Draw(x, y);
	}
}

void Object2D::Draw() {
	this->Draw(0, 0);
}

void Object2D::fillColor()
{
	for(int i=0;i<polygons.size();++i)
	{
		polygons[i].fillColor();
	}
}

Object2D::~Object2D(void)
{
}
