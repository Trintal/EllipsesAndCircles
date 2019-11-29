#pragma once
#include<iostream>
#include <string>
#include "Visitor.h"

#define PI 3.14159265

class Figure
{
public:
	Figure() {};
	virtual double getArea() = 0;
	virtual std::string getName() = 0;
	virtual void accept(Visitor) = 0;
};

