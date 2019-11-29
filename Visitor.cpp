#include <iostream>
#include "Visitor.h"
#include "Ellipse.h"
#include "Circle.h"

void Visitor::visitEllipse(Ellipse el)
{
	std::cout << el.getName() << " " << el.getArea() << std::endl;
}

void Visitor::visitCircle(Circle c)
{
	std::cout << c.getName() << " " << c.getArea() << std::endl;
}
