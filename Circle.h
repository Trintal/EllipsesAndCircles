#pragma once
#include "Figure.h"

class Circle : public Figure
{
	std::string m_name = "Circle";
	int m_radius = 0;

public:
	Circle();
	Circle(int);
	virtual double getArea();
	virtual std::string getName();
	virtual void accept(Visitor v);
};

