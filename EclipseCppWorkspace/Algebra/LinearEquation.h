/*
 * LinearEquation.h
 *
 *  Created on: Nov 4, 2017
 *      Author: Prodigy
 */
#include "Coords.h"
#include <math.h>

#ifndef LINEAREQUATION_H_
#define LINEAREQUATION_H_

class LinearEquation {
	private:
		double a;
		double b;
		double c;

	public:
		LinearEquation(double a, double b, double c);
		LinearEquation(const LinearEquation &) = default;
		LinearEquation(Coords&& point1, Coords&& point2)
		{
			this -> a = point2.getY() - point1.getY();
			this -> b = point2.getX() - point1.getX();
			double yInt = point1.getY() - (point1.getX() * (-a/b));
			this -> c = 0 - (b * yInt);
		}

		LinearEquation(double slope, Coords & point)
		{
			this -> a = 0-slope;
			this -> b = 1;
			this -> c = slope * point.getX() - point.getY();
		}

		std::string toString()
		{
			return std::to_string(a) + "x + " + std::to_string(b) + "y + " + std::to_string(c) + " = 0";
		}

		double getA()
		{
			return a;
		}

		double getB()
		{
			return b;
		}

		double getC()
		{
			return c;
		}

		bool slopeDefined()
		{
			if(!isnan(-a/b) == false)
			{
				return true;
			}
			return false;
		}

		bool hasYIntercept()
		{
			return (c > 0 || c < 0);
		}

		bool hasXIntercept()
		{
			if(isnan(-c/a) == false)
			{
				return true;
			}
			return false;
		}

		double slope()
		{
			return (-a/b);
		}

		double yIntercept()
		{
			return ((double)-c/b);
		}

		double xIntercept()
		{
			return ((double)-c/a);
		}

		bool isVertical()
		{
			return (slopeDefined() == true);
		}

		bool isIncreasing()
		{
			return slope() > 0;
		}
		bool isDecreasing()
		{
			return slope() < 0;
		}
		bool isHorizontal()
		{
			return (slope() == 0);
		}

		bool isAFunction()
		{
			return !isVertical();
		}

		bool isValidLinearEquation()
		{
			return (a != 0 || b != 0);
		}

		bool isDirectVariation()
		{
			return c == 0;
		}

		double slopeOfPerpendicularLine()
		{
			if(isVertical())
			{
				return 0;
			}
			return (-1/slope());
			//return b/a;
		}

		bool equals(LinearEquation other)
		{
			if(this -> isHorizontal() && other.isHorizontal())
			{
				return this -> yIntercept() == other.yIntercept();
			}
			if(this -> isVertical() && other.isVertical())
			{
				return this -> xIntercept() == other.xIntercept();
			}
			return this -> yIntercept() == other.yIntercept() && this -> xIntercept() == other.xIntercept();
		}

		bool isParallel(LinearEquation other)
		{
			if(this -> equals(other))
				return false;
			if(this -> isVertical() && other.isVertical())
				return true;
			return (this -> slope() == other.slope());
		}

		Coords pointOfIntersection(LinearEquation other)
		{
			if(this -> equals(other) || this -> isParallel(other))
			{
				return NULL;
			}

			double d = other.a;
			double e = other.b;
			double f = other.c;
			//special code :^)
			double x = (b*f - c*e)/(a*e - b*d);
			double y = ((0-a)/b)*x - (c/b);
			if(this -> isVertical())
			{
				y = (0-d)*x/e - f/e;
			}
			return Coords(x, y);
		}

		LinearEquation parallelLine(Coords point)
		{
			if(this -> isVertical())
			{
				return LinearEquation(1, 0, -point.getX());
			}
			return LinearEquation(this -> slope(), point);
		}

		LinearEquation perpendicularLine(Coords point)
		{
			if(this -> isHorizontal())
			{
				return LinearEquation(1, 0, -point.getX());
			}
			return LinearEquation(this -> slopeOfPerpendicularLine(), point);
		}

		double shortestDistanceFrom(Coords point)
		{
			/*LinearEquation perpLine = this.perpendicularLine(point);
			Coords intersection = pointOfIntersection(perpLine);
			return  point.distanceFrom(intersection);*/
			return  point.distanceFrom(pointOfIntersection(this -> perpendicularLine(point)));
		}
		virtual ~LinearEquation();
};

#endif /* LINEAREQUATION_H_ */
