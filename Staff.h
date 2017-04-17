#ifndef STAFF_H_INCLUDED
#define STAFF_H_INCLUDED

#include <string>
#include <vector>

/*
 *  ==========================================================
 * 		Staff Class Declarations
 * ==========================================================
 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 	 */

class Staff: public Person // Declares that 'Staff' implements 'Person'
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
