/*
 * food.h
 *
 *  Created on: Apr 14, 2017
 *      Author: Sam
 */

#ifndef FOOD_H_
#define FOOD_H_

#include <string>
#include <iostream>

using namespace std;


/*
 *  ==========================================================
 * 		Food Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */

class Food
{
	private:
		string name;
		double price;
		string foodType;
		bool special;

	public:
		/* 	Constructor	 	*/
		Food(string aName, double aPrice, string aFoodType, bool aSpecial);

		/* 	Accessor Methods	 	*/
		double getName();
		double getPrice();
		string getFoodType();
		bool isSpecial();

		/* 	Mutator Methods	 	*/
		void setPrice(double aItemPrice);
		void setFoodType(string aFoodType);
};



#endif /* FOOD_H_ */
