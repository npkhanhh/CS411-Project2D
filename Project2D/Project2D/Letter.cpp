#include "Letter.h"




A::A() {
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(80, 0), color));
	p.addEdge(Line(Vec2f(80, 0), Vec2f(70, 40), color));
	p.addEdge(Line(Vec2f(70, 40), Vec2f(30, 40), color));
	p.addEdge(Line(Vec2f(30, 40), Vec2f(20, 0), color));
	p.addEdge(Line(Vec2f(0, 0), Vec2f(20, 0), color));

	p.addEdge(Line(Vec2f(50, 80), Vec2f(70, 60), color));
	p.addEdge(Line(Vec2f(70, 60), Vec2f(30, 60), color));
	p.addEdge(Line(Vec2f(30, 60), Vec2f(50, 80), color));

	polygons.push_back(p);
}

A::~A() {
}

B::B(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(15, 15), Vec2f(55, 15), color));
	p.addEdge(Line(Vec2f(15, 15), Vec2f(15, 35), color));
	p.addEdge(Line(Vec2f(15, 35), Vec2f(55, 35), color));
	p.addEdge(Line(Vec2f(55, 15), Vec2f(55, 35), color));
	p.addEdge(Line(Vec2f(15, 65), Vec2f(55, 65), color));
	p.addEdge(Line(Vec2f(15, 65), Vec2f(15, 85), color));
	p.addEdge(Line(Vec2f(15, 85), Vec2f(55, 85), color));
	p.addEdge(Line(Vec2f(55, 65), Vec2f(55, 85), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 75), color));
	p.addEdge(Line(Vec2f(100, 75), Vec2f(70, 50), color));
	p.addEdge(Line(Vec2f(70, 50), Vec2f(100, 25), color));
	p.addEdge(Line(Vec2f(100, 25), Vec2f(70, 0), color));

	polygons.push_back(p);
}

B::~B(void)
{
}

C::C(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 0), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(30, 30), Vec2f(30, 70), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(30, 70), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(30, 30), Vec2f(100, 30), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(100, 30), Vec2f(100, 0), color));

	polygons.push_back(p);
}

C::~C(void)
{
}

D::D(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(100, 70), Vec2f(100, 30), color));
	p.addEdge(Line(Vec2f(100, 30), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(30, 30), Vec2f(30, 70), color));
	p.addEdge(Line(Vec2f(30, 70), Vec2f(70, 70), color));
	p.addEdge(Line(Vec2f(70, 70), Vec2f(70, 30), color));
	p.addEdge(Line(Vec2f(70, 30), Vec2f(30, 30), color));

	polygons.push_back(p);

}

D::~D(void)
{
}

E::E(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 80), color));
	p.addEdge(Line(Vec2f(100, 80), Vec2f(40, 80), color));
	p.addEdge(Line(Vec2f(40, 80), Vec2f(40, 60), color));
	p.addEdge(Line(Vec2f(40, 60), Vec2f(100, 60), color));
	p.addEdge(Line(Vec2f(100, 60), Vec2f(100, 40), color));
	p.addEdge(Line(Vec2f(100, 40), Vec2f(40, 40), color));
	p.addEdge(Line(Vec2f(40, 40), Vec2f(40, 20), color));
	p.addEdge(Line(Vec2f(40, 20), Vec2f(100, 20), color));
	p.addEdge(Line(Vec2f(100, 20), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

E::~E(void)
{
}

F::F(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 80), color));
	p.addEdge(Line(Vec2f(100, 80), Vec2f(40, 80), color));
	p.addEdge(Line(Vec2f(40, 80), Vec2f(40, 60), color));
	p.addEdge(Line(Vec2f(40, 60), Vec2f(100, 60), color));
	p.addEdge(Line(Vec2f(100, 60), Vec2f(100, 40), color));
	p.addEdge(Line(Vec2f(100, 40), Vec2f(40, 40), color));
	p.addEdge(Line(Vec2f(40, 40), Vec2f(40, 0), color));
	p.addEdge(Line(Vec2f(40, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

F::~F(void)
{
}

G::G(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 80), color));
	p.addEdge(Line(Vec2f(100, 80), Vec2f(20, 80), color));
	p.addEdge(Line(Vec2f(20, 80), Vec2f(20, 20), color));
	p.addEdge(Line(Vec2f(20, 20), Vec2f(80, 20), color));
	p.addEdge(Line(Vec2f(80, 20), Vec2f(80, 40), color));
	p.addEdge(Line(Vec2f(80, 40), Vec2f(60, 40), color));
	p.addEdge(Line(Vec2f(60, 40), Vec2f(60, 60), color));
	p.addEdge(Line(Vec2f(60, 60), Vec2f(100, 60), color));
	p.addEdge(Line(Vec2f(100, 60), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

G::~G(void)
{
}

H::H(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(30, 65), color));
	p.addEdge(Line(Vec2f(30, 65), Vec2f(70, 65), color));
	p.addEdge(Line(Vec2f(70, 65), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(70, 35), color));
	p.addEdge(Line(Vec2f(70, 35), Vec2f(30, 35), color));
	p.addEdge(Line(Vec2f(30, 35), Vec2f(30, 0), color));
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

H::~H(void)
{
}

I::I(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(40, 100), color));
	p.addEdge(Line(Vec2f(40, 100), Vec2f(40, 0), color));
	p.addEdge(Line(Vec2f(40, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
	
}

I::~I(void)
{
}

J::J(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 20), color));
	p.addEdge(Line(Vec2f(0, 20), Vec2f(20, 20), color));
	p.addEdge(Line(Vec2f(20, 20), Vec2f(20, 70), color));
	p.addEdge(Line(Vec2f(20, 70), Vec2f(0, 70), color));
	p.addEdge(Line(Vec2f(0, 70), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(60, 100), color));
	p.addEdge(Line(Vec2f(60, 100), Vec2f(60, 70), color));
	p.addEdge(Line(Vec2f(60, 70), Vec2f(40, 70), color));
	p.addEdge(Line(Vec2f(40, 70), Vec2f(40, 0), color));
	p.addEdge(Line(Vec2f(40, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

J::~J(void)
{
}

K::K(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(30, 60), color));
	p.addEdge(Line(Vec2f(30, 60), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(50, 50), color));
	p.addEdge(Line(Vec2f(50, 50), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(30, 40), color));
	p.addEdge(Line(Vec2f(30, 40), Vec2f(30, 0), color));
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
	
}

K::~K(void)
{
}

L::L(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(30, 30), color));
	p.addEdge(Line(Vec2f(30, 30), Vec2f(70, 30), color));
	p.addEdge(Line(Vec2f(70, 30), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

L::~L(void)
{
}

M::M(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(50, 60), color));
	p.addEdge(Line(Vec2f(50, 60), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(70, 40), color));
	p.addEdge(Line(Vec2f(70, 40), Vec2f(50, 0), color));
	p.addEdge(Line(Vec2f(50, 0), Vec2f(30, 40), color));
	p.addEdge(Line(Vec2f(30, 40), Vec2f(30, 0), color));
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

M::~M(void)
{
}

N::N(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(70, 60), color));
	p.addEdge(Line(Vec2f(70, 60), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(30, 40), color));
	p.addEdge(Line(Vec2f(30, 40), Vec2f(30, 0), color));
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

N::~N(void)
{
}

O::O(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));
	p.addEdge(Line(Vec2f(30, 30), Vec2f(30, 70), color));
	p.addEdge(Line(Vec2f(30, 70), Vec2f(70, 70), color));
	p.addEdge(Line(Vec2f(70, 70), Vec2f(70, 30), color));
	p.addEdge(Line(Vec2f(70, 30), Vec2f(30, 30), color));

	polygons.push_back(p);
	
}

O::~O(void)
{
}

P::P(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 40), color));
	p.addEdge(Line(Vec2f(100, 40), Vec2f(30, 40), color));
	p.addEdge(Line(Vec2f(30, 40), Vec2f(30, 0), color));
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 0), color));
	p.addEdge(Line(Vec2f(30, 60), Vec2f(30, 80), color));
	p.addEdge(Line(Vec2f(30, 80), Vec2f(80, 80), color));
	p.addEdge(Line(Vec2f(80, 80), Vec2f(80, 60), color));
	p.addEdge(Line(Vec2f(80, 60), Vec2f(30, 60), color));

	polygons.push_back(p);
}

P::~P(void)
{
}

Q::Q(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(80, 100), color));
	p.addEdge(Line(Vec2f(80, 100), Vec2f(80, 20), color));
	p.addEdge(Line(Vec2f(80, 20), Vec2f(100, 20), color));
	p.addEdge(Line(Vec2f(100, 20), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));
	p.addEdge(Line(Vec2f(20, 20), Vec2f(20, 80), color));
	p.addEdge(Line(Vec2f(20, 80), Vec2f(60, 80), color));
	p.addEdge(Line(Vec2f(60, 80), Vec2f(60, 20), color));
	p.addEdge(Line(Vec2f(60, 20), Vec2f(20, 20), color));

	polygons.push_back(p);
}

Q::~Q(void)
{
}

R::R(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(100, 70), Vec2f(70, 40), color));
	p.addEdge(Line(Vec2f(70, 40), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(30, 40), color));
	p.addEdge(Line(Vec2f(30, 40), Vec2f(30, 0), color));
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 0), color));
	p.addEdge(Line(Vec2f(30, 60), Vec2f(30, 80), color));
	p.addEdge(Line(Vec2f(30, 80), Vec2f(70, 80), color));
	p.addEdge(Line(Vec2f(70, 80), Vec2f(70, 60), color));
	p.addEdge(Line(Vec2f(70, 60), Vec2f(30, 60), color));

	polygons.push_back(p);
}

R::~R(void)
{
}

S::S(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 20), color));
	p.addEdge(Line(Vec2f(0, 20), Vec2f(70, 20), color));
	p.addEdge(Line(Vec2f(70, 20), Vec2f(70, 40), color));
	p.addEdge(Line(Vec2f(70, 40), Vec2f(0, 40), color));
	p.addEdge(Line(Vec2f(0, 40), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 80), color));
	p.addEdge(Line(Vec2f(100, 80), Vec2f(30, 80), color));
	p.addEdge(Line(Vec2f(30, 80), Vec2f(30, 60), color));
	p.addEdge(Line(Vec2f(30, 60), Vec2f(100, 60), color));
	p.addEdge(Line(Vec2f(100, 60), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

S::~S(void)
{
}

T::T(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(35, 0), Vec2f(35, 70), color));
	p.addEdge(Line(Vec2f(35, 70), Vec2f(0, 70), color));
	p.addEdge(Line(Vec2f(0, 70), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(100, 70), Vec2f(65, 70), color));
	p.addEdge(Line(Vec2f(65, 70), Vec2f(65, 0), color));
	p.addEdge(Line(Vec2f(65, 0), Vec2f(35, 0), color));

	polygons.push_back(p);
}

T::~T(void)
{
}

U::U(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(30, 30), color));
	p.addEdge(Line(Vec2f(30, 30), Vec2f(70, 30), color));
	p.addEdge(Line(Vec2f(70, 30), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

U::~U(void)
{
}

V::V(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(50, 40), color));
	p.addEdge(Line(Vec2f(50, 40), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(30, 0), color));

	polygons.push_back(p);
}

V::~V(void)
{
}

W::W(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(20, 100), color));
	p.addEdge(Line(Vec2f(20, 100), Vec2f(20, 30), color));
	p.addEdge(Line(Vec2f(20, 30), Vec2f(40, 30), color));
	p.addEdge(Line(Vec2f(40, 30), Vec2f(40, 100), color));
	p.addEdge(Line(Vec2f(40, 100), Vec2f(60, 100), color));
	p.addEdge(Line(Vec2f(60, 100), Vec2f(60, 30), color));
	p.addEdge(Line(Vec2f(60, 30), Vec2f(80, 30), color));
	p.addEdge(Line(Vec2f(80, 30), Vec2f(80, 100), color));
	p.addEdge(Line(Vec2f(80, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

W::~W(void)
{
}

X::X(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 30), color));
	p.addEdge(Line(Vec2f(0, 30), Vec2f(30, 50), color));
	p.addEdge(Line(Vec2f(30, 50), Vec2f(0, 70), color));
	p.addEdge(Line(Vec2f(0, 70), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(50, 70), color));
	p.addEdge(Line(Vec2f(50, 70), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(100, 70), Vec2f(70, 50), color));
	p.addEdge(Line(Vec2f(70, 50), Vec2f(100, 30), color));
	p.addEdge(Line(Vec2f(100, 30), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(50, 30), color));
	p.addEdge(Line(Vec2f(50, 30), Vec2f(30, 0), color));
	p.addEdge(Line(Vec2f(30, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

X::~X(void)
{
}

Y::Y(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(30, 0), Vec2f(30, 50), color));
	p.addEdge(Line(Vec2f(30, 50), Vec2f(0, 70), color));
	p.addEdge(Line(Vec2f(0, 70), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(30, 100), color));
	p.addEdge(Line(Vec2f(30, 100), Vec2f(50, 70), color));
	p.addEdge(Line(Vec2f(50, 70), Vec2f(70, 100), color));
	p.addEdge(Line(Vec2f(70, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(100, 70), Vec2f(70, 50), color));
	p.addEdge(Line(Vec2f(70, 50), Vec2f(70, 0), color));
	p.addEdge(Line(Vec2f(70, 0), Vec2f(30, 0), color));

	polygons.push_back(p);
}

Y::~Y(void)
{
}

Z::Z(void)
{
	color.Set(1, 0, 0);
	Polygon p;
	p.addEdge(Line(Vec2f(0, 0), Vec2f(0, 30), color));
	p.addEdge(Line(Vec2f(0, 30), Vec2f(40, 70), color));
	p.addEdge(Line(Vec2f(40, 70), Vec2f(0, 70), color));
	p.addEdge(Line(Vec2f(0, 70), Vec2f(0, 100), color));
	p.addEdge(Line(Vec2f(0, 100), Vec2f(100, 100), color));
	p.addEdge(Line(Vec2f(100, 100), Vec2f(100, 70), color));
	p.addEdge(Line(Vec2f(100, 70), Vec2f(60, 30), color));
	p.addEdge(Line(Vec2f(60, 30), Vec2f(100, 30), color));
	p.addEdge(Line(Vec2f(100, 30), Vec2f(100, 0), color));
	p.addEdge(Line(Vec2f(100, 0), Vec2f(0, 0), color));

	polygons.push_back(p);
}

Z::~Z(void)
{
}

