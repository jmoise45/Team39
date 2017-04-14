/*
 * Menu.cpp
 *
 *  Created on: Apr 12, 2017
 *      Author: Sam
 */

#include <string>
#include <vector>
#include <iostream>

#include "stack.h"
#include "food.h"


/*
 *  ==========================================================
 * 		Menu Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */

class Menu
{
	private:
		vector <Food> menuItems;
		string chosenFood;
		LinkedList guestNames;
		int numGuests;
		double currentBudget;

	public:
		/* 	Constructor	 	*/
		Menu(LinkedList guestNames, int numGuests, double currentBudget);
		Menu(int numGuests, double currentBudget);

		/* 	Accessor Methods	 	*/
		vector <Food> getMenuItems();
		string getChosenFood();
		double getCurrentBudget();

		/* 	Mutator Methods	 	*/
		void setMenuItem(Food aMenuItem, int pos);
		void setChosenFood(string aChosenFood);

		/* Usefull methods			*/
		void initializeMenuItems();
		double updateBudget();
};



/* 	Constructor	 	*/
Menu::Menu(LinkedList aGuestNames, int aNumGuests, double aCurrentBudget)
{
	this->guestNames = aGuestNames;
	this->numGuests = aNumGuests;
	this->currentBudget = aCurrentBudget;
}

/* 	Constructor	 	*/
Menu::Menu(int aNumGuests, double aCurrentBudget)
{
	this->numGuests = aNumGuests;
	this->currentBudget = aCurrentBudget;
}



/* ----------------------------------------------------------------------------
 * 		Accessor Methods
 * ----------------------------------------------------------------------------				*/
vector <Food> Menu::getMenuItems()
{
	return this->menuItems;
}

string Menu::getChosenFood()
{
	return this->chosenFood;
}

double Menu::getCurrentBudget()
{
	return this->currentBudget;
}



/* ----------------------------------------------------------------------------
 * 		Mutator Methods
 * ----------------------------------------------------------------------------				*/
void Menu::setMenuItem(Food aMenuItem, int pos)
{
	this->menuItems[pos] = aMenuItem;
}

void Menu::setChosenFood(string aChosenFood)
{
	this->chosenFood = aChosenFood;
}




/* ----------------------------------------------------------------------------
 * 		Useful Methods
 * ----------------------------------------------------------------------------				*/

/* Initializes the menu to the default items				*/
void Menu::initializeMenuItems()
{
	Food foods[] = {
			//Entrees
			Food("Hamburger", 7.00, "Entree", false), Food("Cheeseburger", 7.50, "Entree", false),
			Food("Tilapia", 12.00, "Entree", true), Food("Chicken Wings (6)", 7.00, "Entree", false),
			Food("Steak", 13.00, "Entree", false), Food("Sushi Sampler", 14.00, "Entree", false),
			Food("Pizza", 9.00, "Entree", false), Food("Special Quesadilla", 12.00, "Entree", true),

			//Appetizers
			Food("House Salad", 10.00, "Appetizer", true), Food("Mozzarella Sticks", 7.00, "Appetizer", false),
			Food("Ceaser Salad", 11.00, "Appetizer", false), Food("Soup of the Day", 3.00, "Appetizer", true),

			//Desserts
			Food("Chocolate Ice Cream", 3.00, "Dessert", false), Food("Vanilla Ice Cream", 3.00, "Appetizer", false),

			//Sides
			Food("French Fries", 2.00, "Side", false), Food("Onion Rings", 2.50, "Side", true)};


	int size = sizeof(foods);

	for (int i = 0; i < size; i++)
		this->menuItems[i] = foods[i];
}

/* Updates budget for the entire program by accesing other class	 	*/
double Menu::updateBudget()
{
	int oldBudget = 0.0;

	// oldBudget = getBudget();			-  call super function


	return oldBudget;

}

