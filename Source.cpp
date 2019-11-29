#include "Circle.h"
#include "Ellipse.h"
#include <vector>
#include <random>
#include <iostream>
#include <iomanip>

int main()
{
	std::random_device rd;
	std::default_random_engine generator(rd());
	std::uniform_int_distribution<> distribution(1, 100);
	
	int figurenum = 20;
	std::vector<std::unique_ptr<Figure>> FigureArr(figurenum);

	double sumcircles = 0;

	for (int i = 0; i < figurenum; i++) {
		if (distribution(generator) % 2) {
			FigureArr[i] = std::make_unique <Circle>(distribution(generator));
			sumcircles += FigureArr[i]->getArea();
		} else
			FigureArr[i] = std::make_unique <Ellipse>(distribution(generator), (distribution(generator)/(i+2)));
	}


	for (int i = 0; i < figurenum-1; i++) {
		bool swapped(false);

		for (int j = 0; j < figurenum - i - 1; j++) {
			if ((FigureArr[j]->getArea()) > (FigureArr[j + 1]->getArea()))
				std::swap(FigureArr[j], FigureArr[j + 1]);
			swapped = true;
		}
		if (!swapped)
			break;
	}

	/*for (int i = 0; i < figurenum; i++) {
		std::cout << std::fixed << std::setprecision(7) << FigureArr[i]->getArea() << "  ";
		std::cout << FigureArr[i]->getName();
		std::cout << std::endl;
	}*/

	Visitor v;
	for (int i = 0; i < figurenum; i++) {
		FigureArr[i]->accept(v);
	}

	std::cout << std::endl;


	std::cout << "Sum of circles area: " << sumcircles << std::endl;
	return 0;
}