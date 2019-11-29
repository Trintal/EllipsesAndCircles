#pragma once
#include "Figure.h"

class Ellipse : public Figure
{
	std::string m_name = "Ellipse";
	int m_hight = 0;
	int m_width = 0;
public:
	Ellipse();
	Ellipse(int, int);
	virtual double getArea();
	virtual std::string getName();
	virtual void accept(Visitor v);
};

