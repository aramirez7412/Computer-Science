/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/

#include "Header.h"

/*******************************************************************************
 * FUNCTION OutputGreeting
 * ----------------------------------------------------------------------------
 * This function will output the greeting to the console or a text file
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 	 None specified
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: none
 *
 * 		Outputs the greeting to the the console or file
 ******************************************************************************/
void OutputGreeting(ostream& out)
{
	out << "Welcome to the Election Calculation Software. \n";
    out << "To continue you must enter the amount of      \n";
    out << "candidates in the election. The percentage of \n";
    out << "votes each candidate received will be output  \n";
    out << endl;
}
