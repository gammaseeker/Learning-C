/*
 * Coords.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: Prodigy
 */

#include<iostream>
#include "Coords.h"

Coords::Coords()
{
	this -> x = 0;
	this -> y = 0;

}

Coords::~Coords() {
	std::cout << "Coords object is being destroyed" << std::endl;
}

