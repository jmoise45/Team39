#ifndef TERMPROJECT_H_INCLUDED
#define TERMPROJECT_H_INCLUDED

#include <string>
#include <vector>

using namespace std;

class Furniture 
{
    private:
        string name;
        double price;
        int amount;
        string description;

    public:
        /*      Constructor	              	*/
        Furniture(string name, int amount);
        
        /*  	Accessor Methods	    	*/
        string getName();
        double getPrice();
        int getAmount();
        string getDescription();
    
        /*  	Mutator Methods	    	    */
        void setPrice(double &price);
        void setAmount(int &amount);
        void setDescription(string &description);
};

class Inventory
{
    private:
        vector<Furniture*> inventory;
    
    public:
        /*      Constructor	              	*/
        Inventory();
        
        /*  	Accessor Methods	    	*/
        unsigned int getInventorySize();
        
        /*      Useful Methods              */
        void addFurniture(Furniture *furniture);
        void removeFurniture(string &name);
        void printFurnitureDetail();
        void printFurnitureNames();
        void modify(int &choice);
        double currencyTotal();
};


#endif // TERMPROJECT_H_INCLUDED
