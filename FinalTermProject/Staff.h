#ifndef STAFF_H_INCLUDED
#define STAFF_H_INCLUDED

#include <string>
#include <vector>
#include "Person.h"

/*
 *  ==========================================================
 * 		Staff Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	     	 */

class Staff: public Person // Declares that 'Staff' class implements 'Person' class
{
    public:
        /*      Constructor	        	*/
        Staff(string jobTitle, double hireCost);

        /*  	Accessor Methods	    	*/
        void setJobTitle(string jobTitle);
        void setHireCost(double hireCost);

        /*  	Mutator Methods	    	*/
        string getJobTitle();
        double getHireCost();
};

#endif // STAFF_H_INCLUDED
