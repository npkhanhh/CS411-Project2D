#include "Letter.h"




A::A() {
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(80, 0), color));
	p.addEdge(Line(Vec2i(80, 0), Vec2i(70, 40), color));
	p.addEdge(Line(Vec2i(70, 40), Vec2i(30, 40), color));
	p.addEdge(Line(Vec2i(30, 40), Vec2i(20, 0), color));
	p.addEdge(Line(Vec2i(0, 0), Vec2i(20, 0), color));

	p.addEdge(Line(Vec2i(50, 80), Vec2i(70, 60), color));
	p.addEdge(Line(Vec2i(70, 60), Vec2i(30, 60), color));
	p.addEdge(Line(Vec2i(30, 60), Vec2i(50, 80), color));

	polygons.push_back(p);
}

A::~A() {
}

B::B(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(15, 15), Vec2i(55, 15), color));
	p.addEdge(Line(Vec2i(15, 15), Vec2i(15, 35), color));
	p.addEdge(Line(Vec2i(15, 35), Vec2i(55, 35), color));
	p.addEdge(Line(Vec2i(55, 15), Vec2i(55, 35), color));
	p.addEdge(Line(Vec2i(15, 65), Vec2i(55, 65), color));
	p.addEdge(Line(Vec2i(15, 65), Vec2i(15, 85), color));
	p.addEdge(Line(Vec2i(15, 85), Vec2i(55, 85), color));
	p.addEdge(Line(Vec2i(55, 65), Vec2i(55, 85), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 75), color));
	p.addEdge(Line(Vec2i(100, 75), Vec2i(70, 50), color));
	p.addEdge(Line(Vec2i(70, 50), Vec2i(100, 25), color));
	p.addEdge(Line(Vec2i(100, 25), Vec2i(70, 0), color));

	polygons.push_back(p);
}

B::~B(void)
{
}

C::C(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 0), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(30, 30), Vec2i(30, 70), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(30, 70), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(30, 30), Vec2i(100, 30), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(100, 30), Vec2i(100, 0), color));

	polygons.push_back(p);
}

C::~C(void)
{
}

D::D(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(100, 70), Vec2i(100, 30), color));
	p.addEdge(Line(Vec2i(100, 30), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(30, 30), Vec2i(30, 70), color));
	p.addEdge(Line(Vec2i(30, 70), Vec2i(70, 70), color));
	p.addEdge(Line(Vec2i(70, 70), Vec2i(70, 30), color));
	p.addEdge(Line(Vec2i(70, 30), Vec2i(30, 30), color));

	polygons.push_back(p);

}

D::~D(void)
{
}

E::E(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 80), color));
	p.addEdge(Line(Vec2i(100, 80), Vec2i(40, 80), color));
	p.addEdge(Line(Vec2i(40, 80), Vec2i(40, 60), color));
	p.addEdge(Line(Vec2i(40, 60), Vec2i(100, 60), color));
	p.addEdge(Line(Vec2i(100, 60), Vec2i(100, 40), color));
	p.addEdge(Line(Vec2i(100, 40), Vec2i(40, 40), color));
	p.addEdge(Line(Vec2i(40, 40), Vec2i(40, 20), color));
	p.addEdge(Line(Vec2i(40, 20), Vec2i(100, 20), color));
	p.addEdge(Line(Vec2i(100, 20), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

E::~E(void)
{
}

F::F(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 80), color));
	p.addEdge(Line(Vec2i(100, 80), Vec2i(40, 80), color));
	p.addEdge(Line(Vec2i(40, 80), Vec2i(40, 60), color));
	p.addEdge(Line(Vec2i(40, 60), Vec2i(100, 60), color));
	p.addEdge(Line(Vec2i(100, 60), Vec2i(100, 40), color));
	p.addEdge(Line(Vec2i(100, 40), Vec2i(40, 40), color));
	p.addEdge(Line(Vec2i(40, 40), Vec2i(40, 0), color));
	p.addEdge(Line(Vec2i(40, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

F::~F(void)
{
}

G::G(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 80), color));
	p.addEdge(Line(Vec2i(100, 80), Vec2i(20, 80), color));
	p.addEdge(Line(Vec2i(20, 80), Vec2i(20, 20), color));
	p.addEdge(Line(Vec2i(20, 20), Vec2i(80, 20), color));
	p.addEdge(Line(Vec2i(80, 20), Vec2i(80, 40), color));
	p.addEdge(Line(Vec2i(80, 40), Vec2i(60, 40), color));
	p.addEdge(Line(Vec2i(60, 40), Vec2i(60, 60), color));
	p.addEdge(Line(Vec2i(60, 60), Vec2i(100, 60), color));
	p.addEdge(Line(Vec2i(100, 60), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

G::~G(void)
{
}

H::H(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(30, 65), color));
	p.addEdge(Line(Vec2i(30, 65), Vec2i(70, 65), color));
	p.addEdge(Line(Vec2i(70, 65), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(70, 35), color));
	p.addEdge(Line(Vec2i(70, 35), Vec2i(30, 35), color));
	p.addEdge(Line(Vec2i(30, 35), Vec2i(30, 0), color));
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

H::~H(void)
{
}

I::I(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(40, 100), color));
	p.addEdge(Line(Vec2i(40, 100), Vec2i(40, 0), color));
	p.addEdge(Line(Vec2i(40, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
	
}

I::~I(void)
{
}

J::J(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 20), color));
	p.addEdge(Line(Vec2i(0, 20), Vec2i(20, 20), color));
	p.addEdge(Line(Vec2i(20, 20), Vec2i(20, 70), color));
	p.addEdge(Line(Vec2i(20, 70), Vec2i(0, 70), color));
	p.addEdge(Line(Vec2i(0, 70), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(60, 100), color));
	p.addEdge(Line(Vec2i(60, 100), Vec2i(60, 70), color));
	p.addEdge(Line(Vec2i(60, 70), Vec2i(40, 70), color));
	p.addEdge(Line(Vec2i(40, 70), Vec2i(40, 0), color));
	p.addEdge(Line(Vec2i(40, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

J::~J(void)
{
}

K::K(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(30, 60), color));
	p.addEdge(Line(Vec2i(30, 60), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(50, 50), color));
	p.addEdge(Line(Vec2i(50, 50), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(30, 40), color));
	p.addEdge(Line(Vec2i(30, 40), Vec2i(30, 0), color));
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
	
}

K::~K(void)
{
}

L::L(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(30, 30), color));
	p.addEdge(Line(Vec2i(30, 30), Vec2i(70, 30), color));
	p.addEdge(Line(Vec2i(70, 30), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

L::~L(void)
{
}

M::M(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(50, 60), color));
	p.addEdge(Line(Vec2i(50, 60), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(70, 40), color));
	p.addEdge(Line(Vec2i(70, 40), Vec2i(50, 0), color));
	p.addEdge(Line(Vec2i(50, 0), Vec2i(30, 40), color));
	p.addEdge(Line(Vec2i(30, 40), Vec2i(30, 0), color));
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

M::~M(void)
{
}

N::N(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(70, 60), color));
	p.addEdge(Line(Vec2i(70, 60), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(30, 40), color));
	p.addEdge(Line(Vec2i(30, 40), Vec2i(30, 0), color));
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

N::~N(void)
{
}

O::O(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));
	p.addEdge(Line(Vec2i(30, 30), Vec2i(30, 70), color));
	p.addEdge(Line(Vec2i(30, 70), Vec2i(70, 70), color));
	p.addEdge(Line(Vec2i(70, 70), Vec2i(70, 30), color));
	p.addEdge(Line(Vec2i(70, 30), Vec2i(30, 30), color));

	polygons.push_back(p);
	
}

O::~O(void)
{
}

P::P(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 40), color));
	p.addEdge(Line(Vec2i(100, 40), Vec2i(30, 40), color));
	p.addEdge(Line(Vec2i(30, 40), Vec2i(30, 0), color));
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 0), color));
	p.addEdge(Line(Vec2i(30, 60), Vec2i(30, 80), color));
	p.addEdge(Line(Vec2i(30, 80), Vec2i(80, 80), color));
	p.addEdge(Line(Vec2i(80, 80), Vec2i(80, 60), color));
	p.addEdge(Line(Vec2i(80, 60), Vec2i(30, 60), color));

	polygons.push_back(p);
}

P::~P(void)
{
}

Q::Q(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(80, 100), color));
	p.addEdge(Line(Vec2i(80, 100), Vec2i(80, 20), color));
	p.addEdge(Line(Vec2i(80, 20), Vec2i(100, 20), color));
	p.addEdge(Line(Vec2i(100, 20), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));
	p.addEdge(Line(Vec2i(20, 20), Vec2i(20, 80), color));
	p.addEdge(Line(Vec2i(20, 80), Vec2i(60, 80), color));
	p.addEdge(Line(Vec2i(60, 80), Vec2i(60, 20), color));
	p.addEdge(Line(Vec2i(60, 20), Vec2i(20, 20), color));

	polygons.push_back(p);
}

Q::~Q(void)
{
}

R::R(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(100, 70), Vec2i(70, 40), color));
	p.addEdge(Line(Vec2i(70, 40), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(30, 40), color));
	p.addEdge(Line(Vec2i(30, 40), Vec2i(30, 0), color));
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 0), color));
	p.addEdge(Line(Vec2i(30, 60), Vec2i(30, 80), color));
	p.addEdge(Line(Vec2i(30, 80), Vec2i(70, 80), color));
	p.addEdge(Line(Vec2i(70, 80), Vec2i(70, 60), color));
	p.addEdge(Line(Vec2i(70, 60), Vec2i(30, 60), color));

	polygons.push_back(p);
}

R::~R(void)
{
}

S::S(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 20), color));
	p.addEdge(Line(Vec2i(0, 20), Vec2i(70, 20), color));
	p.addEdge(Line(Vec2i(70, 20), Vec2i(70, 40), color));
	p.addEdge(Line(Vec2i(70, 40), Vec2i(0, 40), color));
	p.addEdge(Line(Vec2i(0, 40), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 80), color));
	p.addEdge(Line(Vec2i(100, 80), Vec2i(30, 80), color));
	p.addEdge(Line(Vec2i(30, 80), Vec2i(30, 60), color));
	p.addEdge(Line(Vec2i(30, 60), Vec2i(100, 60), color));
	p.addEdge(Line(Vec2i(100, 60), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

S::~S(void)
{
}

T::T(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(35, 0), Vec2i(35, 70), color));
	p.addEdge(Line(Vec2i(35, 70), Vec2i(0, 70), color));
	p.addEdge(Line(Vec2i(0, 70), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(100, 70), Vec2i(65, 70), color));
	p.addEdge(Line(Vec2i(65, 70), Vec2i(65, 0), color));
	p.addEdge(Line(Vec2i(65, 0), Vec2i(35, 0), color));

	polygons.push_back(p);
}

T::~T(void)
{
}

U::U(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(30, 30), color));
	p.addEdge(Line(Vec2i(30, 30), Vec2i(70, 30), color));
	p.addEdge(Line(Vec2i(70, 30), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

U::~U(void)
{
}

V::V(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(50, 40), color));
	p.addEdge(Line(Vec2i(50, 40), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(30, 0), color));

	polygons.push_back(p);
}

V::~V(void)
{
}

W::W(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(20, 100), color));
	p.addEdge(Line(Vec2i(20, 100), Vec2i(20, 30), color));
	p.addEdge(Line(Vec2i(20, 30), Vec2i(40, 30), color));
	p.addEdge(Line(Vec2i(40, 30), Vec2i(40, 100), color));
	p.addEdge(Line(Vec2i(40, 100), Vec2i(60, 100), color));
	p.addEdge(Line(Vec2i(60, 100), Vec2i(60, 30), color));
	p.addEdge(Line(Vec2i(60, 30), Vec2i(80, 30), color));
	p.addEdge(Line(Vec2i(80, 30), Vec2i(80, 100), color));
	p.addEdge(Line(Vec2i(80, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

W::~W(void)
{
}

X::X(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 30), color));
	p.addEdge(Line(Vec2i(0, 30), Vec2i(30, 50), color));
	p.addEdge(Line(Vec2i(30, 50), Vec2i(0, 70), color));
	p.addEdge(Line(Vec2i(0, 70), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(50, 70), color));
	p.addEdge(Line(Vec2i(50, 70), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(100, 70), Vec2i(70, 50), color));
	p.addEdge(Line(Vec2i(70, 50), Vec2i(100, 30), color));
	p.addEdge(Line(Vec2i(100, 30), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(50, 30), color));
	p.addEdge(Line(Vec2i(50, 30), Vec2i(30, 0), color));
	p.addEdge(Line(Vec2i(30, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

X::~X(void)
{
}

Y::Y(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(30, 0), Vec2i(30, 50), color));
	p.addEdge(Line(Vec2i(30, 50), Vec2i(0, 70), color));
	p.addEdge(Line(Vec2i(0, 70), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(30, 100), color));
	p.addEdge(Line(Vec2i(30, 100), Vec2i(50, 70), color));
	p.addEdge(Line(Vec2i(50, 70), Vec2i(70, 100), color));
	p.addEdge(Line(Vec2i(70, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(100, 70), Vec2i(70, 50), color));
	p.addEdge(Line(Vec2i(70, 50), Vec2i(70, 0), color));
	p.addEdge(Line(Vec2i(70, 0), Vec2i(30, 0), color));

	polygons.push_back(p);
}

Y::~Y(void)
{
}

Z::Z(void)
{
	Vec3f color(1, 0, 0);
	Polygon p(color);
	p.addEdge(Line(Vec2i(0, 0), Vec2i(0, 30), color));
	p.addEdge(Line(Vec2i(0, 30), Vec2i(40, 70), color));
	p.addEdge(Line(Vec2i(40, 70), Vec2i(0, 70), color));
	p.addEdge(Line(Vec2i(0, 70), Vec2i(0, 100), color));
	p.addEdge(Line(Vec2i(0, 100), Vec2i(100, 100), color));
	p.addEdge(Line(Vec2i(100, 100), Vec2i(100, 70), color));
	p.addEdge(Line(Vec2i(100, 70), Vec2i(60, 30), color));
	p.addEdge(Line(Vec2i(60, 30), Vec2i(100, 30), color));
	p.addEdge(Line(Vec2i(100, 30), Vec2i(100, 0), color));
	p.addEdge(Line(Vec2i(100, 0), Vec2i(0, 0), color));

	polygons.push_back(p);
}

Z::~Z(void)
{
}

