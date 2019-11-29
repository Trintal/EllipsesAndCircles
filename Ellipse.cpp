#include "Ellipse.h"



Ellipse::Ellipse(): Figure()
{
}

Ellipse::Ellipse(int h, int w) : Figure(), m_hight(h), m_width(w)
{
}

double Ellipse::getArea()
{
	return ((m_hight/2.0)*(m_width/2.0)*PI);
}

std::string Ellipse::getName()
{
	return m_name;
}

void Ellipse::accept(Visitor v)
{
	v.visitEllipse(*this);
}

