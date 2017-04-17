#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

using namespace std;

/*
 *  ==========================================================
 * 		Person Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
class Person
{
    public:
        /* 	    Mutator Methods 	    */
        void setName(std::string &name);
    
        /* 	    Accessor Methods    	*/
        std::string getName();
        int getAge();
    
    protected: // indicates that the below data are only accesible by this class or those that implement it
        std::string name;
        int age;
        std::string jobTitle;
        double hireCost;
        bool isGoing;
};


/*
 *  ==========================================================
 * 		Guest Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
class Guest: public Person // Declares that 'Guest' class implements 'Person' class
{
    public:
        /*      Constructor	        	*/
        Guest(std::string &name, int &age);
    
        /*  	Mutator Methods	    	*/
        void setAge(int &age);
        
        /*      Useful Methods          */
        void RSVP(bool &coming);
    
        /*  	Accessor Methods	   	*/
        bool getRSVPStatus();
        int getAge();
    
        
};


/*
 *  ==========================================================
 * 		PersonList Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */
class personList
{
    private:
        vector<Person*> personlist;

    public:
        /*      Constructor	        	*/
        personList();
    
        /*      Useful Methods          */
        void addPerson(Person *person);
        void deletePerson(std::string personName);
        void printList();
     
        /*  	Accessor Methods	   	*/
        unsigned int getSize();
};

#endif // PERSON_H
