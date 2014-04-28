#include "A.h"


A::A() {
	color.Set(1, 0, 0);
	v.push_back(Line(Vec2f(0, 0), Vec2f(30, 100), color));
	v.push_back(Line(Vec2f(30, 100), Vec2f(70, 100), color));
	v.push_back(Line(Vec2f(70, 100), Vec2f(100, 0), color));
	v.push_back(Line(Vec2f(100, 0), Vec2f(80, 0), color));
	v.push_back(Line(Vec2f(80, 0), Vec2f(70, 40), color));
	v.push_back(Line(Vec2f(70, 40), Vec2f(30, 40), color));
	v.push_back(Line(Vec2f(30, 40), Vec2f(20, 0), color));
	v.push_back(Line(Vec2f(0, 0), Vec2f(20, 0), color));

	v.push_back(Line(Vec2f(50, 80), Vec2f(70, 60), color));
	v.push_back(Line(Vec2f(70, 60), Vec2f(30, 60), color));
	v.push_back(Line(Vec2f(30, 60), Vec2f(50, 80), color));
}


A::~A() {
}
