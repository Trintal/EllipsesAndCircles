#pragma once

class Ellipse;
class Circle;

class Visitor
{
public:
	void visitEllipse(Ellipse el);
	void visitCircle(Circle c);
};

