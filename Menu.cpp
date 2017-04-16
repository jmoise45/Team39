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
#include "menu.h"

using namespace std;


Menu::Menu()
{
	this->numGuests = 0;
	this->currentBudget = 0.0;
}


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

double Menu::getCurrentBudget()
{
	return this->currentBudget;
}

Food Menu::getChosenAppetizer()
{
	return this->chosenAppetizer;
}

Food Menu::getChosenEntree()
{
	return this->chosenEntree;
}

Food Menu::getChosenDessert()
{
	return this->chosenDessert;
}

Food Menu::getChosenSide()
{
	return this->chosenSide;
}


/* ----------------------------------------------------------------------------
 * 		Mutator Methods
 * ----------------------------------------------------------------------------				*/
void Menu::setMenuItem(Food aMenuItem, int pos)
{
	this->menuItems[pos] = aMenuItem;
}

/* ----------------------------------------------------------------------------
 * 		Useful Methods
 * ----------------------------------------------------------------------------				*/

/* Initializes the menu to the default items				*/
void Menu::initializeMenuItems()
{
	//Appetizers
	(this->menuItems).push_back(Food("House Salad", 10.00, "Appetizer", true));
	(this->menuItems).push_back(Food("Mozzarella Sticks", 7.00, "Appetizer", false));
	(this->menuItems).push_back(Food("Ceaser Salad", 11.00, "Appetizer", false));
	(this->menuItems).push_back(Food("Soup of the Day", 3.00, "Appetizer", true));


	//Entrees
	(this->menuItems).push_back(Food("Hamburger", 7.00, "Entree", false));
	(this->menuItems).push_back(Food("Cheeseburger", 7.50, "Entree", false));
	(this->menuItems).push_back(Food("Tilapia", 12.00, "Entree", true));
	(this->menuItems).push_back(Food("Chicken Wings (6)", 7.00, "Entree", false));
	(this->menuItems).push_back(Food("Steak", 13.00, "Entree", false));
	(this->menuItems).push_back(Food("Sushi Sampler", 14.00, "Entree", false));
	(this->menuItems).push_back(Food("Pizza", 9.00, "Entree", false));
	(this->menuItems).push_back(Food("Special Quesadilla", 12.00, "Entree", true));

	//Desserts
	(this->menuItems).push_back(Food("Chocolate Ice Cream", 3.00, "Dessert", false));
	(this->menuItems).push_back(Food("Vanilla Ice Cream", 3.00, "Dessert", false));

	//Sides
	(this->menuItems).push_back(Food("French Fries", 2.00, "Side", false));
	(this->menuItems).push_back(Food("Onion Rings", 2.50, "Side", true));
}


void Menu::printMenu()
{
	std::cout << "\n\n================================================================================" << endl;
	std::cout << "\tMENU\n===============================================================================\n\n";

	int entrees = 0;
	int appetizers = 0;
	int desserts = 0;
	int sides = 0;
	int other = 0;

	for (unsigned int i = 0; i < this->menuItems.size(); i++)
	{
		if (this->menuItems[i].getFoodType() == "Entree")
		{
			entrees++;
		}

		else if (this->menuItems[i].getFoodType() == "Appetizer")
		{
			appetizers++;
		}

		else if (this->menuItems[i].getFoodType() == "Dessert")
		{
			desserts++;
		}

		else if (this->menuItems[i].getFoodType() == "Side")
		{
			sides++;
		}

		else
			other++;
	}

	std::cout << "-------------------------------------------------\n";
	cout<< "Appetizers:\n" << endl;
	for (int k = 0; k < appetizers; k++)
	{
		std::cout<< "|" << k+1 << "|\t" << menuItems[k].getName() << "\t" << endl;
	}

	std::cout << "\n\n-------------------------------------------------\n\n";
	cout<< "Entrees:\n" << endl;
	for (int j = 0; j < entrees; j++)
	{
		std::cout<< "|" << j+1 << "|\t" << menuItems[j+appetizers].getName() << "\t\t" << endl;
	}

	std::cout << "\n\n-------------------------------------------------\n\n";
	cout<< "Desserts:\n" << endl;
	for (int a = 0; a < desserts; a++)
	{
		std::cout<< "|" << a+1 << "|\t" << menuItems[a+appetizers+entrees].getName() << "\t"<< endl;
	}

	std::cout << "\n\n-------------------------------------------------\n\n";
	cout<< "Sides:\n" << endl;
	for (int b = 0; b < sides; b++)
	{
		std::cout<< "|" << b+1 << "|\t" << menuItems[b+appetizers+entrees+desserts].getName() << "\t\t"<< endl;
	}

	if (other != 0)
		std::cout << "\n\nERROR - FOOD ITEM WITH BAD TYPE\n\n";
	std::cout << "\n-------------------------------------------------\n";
	std::cout << "===============================================================================\n\n\n";

	int numAppetizer = -99;
	int numEntree = -99;
	int numDessert = -99;
	int numSide = -99;

	while (numAppetizer <= 0 || numAppetizer > appetizers)
	{
		std::cout << "Please enter an Appetizer: ";
		std::cin>> numAppetizer;

		if (numAppetizer <= 0 || numAppetizer > appetizers)
			std::cout<< "ERROR - Invalid input!" << endl;
	}

	while (numEntree <= 0 || numEntree > entrees)
	{
		std::cout << "Please enter an Entree: ";
		std::cin>> numEntree;

		if (numEntree <= 0 || numEntree > entrees)
			std::cout<< "ERROR - Invalid input!" << endl;
	}

	while (numDessert <= 0 || numDessert > desserts)
	{
		std::cout << "Please enter a Dessert: ";
		std::cin>> numDessert;

		if (numDessert <= 0 || numDessert > desserts)
			std::cout<< "ERROR - Invalid input!" << endl;
	}

	while (numSide <= 0 || numSide > sides)
	{
		std::cout << "Please enter a Side: ";
		std::cin>> numSide;

		if (numSide <= 0 || numSide > sides)
			std::cout<< "ERROR - Invalid input!" << endl;
	}


	this->chosenAppetizer = this->menuItems[numAppetizer - 1];
	this->chosenEntree = this->menuItems[numEntree + numAppetizer - 2];
	this->chosenDessert = this->menuItems[numEntree + numAppetizer + numDessert - 3];
	this->chosenSide = this->menuItems[numEntree + numAppetizer + numDessert + numSide - 4];

	std::cout<< "\n\n--- All data successfully entered! --- " << endl ;
	std::cout<< "You requested:\n" << endl;

	std::cout<< "\nAppetizer: " << (this->menuItems[numAppetizer - 1]).getName() << endl;
	std::cout<< "\nEntree: " << (this->menuItems[numEntree + appetizers - 1].getName()) << endl;
	std::cout<< "\nDessert: " << (this->menuItems[entrees + appetizers + numDessert - 1].getName()) << endl;
	std::cout<< "\nSide: " << (this->menuItems[entrees + appetizers + desserts + numSide - 1].getName()) << endl;

	std::cout << "\n\n===============================================================================\n\n\n";
}



