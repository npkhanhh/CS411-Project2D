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
				if (x > intersect[j] && x < intersect[j + 1]) {
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

bool Polygon::setClicked(const int &x, const int &y) {
	if (isInside(x, y)) {
		this->clicked = true;
		xClick = x;
		yClick = y;
		xOffset = this->xmax - x;
		yOffset = this->ymax - y;
		return true;
	}
	this->clicked = false;
	return false;
}

bool Polygon::isClicked() {
	return this->clicked;
}

void Polygon::setRelease() {
	if (this->clicked) {
		clicked = false;
		xClick = -1;
		yClick = -1;
		xOffset = 0;
		yOffset = 0;
	}
}

void Polygon::clickMove(const int &x, const int &y) {
	int Dx = x - xClick; // x displacement
	int Dy = y - yClick; // y displacement

	xClick = x;
	yClick = y;

	for (int i = 0; i < v.size(); ++i) {
		// shift all the edges
		v[i].setEndPoints(Vec2f(v[i].Start().x() + Dx, v[i].Start().y() + Dy), Vec2f(v[i].End().x() + Dx, v[i].End().y() + Dy));
	}
	updateLimits();

	xOffset = xmax - xClick;
	yOffset = ymax - yClick;
}

void Polygon::rotate(int angle)
{
	float pivotx = (xmin + xmax)/2;
	float pivoty = (ymin + ymax)/2;
	Vec2f nStart, nEnd;
	float x, y, nx, ny;
	float PI = 3.14159;
	for(int i = 0;i<v.size();++i)
	{
		x = v[i].Start().x() - pivotx;
		y = v[i].Start().y() - pivoty;

		nx = x*cos(angle*PI/180) - y*sin(angle*PI/180);
		ny = x*sin(angle*PI/180) + y*cos(angle*PI/180);

		nStart.Set(nx, ny);

		x = v[i].End().x() - pivotx;
		y = v[i].End().y() - pivoty;

		nx = x*cos(angle*PI/180) - y*sin(angle*PI/180);
		ny = x*sin(angle*PI/180) + y*cos(angle*PI/180);

		nEnd.Set(nx, ny);
		v[i].setEndPoints(nStart, nEnd);
	}
}

vector<Polygon> Polygon::connectedComponent()
{
	vector<Polygon> result;
	vector<Line> lines = v;
	Vec2f begin, start;
	while(!lines.empty())
	{
		vector<bool> marker(lines.size(), true);
		bool flag = true;
		begin = lines[0].Start();
		start = lines[0].End();
		marker[0] = false;
		while(flag)
		{
			for(int i = 0;i<lines.size();++i)
			{
				if(lines[i].Start() == start && marker[i]) {
					if(lines[i].End() == begin) {
						marker[i] = flag = false;
						break; }
					else {
						start = lines[i].End();
						marker[i] = false;}
				}
				else if(lines[i].End() == start && marker[i]) {
					if(lines[i].Start() == begin){
						marker[i] = flag = false;
						break; }
					else {
						start = lines[i].Start();
						marker[i] = false; }
				}
			}
		}
		Polygon temp;
		vector<Line> tempLine;
		int n = lines.size();
		for(int i = 0;i<n;++i)
		{
			if(!marker[i])
				temp.addEdge(lines[i]);
			else
				tempLine.push_back(lines[i]);
		}
		lines.clear();
		lines = tempLine;
		result.push_back(temp);
	}
	vector<int> insidePoly;
	for(int i = 0;i<result.size();++i)
	{
		for(int j = 0;j<result.size();++j)
		{
			if(i!=j)
			{
				vector<Line> l = result[j].getLines();
				if(result[i].isInside(l[0].Start().x(), l[0].Start().y()) && result[i].isInside(l[0].End().x(), l[0].End().y()))
					insidePoly.push_back(j);
			}
		}
	}
	for(int i = 0;i<insidePoly.size();++i)
		result.erase(result.begin() - insidePoly[i] - i);
	return result;
}

bool Polygon::merge(Polygon p)
{
	for(int i=0;i<v.size();++i)
	{
		for(int j=0;j<p.v.size();++j)
		{
			if(v[i].Start() == p.v[j].Start() && v[i].End() == p.v[j].End())
			{
				v.erase(v.begin() + i);
				p.v.erase(p.v.begin() + j);
				v.insert(v.end(), p.v.begin(), p.v.end());
				p.v.clear();
				return true;
			}
		}
	}
	return false;
}

