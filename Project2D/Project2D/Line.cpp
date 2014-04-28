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

void Line::Draw() {
	if (start.x() == end.x() && start.y() == end.y()) {
		setPixel(end.x(), end.y(), colorField);
		return;
	}
	// The Dx and Dy, starting and ending point  use for this function
	// when !(0<m<1), we have to swap Dx, Dy, start, end point
	float _Dx, _Dy;			
	Vec2f _start, _end;

	if (start.x() == end.x()) {
		// the line is vertical
		for (int i = start.y(); i <= end.y(); ++i) {
			setPixel(start.x(), i, colorField);
		}
		return;
	}
	
	float m = (float)this->Dy / this->Dx;
	short octant = 0;

	if (0 <= m && m < 1) {
		_Dx = this->Dx;
		_Dy = this->Dy;
		_start = this->start;
		_end = this->end;
		octant = 1;
	}
	else if (1 <= m) {
		_Dx = this->Dy;
		_Dy = this->Dx;
		_start.Set(this->start.y(), this->start.x());
		_end.Set(this->end.y(), this->end.x());
		octant = 2;
	}
	else if (-1 < m && m < 0) {
		_Dx = this->Dx;
		_Dy = -this->Dy;
		_start = this->start;
		_end = this->end;
		octant = 8;
	}
	else {
		_Dx = -this->Dy;
		_Dy = this->Dx;
		_start.Set(this->start.y(), this->start.x());
		_end.Set(this->end.y(), this->end.x());
		octant = 7;
	}

	float pi = 2 * _Dy - _Dx;
	float x = _start.x();
	float y = _start.y();


	
	if (octant == 1) {
		while (x <= _end.x()) {
			setPixel(x, y, colorField);
			if (pi < 0) {
				pi += 2 * _Dy;
				++x;
			}
			else {
				pi += 2 * _Dy - 2 * _Dx;
				++x;
				++y;
			}
		}
	}
	else if (octant == 2) {
		while (y <= end.y()) {
			setPixel(x, y, colorField);
			if (pi < 0) {
				pi += 2 * _Dy;
				++y;
			}
			else {
				pi += 2 * _Dy - 2 * _Dx;
				++x;
				++y;
			}
		}
	}
	else if (octant == 8) {
		while (x <= _end.x()) {
			setPixel(x, y, colorField);
			if (pi < 0) {
				pi += 2 * _Dy;
				++x;
			}
			else {
				pi += 2 * _Dy - 2 * _Dx;
				++x;
				--y;
			}
		}
	}
	else if (octant == 7) {
		while (x >= _end.x()) {
			setPixel(x, y, colorField);
			if (pi < 0) {
				pi += 2 * _Dy;
				--x;
			}
			else {
				pi += 2 * _Dy - 2 * _Dx;
				--x;
				++y;
			}
		}
	}
	
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