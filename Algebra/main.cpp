#include<iostream>
#include "Coords.h"

void testCoords()
{
	//Test default constructor
	Coords coord1;
	std::cout << "coord1 is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;

	coord1.setX(5);
	coord1.setX(8);
	std::cout << "coord1 is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;

	coord1.reflectOnXAxis();
	std::cout << "coord1 reflected about the x-axis is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;

	coord1.reflectOnYAxis();
	std::cout << "coord1 reflected about the y-axis is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;

	coord1.reflectOnOrigin();
	std::cout << "coord1 reflected about the origin is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;

	coord1.translate(5, 10);
	std::cout << "coord1 translated 5 units up and 10 units right is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;

	coord1.dilate(5);
	std::cout << "coord1 dilated by a scale of 5 units is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;

	std::cout << "This distance from the origin is " << coord1.distanceFromOrigin() << std::endl;

	std::cout << "This distance from the point (2, 3) is " << coord1.distanceFrom(Coords(2,3)) << std::endl;

	std::cout << coord1.equals(Coords(coord1.getX(), coord1.getY())) << std::endl;
	std::cout << coord1.equals(Coords(1, 1)) << std::endl;

	std::cout << "The slope of the line from the point to the origin is " << coord1.getSlopeOfLineSegment(Coords(0,0)) << std::endl;

	std::cout << "End test for " << coord1.toString() << std::endl;

}

int main()
{
	testCoords();
	return 0;
}
