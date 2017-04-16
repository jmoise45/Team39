#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Staff: public Person {
public:
    Staff(string name, int age, string jobTitle, double hireCost);
    void setAge(int age);
    void setJobTitle(string jobTitle);
    void setHireCost(double hireCost);
    int getAge();
    string getJobTitle();
    double getHireCost();
};

//Staff methods

Staff::Staff(string name, int age, string jobTitle, double hireCost){
    this->age = age;
    this->name = name;
    this->jobTitle = jobTitle;
    this->hireCost = hireCost;
}

void Staff::setAge(int age) {
    this->age = age;
}

void Staff::setJobTitle(string jobTitle) {
    this->jobTitle = jobTitle;
}

void Staff::setHireCost(double hireCost) {
    this->hireCost = hireCost;
}

int Staff::getAge() {
    return age;
}

string Staff::getJobTitle() {
    return jobTitle;
}

double Staff::getHireCost() {
    return hireCost;
}

