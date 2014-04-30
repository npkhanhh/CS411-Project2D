#include "Polygon.h"


Polygon::Polygon(void)
{
}


Polygon::~Polygon(void)
{
}

void Polygon::Draw(const int &x, const int &y) {
	for (int i = 0; i < v.size(); ++i) {
		v[i].Draw(x, y);
	}
}

void Polygon::addEdge(Vec2f &start, Vec2f &end) {
	v.push_back(Line(start, end));
}

void Polygon::addEdge(Line &line) {
	v.push_back(line);
}