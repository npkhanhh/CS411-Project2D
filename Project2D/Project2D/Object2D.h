#pragma once
#include <vector>
#include "Line.h"
#include <iostream>
using namespace std;

class Object2D
{
protected:
	vector<Line> v;
public:
	Object2D(void);
	void fillColor();
	~Object2D(void);
};

