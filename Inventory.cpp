#include <iostream>
#include "Inventory.h"

Furniture::Furniture(string name, int amount)
{
    this->name = name;
    this->price = 0;
    this->amount = amount;
    this->description = "";
}

string Furniture::getName()
{

    return name;
}

double Furniture::getPrice()
{

    return price;
}

void Furniture::setPrice(double &price)
{

    this->price = price;
}

int Furniture::getAmount()
{

    return amount;
}

void Furniture::setAmount(int &amount)
{
    this->amount = amount;
}

string Furniture::getDescription()
{

    return description;
}

void Furniture::setDescription(string &description)
{

    this->description = description;
}

Inventory::Inventory()
{

}

unsigned int Inventory::getInventorySize() {

    return inventory.size();
}

void Inventory::addFurniture(Furniture *furniture)
{
    int control = 0;

    if(inventory.empty() == false)
    {
        for(unsigned int i = 0; i < inventory.size(); i++)
        {
            if(inventory[i]->getName() == furniture->getName())
            {
                ++control;
                cout << "This type of furniture already exists in the inventory" << endl;
                cout << endl;
            }
        }
    }
    if(control == 0)
    {
        inventory.push_back(furniture);
    }
}

void Inventory::removeFurniture(string &name)
{

    int control = 0;

    for(unsigned int i = 0; i < inventory.size(); i++)
    {

        if(inventory[i]->getName() == name)
        {

            inventory.erase (inventory.begin()+i);

            ++control;
        }
    }

    if(control != 0)
    {

        cout << "The given type of furniture has been removed successfully.\n" << endl;
    }

    else
    {

        cout << "The given type of furniture does not exist in the inventory.\n" << endl;
    }
}

void Inventory::printFurnitureDetail()
{

    if(inventory.size() > 0)
    {

        for(unsigned int i = 0; i < inventory.size(); i++)
        {

            cout << (i+1) << ". " << inventory[i]->getName() << endl;

            cout << "  (a) Quantity: " << inventory[i]->getAmount() << endl;

            cout << "  (b) Total Price: " << inventory[i]->getPrice() << endl;

            cout << "  (c) Description: " << inventory[i]->getDescription() << endl;
        }

        cout << endl;
    }
    else
    {

        cout << "Empty\n" << endl;
    }
}

void Inventory::printFurnitureNames()
{

    if(inventory.size() > 0)
    {

        for(unsigned int i = 0; i < inventory.size(); i++)
        {

            cout << (i+1) << ". " << inventory[i]->getName() << endl;
        }

        cout << endl;
    }
    else
    {

        cout << "Empty\n" << endl;
    }
}

void Inventory::modify(int &choice)
{

    if(choice <= 0 || choice > inventory.size())
    {

        cout << "Invalid input.\n" << endl;
    }

    else
    {

        int condition = true;

        int choice2 = 0;

        int quantity = 0;

        double price = 0;

        string description = "";

        cout << "Which component of the furniture do you want to modify?\n" << endl;

        cout << "1.Quantity" << endl;

        cout << "2.Total Price" << endl;

        cout << "3.Description\n" << endl;

        cin >> choice2;

        if(cin.fail())
        {

            cout << endl;

            cerr << "Invalid input." << endl;

            cout << endl;

            cin.clear();

            cin.ignore(256,'\n');

            return;
        }

        cout << endl;

        if (choice2 == 1)
        {

            cout << "Quantity: ";

            cin >> quantity;

            if(cin.fail())
            {
                cout << endl;

                cerr << "Invalid input." << endl;

                cout << endl;

                cin.clear();

                cin.ignore(256,'\n');

                return;
            }

            cout << endl;

            inventory[choice-1]->setAmount(quantity);
        }

        else if(choice2 == 2)
        {

            cout << "Total Price: ";

            cin >> price;

            if(cin.fail())
            {

                cout << endl;

                cerr << "Invalid input." << endl;

                cout << endl;

                cin.clear();

                cin.ignore(256,'\n');

                return;
            }

            cout << endl;

            inventory[choice-1]->setPrice(price);
        }

        else if(choice2 == 3)
        {
            string dum;

            getline(cin, dum);

            cout << "Description: ";

            getline(cin, description);

            cout << endl;

            inventory[choice-1]->setDescription(description);
        }

        else
        {

            cout << "Invalid input.\n" << endl;
        }
    }
}

int main()
{
    Inventory *in = new Inventory();

    string n;

    bool control = true;

    while(control == true)
    {
        cout << "1.Add Furniture" << endl;
        cout << "2.Remove Furniture" << endl;
        cout << "3.Print Furniture Detail" << endl;
        cout << "4.Modify Furniture Detail" << endl;
        cout << "5.Exit\n" << endl;
        cin >> n;
        cout << endl;

        if(n == "1")
        {

            cout << "Name of furniture: ";

            string name;

            int amount;

            cin >> name;

            cout << endl;

            cout << "Quantity: ";

            cin >> amount;

            if(cin.fail()) {

                cout << endl;

                cerr << "Invalid input." << endl;

                cout << endl;

                cin.clear();

                cin.ignore(256,'\n');

                continue;
            }

            cout << endl;

            Furniture *furn = new Furniture(name, amount);

            in->addFurniture(furn);
        }

        else if(n == "2")
        {

            cout << "Input the name of the furniture: ";
            string name;
            cin >> name;
            cout << endl;

            in->removeFurniture(name);
        }

        else if(n == "3")
        {

            in->printFurnitureDetail();
        }

        else if(n == "4")
        {

            if(in->getInventorySize() == 0)
            {

                cout << "Empty\n" << endl;

                continue;
            }

            else
            {

                cout << "Choose the type of furniture that you want to modify:\n" << endl;

                in->printFurnitureNames();

                int choice = 0;

                cin >> choice;

                if(cin.fail())
                {

                    cout << endl;

                    cerr << "Invalid input." << endl;

                    cout << endl;

                    cin.clear();

                    cin.ignore(256,'\n');

                    continue;
                }

                cout << endl;

                in->modify(choice);

            }
        }

        else if (n == "5")
        {

            control = false;
        }

        else
        {

            cout << "Invalid input, try again.\n" << endl;

            cin.clear();
        }
    }
    return 0;
}
