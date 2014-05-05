#include "Polygon.h"


Polygon::Polygon(void)
{
	xmax = numeric_limits<int>::min();
	xmin = numeric_limits<int>::max();
	ymax = numeric_limits<int>::min();
	ymin = numeric_limits<int>::max();
}

Polygon::Polygon(Vec3f _color)
{
	color = _color;
	xmax = numeric_limits<int>::min();
	xmin = numeric_limits<int>::max();
	ymax = numeric_limits<int>::min();
	ymin = numeric_limits<int>::max();
}

Polygon::~Polygon(void)
{
}

void Polygon::Draw(const int &x, const int &y) {
	int _x = x, _y = y;
	if(x==-1 && y == -1)
	{
		_x = rand() % 1200 + 100; //100->1299
		_y = rand() % 600 + 100;  //100->699
	}
	for (int i = 0; i < v.size(); ++i) {
		v[i].Draw(_x, _y);
	}
	updateLimits();
}

void Polygon::Draw() {
	this->Draw(0, 0);
}

void Polygon::addEdge(Vec2f &start, Vec2f &end) {
	v.push_back(Line(start, end));
	
	updateLimits();
}

void Polygon::addEdge(Line &line) {
	v.push_back(line);

	updateLimits();
}

void Polygon::fillColor()
{
	//float ymax = -1, ymin = INT_MAX;
	float temp;
	float A, B, C;
	vector<float> intersect;
	/*for(int i=0; i<v.size(); ++i)
	{
		temp = v[i].ymax();
		if(temp>ymax)
			ymax = temp;
		temp = v[i].ymin();
		if(temp<ymin)
			ymin = temp;
	}*/
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
					Line l(Vec2f(intersect[j], i), Vec2f(intersect[j + 1] + 1, i), color);
					//l.Draw(0, 0);
					l.DrawGL();
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


bool Polygon::isInside(const int &x, const int &y) {
	if (x<xmin || x>xmax || y<ymin || y>ymax)
		return false;

	float A, B, C;
	vector<float> intersect;
	float temp = -1;
	for (int i = y; i <= y; ++i) {
		intersect.clear();
		for (int j = 0; j < v.size(); ++j) {
			temp = -1;
			v[j].equation(A, B, C);
			if (A != 0)
				temp = (-(B*i + C)) / A;

			if (temp <= v[j].xmax() && temp >= v[j].xmin() && i<v[j].ymax() && i >= v[j].ymin())
				intersect.push_back(temp);
		}
		if (!intersect.empty()) {
			sort(intersect.begin(), intersect.end());
			for (int j = 0; j < intersect.size()-1; j += 2) {
				if (x >= intersect[j] && x <= intersect[j + 1]) {
					intersect.clear();
					return true;
				}
			}
		}
	}

	return false;
}

void Polygon::updateLimits() {
	xmax = xmin = v[0].xmax();
	ymax = ymin = v[0].ymax();
	for (int i = 0; i<v.size(); ++i) {
		xmax = xmax > v[i].xmax() ? xmax : v[i].xmax();
		xmin = xmin < v[i].xmin() ? xmin : v[i].xmin();
		ymax = ymax > v[i].ymax() ? ymax : v[i].ymax();
		ymin = ymin < v[i].ymin() ? ymin : v[i].ymin();
	}
}

int Polygon::xMax()
{
	return xmax;
}

int Polygon::yMax()
{
	return ymax;
}

int Polygon::xMin()
{
	return xmin;
}

int Polygon::yMin()
{
	return ymin;
}

vector<Line> Polygon::getLines()
{
	return v;
}

Vec3f Polygon::getColor()
{
	return color;
}