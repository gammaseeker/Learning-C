/*
 * Coords.h
 *
 *  Created on: Nov 2, 2017
 *      Author: Prodigy
 */
#include <string>
#include <math.h>

#ifndef COORDS_H_
#define COORDS_H_

class Coords {
private:
	double x;
	double y;
	public:

		Coords();

		Coords(double x, double y)
		{
			this -> x = x;
			this -> y = y;
		}

		Coords(double value)
		{
			this -> x = value;
			this -> y = value;
		}

		Coords(const Coords &) = default;

		double getX()
		{
			return x;
		}

		double getY()
		{
			return y;
		}

		void setX(double x)
		{
			this -> x = x;
		}

		void setY(double y)
		{
			this -> y = y;
		}

		void reflectOnXAxis()
		{
			this -> y = 0 - y;
		}

		void reflectOnYAxis()
		{
			this -> x = 0 - x;
		}

		void reflectOnOrigin()
		{
			reflectOnXAxis();
			reflectOnYAxis();
		}

		void translate(double horizontal, double vertical)
		{
			this -> x = x + horizontal;
			this -> y = y + vertical;
		}

		void dilate(double dilationFactor)
		{
			this -> x = x * dilationFactor;
			this -> y = y * dilationFactor;
		}

		double distanceFromOrigin()
		{
			return sqrt(pow(this -> y, 2.0) + pow(this -> x, 2.0));
		}

		double distanceFrom()
		{
			return distanceFromOrigin();
		}

		double distanceFrom(Coords other)
		{
			return sqrt(pow(other.y - this -> y, 2) + pow(other.x - this -> x, 2));
		}

		double distanceFrom(double xCoord, double yCoord)
		{
			Coords other(xCoord, yCoord);
			return distanceFrom(other);
		}

		bool equals(Coords otherPoint)
		{
			if(this -> x == otherPoint.x && this -> y == otherPoint.y)
			{
				return true;
			}

			return false;
		}

		double getSlopeOfLineSegment(Coords other)
		{
			if(other.x < this -> x)
			{
				return((this -> y = other.y)/(this -> x - other.x));
			}
			else
			{
				return((other.y - this -> y)/(other.x - this -> y));
			}
		}

		bool slopeOfLineSegmentDefined(Coords other)
		{
			if(other.x < this -> x)
			{
				if((this -> x - other.x) != 0)
				{
					return true;
				}
			}
			else
			{
				if((other.x - this -> x) != 0)
				{
					return true;
				}
			}
			return false;
		}

		std::string toString()
		{
			return "(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")";
		}

		virtual ~Coords();// This is a deconstructor
};

#endif /* COORDS_H_ */
