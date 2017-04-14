/*
 * food.cpp
 *
 *  Created on: Apr 14, 2017
 *      Author: Sam
 */

#include <string>
#include <iostream>

#include "food.h"

using namespace std;


Food::Food(string aName, double aPrice, string aFoodType, bool aSpecial)
{
	this->name = aName;
	this->price = aPrice;
	this->foodType = aFoodType;
	this->special = aSpecial;
}

double Food::getPrice()
{
	return this->price;
}

string Food::getFoodType()
{
	return this->foodType;
}

void Food::setPrice(double aPrice)
{
	this->price = aPrice;
}

void Food::setFoodType(string aFoodType)
{
	this->foodType = aFoodType;
}


