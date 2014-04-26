#include "Line.h"


Line::Line()
{
}

Line::Line(Vec2f _start, Vec2f _end) {
	start = _start;
	end = _end;

	// First, put the point in order where 'start.x()' < 'end.x()'
	if (start.x() > end.x()) {
		start.Set(start.x() + end.x(), start.y() + end.y());
		end.Set(start.x() - end.x(), start.y() - end.y());
		start.Set(start.x() - end.x(), start.y() - end.y());
	}

	Dx = end.x() - start.x();
	Dy = end.y() - start.y();
	A = end.y() - start.y();
	B = start.x() - end.x();
	C = end.x()*start.y() - start.x()*end.y();
}

Line::Line(Vec2f _start, Vec2f _end, Vec3f _colorField) {
	start = _start;
	end = _end;
	//colorField = _colorField;

	// First, put the point in order where 'start.x()' < 'end.x()'
	if (start.x() > end.x()) {
		start.Set(start.x() + end.x(), start.y() + end.y());
		end.Set(start.x() - end.x(), start.y() - end.y());
		start.Set(start.x() - end.x(), start.y() - end.y());
	}

	Dx = end.x() - start.x();
	Dy = end.y() - start.y();
	A = end.y() - start.y();
	B = start.x() - end.x();
	C = end.x()*start.y() - start.x()*end.y();
}


Line::~Line()
{
}

float Line::F(float x, float y) {
	return (A*x + B*y + C);
}

void Line::Draw() {
	//float pi = 2*F(start.x() + 1, start.y() + 0.5f);
	// The Dx and Dy, starting and ending point  use for this function
	// when !(0<m<1), we have to swap Dx, Dy, start, end point
	float _Dx, _Dy;			
	Vec2f _start, _end;
	
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
			//img.Plot(x, y, colorField);
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
			//img.Plot(x, y, colorField);
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
			//img.Plot(x, y, colorField);
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
			//img.Plot(y, x, colorField);
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

void Line::rDraw(float x, float y, float pi) {
//	img.SetPixel(x, y, colorField);
	if (pi < 0) {
		float piPlus = pi + 2 * Dy;
		if (x == end.x()/* && y == end.y()*/)
			return;
		rDraw(x + 1, y, piPlus);
	}
	else {
		float piPlus = pi + 2 * Dy - 2 * Dx;
		if (x == end.x()/* && y == end.y()*/)
			return;
		rDraw(x + 1, y + 1, piPlus);
	}
	
}

void Line::SetColor(Vec3f _color) {
	//this->colorField = _color;
}

void Line::SetStartingPoint(Vec2f _start) {
	start = _start;

	// First, put the point in order where 'start.x()' < 'end.x()'
	if (start.x() > end.x()) {
		start.Set(start.x() + end.x(), start.y() + end.y());
		end.Set(start.x() - end.x(), start.y() - end.y());
		start.Set(start.x() - end.x(), start.y() - end.y());
	}

	Dx = end.x() - start.x();
	Dy = end.y() - start.y();
	A = end.y() - start.y();
	B = start.x() - end.x();
	C = end.x()*start.y() - start.x()*end.y();
}

void Line::SetEndingPoint(Vec2f _end) {
	end = _end;

	// First, put the point in order where 'start.x()' < 'end.x()'
	if (start.x() > end.x()) {
		start.Set(start.x() + end.x(), start.y() + end.y());
		end.Set(start.x() - end.x(), start.y() - end.y());
		start.Set(start.x() - end.x(), start.y() - end.y());
	}

	Dx = end.x() - start.x();
	Dy = end.y() - start.y();
	A = end.y() - start.y();
	B = start.x() - end.x();
	C = end.x()*start.y() - start.x()*end.y();
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