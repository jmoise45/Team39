#ifndef STAFF_H_INCLUDED
#define STAFF_H_INCLUDED
#include <string>
#include <vector>
class Staff: public Person {
public:
    Staff(string jobTitle, double hireCost);
    void setJobTitle(string jobTitle);
    void setHireCost(double hireCost);
    string getJobTitle();
    double getHireCost();
};

#endif // STAFF_H_INCLUDED
