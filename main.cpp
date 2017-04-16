#include "Person.h"
#include "Staff.h"
#include <iostream>
#include <fstream>
using namespace std;

//General Person methods
void Person::setName(std::string &name){
    this->name = name;
}

std::string Person::getName(){
    return name;
}

int Person::getAge() {

    return age;
}

//Guest methods
Guest::Guest(std::string &name, int &age){
    this->age = age;
    this->name = name;
}

void Guest::RSVP(bool &coming){
    this->isGoing = coming;
}

void Guest::setAge(int &age){
    this->age = age;
}

bool Guest::getRSVPStatus(){
    return isGoing;
}

int Guest::getAge(){
    return age;
}

//personList methods
personList::personList()
{
}

void personList::addPerson(Person *person){

    personlist.push_back(person);

}

void personList::deletePerson(std::string personName){//removes node, links adjacent nodes, and adds a free space

    int control = 0;

    for(unsigned int i = 0; i < personlist.size(); i++)
    {

        if(personlist[i]->getName() == personName)
        {

            personlist.erase (personlist.begin()+i);

            ++control;
        }
    }

    if(control != 0)
    {

        cout << "The person has been removed successfully from the list.\n" << endl;
    }

    else
    {

        cout << "The person does not exist in the list.\n" << endl;
    }
}

void personList::printList(){

  if(personlist.size() > 0)
    {

        for(unsigned int i = 0; i < personlist.size(); i++)
        {

            cout << (i+1) << ". " << personlist[i]->getName() << " (" << personlist[i]->getAge() << ")" << endl;
        }

        cout << endl;
    }
    else
    {

        cout << "Empty\n" << endl;
    }
}

unsigned int personList::getSize() {

    return personlist.size();
}

//Staff methods

Staff::Staff(string jobTitle, double hireCost){
    this->jobTitle = jobTitle;
    this->hireCost = hireCost;
}

void Staff::setJobTitle(string jobTitle) {
    this->jobTitle = jobTitle;
}

void Staff::setHireCost(double hireCost) {
    this->hireCost = hireCost;
}


string Staff::getJobTitle() {
    return jobTitle;
}

double Staff::getHireCost() {
    return hireCost;
}
bool checkBudget(double tempMoneySpent, double budget, double moneyLeft);
string partyName;
int main() {


     double budget;
     double moneySpent = 0;
     string guestFileName;
     string choices[15];
     double priceOfChoices[15];
     int hoursOfParty;
     double moneyLeft;
     double tempMoneySpent=0;


    cout << "Welcome to the Party Planner!" << endl;
    cout << "Please enter the name of your party: " << endl;
    cin >> partyName;
    cout << "Please enter your budget for " << partyName << ": " << endl;
    cin >> budget;
    cout << "How many hours will the party be?" << endl;
    cin >> hoursOfParty;
    cout << "How many guests will be attending the party? Please enter a \".txt\" file "
                    << "with the first and last names of the guests: " << endl;
    string s = " ";
    moneyLeft = budget;
    string filename = " ";

    personList *guestList = new personList();

    cin >> filename;

    ifstream file;

    file.open(filename.c_str(), std::ifstream::in);

    string name = " ";

    int age = 0;

    while(file >> name) {

        file >> age;

        Guest *guest = new Guest(name, age);

        guestList->addPerson(guest);
    }

    guestList->printList();
    unsigned int numOfGuests = guestList->getSize();


    //take in guest names and ages and then put them into the guest list PersonList


    //determine the number of staff needed for the event
    int numOfWaiters = numOfGuests / 15;
    int numOfBartenders = numOfGuests / 40;


    //create a staff list
    personList *staffList = new personList();

    for (int i = 0; i <= numOfWaiters; i++)
    {
        Staff *staffPointer = new Staff("waiter", 20);
        staffList->addPerson(staffPointer);
    }

    int hourlyPriceOfStaff = (numOfWaiters * 20) + (numOfBartenders * 25);



    int totalPriceOfStaff = hourlyPriceOfStaff * hoursOfParty;

    moneySpent += totalPriceOfStaff;

    moneyLeft = budget - moneySpent;

    if(moneySpent > budget )
    {
        cout << "Sorry, you are $" << moneySpent - budget << " over your budget. You have too many guests for your budget. " << endl;
    }
    else
    {
        cout << "You have spent $" << totalPriceOfStaff << " on the staff for the event. You have $"
                << moneyLeft <<" left to spend." << endl;
    }
    //go into a loop to set the location, menu, furniture, and the entertainment
    int mainLoopChoice;
    double entertainmentPrice;
    bool partyIsSet = false;
    while (!partyIsSet)
    {
        cout << "Please pick what you would like to determine next: " << endl;
        cout << "1) Location " << endl;
        cout << "2) Entertainment " << endl;
        cout << "3) Furniture " << endl;
        cout << "4) Menu Items " << endl;
        cin >> mainLoopChoice;

        if (mainLoopChoice == 1)
        {
            int locationChoice;
            cout << "Where would you like " << partyName << " to be located?"<< endl;
            cout << "1. Gainesville, Florida"<< endl;
            cout << "2. Los Angeles, California"<< endl;
            cout << "3. New York City, New York"<< endl;
            cout << "4. Austin, Texas" << endl;
            cout << "5. New Orleans, Louisiana" << endl;
            cin >> locationChoice;

            bool x = true;
            int venueChoice;
            double venuePrice;
            while(x)
            {

            if(locationChoice == 1)
            {
                cout<< "Please select a venue in your price range"<< endl;
                cout << "1. Oak $2000" << endl;
                cout << "2. The Hampton $5000" << endl;
                cout << "3. University of Florida Hilton $10000" << endl;
                cin >> venueChoice;
                if(venueChoice == 1)
                {
                    venuePrice = 2000;
                }
                else if(venueChoice == 2)
                {
                    venuePrice = 5000;
                }
                else
                {
                    venuePrice = 10000;
                }
                tempMoneySpent = moneySpent + venuePrice;
                if(checkBudget(tempMoneySpent, budget, moneyLeft))
                {
                    moneySpent += venuePrice;
                    moneyLeft -= venuePrice;
                }
                x=false;
            }

            else if(locationChoice == 2)
            {
                cout<< "Please select a venue in your price range";
                cout << "1. The Hilton Hotel $2000" << endl;
                cout << "2. The Hampton $5000" << endl;
                cout << "3. The Ritz-Carlton $10000" << endl;
                cin>> venueChoice;
                if(venueChoice == 1)
                {
                    venuePrice = 2000;
                }
                else if(venueChoice == 2)
                {
                    venuePrice = 5000;
                }
                else
                {
                    venuePrice = 10000;
                }
                tempMoneySpent = moneySpent + venuePrice;
                if(checkBudget(tempMoneySpent, budget, moneyLeft))
                {
                    moneySpent += venuePrice;
                    moneyLeft -= venuePrice;
                }
                x=false;
            }
            else if(locationChoice == 3)
            {
                cout<< "Please select a venue in your price range";
                cout << "1. The Hilton Hotel $2000" << endl;
                cout << "2. The Hampton $5000" << endl;
                cout << "3. The Ritz-Carlton $10000" << endl;
                cin>> venueChoice;
                if(venueChoice == 1)
                {
                    venuePrice = 2000;
                    checkBudget(tempMoneySpent, budget, moneyLeft);
                }
                else if(venueChoice == 2)
                {
                    venuePrice = 5000;
                }
                else
                {
                    venuePrice = 10000;
                }
                tempMoneySpent = moneySpent + venuePrice;
                if(checkBudget(tempMoneySpent, budget, moneyLeft))
                {
                    moneySpent += venuePrice;
                    moneyLeft -= venuePrice;
                }
                x=false;
            }
            else if(locationChoice == 4)
            {
                cout<< "Please select a venue in your price range";
                cout << "1. The Hilton Hotel $2000" << endl;
                cout << "2. The Hampton $5000" << endl;
                cout << "3. The Ritz-Carlton $10000" << endl;
                cin>> venueChoice;
                if(venueChoice == 1)
                {
                    venuePrice = 2000;
                }
                else if(venueChoice == 2)
                {
                    venuePrice = 5000;
                }
                else
                {
                    venuePrice = 10000;
                }
                tempMoneySpent = moneySpent + venuePrice;
                if(checkBudget(tempMoneySpent, budget, moneyLeft))
                {
                    moneySpent += venuePrice;
                    moneyLeft -= venuePrice;
                }
                x=false;
            }
            else if(locationChoice == 5)
            {
                cout<< "Please select a venue in your price range";
                cout << "1. The Hilton Hotel $2000" << endl;
                cout << "2. The Hampton $5000" << endl;
                cout << "3. The Ritz-Carlton $10000" << endl;
                cin>> venueChoice;
                if(venueChoice == 1)
                {
                    venuePrice = 2000;
                }
                else if(venueChoice == 2)
                {
                    venuePrice = 5000;
                }
                else
                {
                    venuePrice = 10000;
                }
                tempMoneySpent = moneySpent + venuePrice;
                if(checkBudget(tempMoneySpent, budget, moneyLeft))
                {
                    moneySpent += venuePrice;
                    moneyLeft -= venuePrice;
                }
                x=false;
            }
            else{
                cout<< "Please choose a valid selection.";
            }

            }
        }
        else if (mainLoopChoice == 2)
        {
            int entertainmentChoice;
            cout << "Please choose your entertainment for the event: " << endl;
            cout << "1) Rock Band - $1,000" << endl;
            cout << "2) Jazz Band - $1,250" << endl;
            cout << "3) DJ - $800" << endl;
            cout << "4) Acrobats - $950" << endl;

            cin >> entertainmentChoice;

            bool e = false;
            while (!e)
            {
                if (entertainmentChoice == 1)
                {
                    entertainmentPrice = 1,000;
                    e = true;
                    tempMoneySpent = moneySpent + entertainmentPrice;
                    if(checkBudget(tempMoneySpent, budget, moneyLeft))
                    {
                        moneySpent += entertainmentPrice;
                        moneyLeft -= entertainmentPrice;
                    }

                }
                else if (entertainmentChoice == 2)
                {
                    entertainmentPrice = 1,250;
                    e = true;
                    tempMoneySpent = moneySpent + entertainmentPrice;
                    if(checkBudget(tempMoneySpent, budget, moneyLeft))
                    {
                        moneySpent += entertainmentPrice;
                        moneyLeft -= entertainmentPrice;
                    }
                }
                else if (entertainmentChoice == 3)
                {
                    entertainmentPrice = 800;
                    e = true;
                    tempMoneySpent = moneySpent + entertainmentPrice;
                    if(checkBudget(tempMoneySpent, budget, moneyLeft))
                    {
                        moneySpent += entertainmentPrice;
                        moneyLeft -= entertainmentPrice;
                    }
                }
                else if (entertainmentChoice == 4)
                {
                    entertainmentPrice = 950;
                    e = true;
                    tempMoneySpent = moneySpent + entertainmentPrice;
                    if(checkBudget(tempMoneySpent, budget, moneyLeft))
                    {
                        moneySpent += entertainmentPrice;
                        moneyLeft -= entertainmentPrice;
                    }
                }
                else
                {
                    cout << "Invalid input. Pick another option.";
                }
            }


        }
        else if (mainLoopChoice == 3)
        {

        }
        else if (mainLoopChoice == 4)
        {

        }
        else
        {

        }
    }



    cout << "Please select an entree from the menu: " << endl;
  }



/*void makeItineraryFile(Budget budget)
{
    /*This method will print out all of the necessary information for the party to a file.
    *It will start with a header with the party name and times, then go to a location.
    *then print the staff and the food options as well as the entertainment.

    ofstream outputFile;
    outputFile.open("EventItinerary.txt");
    outputFile << budget.partyName << endl;
}*/

bool checkBudget(double tempMoneySpent, double budget, double moneyLeft)
{
    if(tempMoneySpent > budget )
    {
        cout << "Sorry, you are $" << tempMoneySpent - budget << " over your budget. Please select a cheaper option. " << endl;
        return false;
    }
    else
    {
       /* for(int i = 0; i < 15; i++)
        {
            cout << partyName << endl;
            cout << i + 1 << ") " << choices[i] << " $" << priceOfChoices << endl;

        }*/
        cout << "You spent: $" << tempMoneySpent << endl;
        cout << "You have $" << moneyLeft << " left to spend." << endl;
        return true;
    }
}
