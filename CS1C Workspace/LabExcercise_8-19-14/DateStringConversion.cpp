/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 ******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - DateStringConversion
 * -----------------------------------------------------------------------------
 * This function take in a string, and output the respective date in the format
 * as follows: January,
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		initialDate: Must be previously defined and is used reformat
 *
 * POST-CONDITIONS
 * 		Returns convertedDate
 * 		Returns a reformatted date
 *******************************************************************************/
string DateStringConversion(string initialDate) //IN - used to re-format date
{
	//D E C L A R A T I O N S
	ostringstream out;			//OUT - used to send segments of the date string
	string        convertedDate;//CALC & OUT - returns the reformatted date
	int           numMonth;     //CALC - holds the numerical version of the month
	int           numDay;       //CALC - holds the numerical version of the day
	int           numYear;      //CALC - holds the numerical version of the year

	//Converts parced sections of a string which is converted to an integer
	numMonth = atoi(initialDate.substr(0,2).c_str());
	numDay   = atoi(initialDate.substr(3,2).c_str());
	numYear  = atoi(initialDate.substr(6,4).c_str());

	/***************************************************************************
	 * FUNCTION
	 * -------------------------------------------------------------------------
	 * Error checks all of the numerical elements of the string
	 ***************************************************************************/

	//Chooses the correct
	/***************************************************************************
	 * FUNCTION ErrorCheckDate
	 * -------------------------------------------------------------------------
	 * This function error checks the month, day, and year. If any are incorrect
	 * format, it will return false and convertedString will be a space
	 ***************************************************************************/
	if(!ErrorCheckDate(numMonth, numDay, numYear))
	{	switch(numMonth)
		{
				case 1:  out << "January, ";
					 break;
				case 2:  out << "February, ";
					 break;
				case 3:  out << "March, ";
					 break;
				case 4:  out << "April, ";
					 break;
				case 5:  out << "May, ";
					 break;
				case 6:  out << "June, ";
					 break;
				case 7:  out << "July, ";
					break;
				case 8:  out << "August, ";
					break;
				case 9:  out << "September, ";
					 break;
				case 10: out << "October, ";
					 break;
				case 11: out << "November, ";
					 break;
				case 12: out << "December, ";
					 break;
				default: cout << "\nSomething terrible happened! :( ";
					 break;
		}
		out << numDay << " " << numYear;
		convertedDate = out.str();
	}
	else
	{
		convertedDate = " ";
	}

	return convertedDate;
}
