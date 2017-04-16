/*
 * menu.h
 *
 *  Created on: Apr 16, 2017
 *      Author: samsi
 */

#ifndef MENU_H_
#define MENU_H_

#include <string>
#include <vector>
#include <iostream>

#include "stack.h"
#include "food.h"

using namespace std;

/*
 *  ==========================================================
 * 		Menu Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */

class Menu
{
	private:
		vector <Food> menuItems;
		Food chosenAppetizer;
		Food chosenEntree;
		Food chosenDessert;
		Food chosenSide;
		LinkedList guestNames;
		int numGuests;
		double currentBudget;

	public:
		/* 	Constructor	 	*/
		Menu();
		Menu(LinkedList guestNames, int numGuests, double currentBudget);
		Menu(int numGuests, double currentBudget);

		/* 	Accessor Methods	 	*/
		vector <Food> getMenuItems();
		double getCurrentBudget();
		Food getChosenAppetizer();
		Food getChosenEntree();
		Food getChosenDessert();
		Food getChosenSide();

		/* 	Mutator Methods	 	*/
		void setMenuItem(Food aMenuItem, int pos);

		/* Useful methods			*/
		void initializeMenuItems();
		void printMenu();
};




#endif /* MENU_H_ */
