#include "Line.h"


Line::Line()
{
}

Line::Line(Vec2f _start, Vec2f _end) {
	colorField.Set(0, 0, 0);
	setEndPoints(_start, _end);
}

Line::Line(Vec2f _start, Vec2f _end, Vec3f _colorField) {
	colorField = _colorField;
	setEndPoints(_start, _end);
}


Line::~Line()
{
}

void Line::Draw(const int &x, const int &y) {
	
	Vec2f _start(start.x() + x, start.y() + y);
	Vec2f _end(end.x() + x, end.y() + y);
	setEndPoints(_start, _end);
	

	if (start.x() == end.x() && start.y() == end.y()) {
		// the line segment is just a point
		setPixel(end.x(), end.y(), colorField);
		glutSwapBuffers();
		return;
	}

	int x1 = start.x(), x2 = end.x(), y1 = start.y(), y2 = end.y();
	int _Dx, _Dy, _D, incrY;
	bool slopegt1 = false;
	int pi;
	_Dx = abs(Dx); _Dy = abs(Dy);
	
	if (_Dy > _Dx) {
		swap(x1, y1);
		swap(x2, y2);
		swap(_Dx, _Dy);
		slopegt1 = true;	// the slope is gtreater than 1, means that the line is in the 2nd or the 7th octant
	}
	
	if (x1 > x2) {
		swap(x1, x2);
		swap(y1, y2);
	}

	if (y1 > y2)
		incrY = -1;
	else
		incrY = 1;

	_D = 2 * _Dy - _Dx;
	while (x1 < x2) {
		if (_D <= 0) {
			pi = 2 * _Dy;
			_D += pi;
		}
		else {
			pi = 2 * (_Dy - _Dx);
			_D += pi;
			y1 += incrY;
		}
		++x1;
		if (slopegt1)
			setPixel(y1, x1, colorField);
		else
			setPixel(x1, y1, colorField);
	}

	glutSwapBuffers();
}

void Line::Draw() {
	this->Draw(0, 0);
}

void Line::SetColor(Vec3f _color) {
	//this->colorField = _color;
}










void Line::setPixel(const float &x, const float &y, const Vec3f &color) {
	float red, green, blue;
	color.Get(red, green, blue);
	glColor3f(red, green, blue);

	glPointSize(1);
	glBegin(GL_POINTS);
		glVertex2i(x, y);
	glEnd();

	glFlush();
}


void Line::setEndPoints(const Vec2f &_start, const Vec2f &_end) {
	start = _start;
	end = _end;
	// First, put the point in order where 'start.x()' < 'end.x()'
	if (start.x() > end.x()) {
		start.Set(start.x() + end.x(), start.y() + end.y());
		end.Set(start.x() - end.x(), start.y() - end.y());
		start.Set(start.x() - end.x(), start.y() - end.y());
	}
	else if (start.x() == end.x()) {
		// the line is vertical, then 'start' is the lower point
		if (start.y() > end.y()) {
			start.Set(start.x() + end.x(), start.y() + end.y());
			end.Set(start.x() - end.x(), start.y() - end.y());
			start.Set(start.x() - end.x(), start.y() - end.y());
		}

	}

	Dx = end.x() - start.x();
	Dy = end.y() - start.y();
	A = end.y() - start.y();
	B = start.x() - end.x();
	C = end.x()*start.y() - start.x()*end.y();
}

float Line::ymax()
{
	return start.y() > end.y() ? start.y() : end.y();
}

float Line::ymin()
{
	return start.y() < end.y() ? start.y() : end.y();
}

float Line::xmax()
{
	return end.x();
}

float Line::xmin()
{
	return start.x();
}

void Line::equation(float &a, float &b, float &c)
{
	a = A;
	b = B;
	c = C;
}

double Line::length()
{
	return sqrt((end.x()-start.x())*((end.x()-start.x()))+(end.y()-start.y())*((end.y()-start.y())));
}

int Line::sameSide(Vec2f p1, Vec2f p2)
{
	if((A*p1[0]+B*p1[1]+C)*(A*p2[0]+B*p2[1]+C)>0)
		return A*p1[0]+B*p1[1]+C;
	return 0;
}

Vec2f Line::intersection(Vec2f p1, Vec2f p2)
{
	Vec2f x, d1, d2;
	Vec2f::Sub(x, p1, start);
	Vec2f::Sub(d1, end, start);
	Vec2f::Sub(d2, p2, p1);

    float cross = d1.x()*d2.y() - d1.y()*d2.x();
  

    double t1 = (x.x() * d2.y() - x.y() * d2.x())/cross;
	d1*=t1;
	 Vec2f r;
	 Vec2f::Add(r, start, d1);
    return r;
}