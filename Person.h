#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
    public:
        void setName(std::string name);
        std::string getName();
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
        Guest(std::string name, int age);
        void setAge(int age);
        void RSVP(bool coming);
        bool getRSVPStatus();
        int getAge();
};

class personList
{
    private:

        struct node{
            Person data;
            node* next;
        };

        node* head;
        node* curr;
        node* temp;
        node* tail;

    public:
        personList();
        void addNode(Person data);
        void deleteNode(std::string personName);
        void printList();
        void fragments();
};
#endif // PERSON_H
