#pragma once
#pragma once
#include"Line.h"

class Letter
{
protected:
	vector<Line> v;
	Vec3f color;
public:
	Letter(void);
	~Letter(void);

	void Draw();
};

