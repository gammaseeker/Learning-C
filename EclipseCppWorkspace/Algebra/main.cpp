#include<iostream>
#include "Coords.h"
#include "LinearEquation.h"

void testCoords()
{
	//Test default constructor
	Coords coord1;
	Coords coord2(4);
	Coords coord3(3, 2);
	std::cout << "coord1 is (" << coord1.getX() << ", " << coord1.getY() << ")" << std::endl;
	std::cout << "coord2 is (" << coord2.getX() << ", " << coord2.getY() << ")" << std::endl;
	std::cout << "coord3 is (" << coord3.getX() << ", " << coord3.getY() << ")" << std::endl;

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

void testLinearEquation()
{
	LinearEquation l1(1, 2, 3);
	LinearEquation lCopy(4, 5, 6);
	LinearEquation l2(lCopy);
	LinearEquation l3(Coords(3, 6), Coords(5, 10));
	LinearEquation l4(-2, Coords(1, 1));

	std::cout << "Linear Equation 1: " << l1.getA() << "x + " << l1.getB() << "y + " << l1.getC() << std::endl;
	std::cout << "Linear Equation 2: " << l2.getA() << "x + " << l2.getB() << "y + " << l2.getC() << std::endl;
	std::cout << "Linear Equation 3: " << l3.getA() << "x + " << l3.getB() << "y + " << l3.getC() << std::endl;
	std::cout << "Linear Equation 4: " << l4.getA() << "x + " << l4.getB() << "y + " << l4.getC() << std::endl;


}

int main()
{
	testCoords();
	testLinearEquation();
	return 0;
}
