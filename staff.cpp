#include <iostream>
#include <string>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

class Staff:public Person {
    Staff(string name, int age, bool isGuest, string jobTitle, double cost);
public:
    string name;
    int age;
    string jobTitle;
    double cost;
private:
    string getName();
    int getAge();
    string getJobTitle();
    double getCost();
    bool isGuest();
    int numStaff();
    int numBartender();
    void printStaff();
}

string getName() {
    return name;
}

int getAge() {
    return age;
}

string getJobTitle() {
    return jobTitle;
}

double getCost() {
    return cost;
}

bool isGuest() {
    return isGuest;
}

int numStaff() {
    return numStaff;
}

int numBartender() {
    return numBartender;
}

void printStaff() {
    cout << "Number of staff: " << numStaff();
    cout << "\nNumber of bartenders: " << numBartender();
}


;
