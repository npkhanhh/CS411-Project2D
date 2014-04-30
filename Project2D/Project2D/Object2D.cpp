#include "Object2D.h"


Object2D::Object2D(void)
{
}


void Object2D::Draw() {
	for (int i = 0; i < v.size(); ++i) {
		v[i].Draw();
	}
}

void Object2D::fillColor()
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
					l.Draw();
				}
			}
		}
	}
}

Object2D::~Object2D(void)
{
}
