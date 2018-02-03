/*
 * LinearEquation.cpp
 *
 *  Created on: Nov 4, 2017
 *      Author: Prodigy
 */
#include<iostream>
#include "LinearEquation.h"

LinearEquation::LinearEquation(double a, double b, double c) {
	this -> a = a;
	this -> b = b;
	this -> c = c;
}

LinearEquation::~LinearEquation() {
	std::cout << "LinearEquation object is being destroyed" << std::endl;
}

