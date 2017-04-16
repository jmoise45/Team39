#ifndef TERMPROJECT_H_INCLUDED
#define TERMPROJECT_H_INCLUDED
#include <string>
#include <vector>
using namespace std;

class Furniture {

private:
    string name;
    double price;
    int amount;
    string description;

public:
    Furniture(string name, int amount);
    string getName();
    double getPrice();
    void setPrice(double &price);
    int getAmount();
    void setAmount(int &amount);
    string getDescription();
    void setDescription(string &description);
};

class Inventory {

private:
    vector<Furniture*> inventory;


public:
    Inventory();
    unsigned int getInventorySize();
    void addFurniture(Furniture *furniture);
    void removeFurniture(string &name);
    void printFurnitureDetail();
    void printFurnitureNames();
    void modify(int &choice);
    double currencyTotal();
};


#endif // TERMPROJECT_H_INCLUDED
