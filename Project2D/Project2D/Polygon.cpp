#include "Polygon.h"


Polygon::Polygon(void)
{
}

Polygon::Polygon(Vec3f _color)
{
	color = _color;
}

Polygon::~Polygon(void)
{
}

void Polygon::Draw(const int &x, const int &y) {
	for (int i = 0; i < v.size(); ++i) {
		v[i].Draw(x, y);
	}
}

void Polygon::Draw() {
	this->Draw(0, 0);
}

void Polygon::addEdge(Vec2f &start, Vec2f &end) {
	v.push_back(Line(start, end));
}

void Polygon::addEdge(Line &line) {
	v.push_back(line);
}

void Polygon::fillColor()
{
	float ymax = -1, ymin = INT_MAX;
	float temp;
	float A, B, C;
	vector<float> intersect;
	for(int i=0; i<v.size(); ++i)
	{
		temp = v[i].ymax();
		if(temp>ymax)
			ymax = temp;
		temp = v[i].ymin();
		if(temp<ymin)
			ymin = temp;
	}
	for(int i = ymin; i<=ymax; ++i)
	{
		intersect.clear();
		for(int j=0;j<v.size(); ++j)
		{
			temp = -1;
			v[j].equation(A, B, C);
			if(A!=0)
				temp = (-(B*i+C))/A;
			
			if(temp<=v[j].xmax() && temp>=v[j].xmin() && i<v[j].ymax() && i>=v[j].ymin())
				intersect.push_back(temp);
		}
		if(!intersect.empty())
		{
			sort(intersect.begin(), intersect.end());
			for(int j = 0; j<intersect.size(); j+=2)
			{
				if(j+1<intersect.size())
				{
					Line l(Vec2f(intersect[j], i), Vec2f(intersect[j+1], i), color);
					l.Draw(0, 0);
				}
			}
		}
	}
}

double Polygon::Perimeter()
{
	double per = 0;
	for(int i = 0;i<v.size();++i)
		per += v[i].length();
	return per;
}