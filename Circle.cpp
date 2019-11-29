#include "Circle.h"



Circle::Circle() : Figure()
{
}

Circle::Circle(int rad) : Figure(), m_radius(rad)
{
}

double Circle::getArea()
{
	return (m_radius*m_radius*PI);
}

std::string Circle::getName()
{
	return m_name;
}

void Circle::accept(Visitor v)
{
	v.visitCircle(*this);
}
