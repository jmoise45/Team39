#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
using namespace std;

class Person
{
    public:
        void setName(std::string &name);
        std::string getName();
        int getAge();
    protected:
        std::string name;
        int age;
        std::string jobTitle;
        double hireCost;
        bool isGoing;
};

class Guest: public Person
{
    public:
        Guest(std::string &name, int &age);
        void setAge(int &age);
        void RSVP(bool &coming);
        bool getRSVPStatus();
        int getAge();
};

class personList
{
    private:
        vector<Person*> personlist;

    public:
        personList();
        void addPerson(Person *person);
        void deletePerson(std::string personName);
        void printList();
        unsigned int getSize();
};

#endif // PERSON_H
