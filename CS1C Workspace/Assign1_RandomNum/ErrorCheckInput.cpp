/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
/*******************************************************************************
 * FUNCTION ErrorCheckInput
 * -----------------------------------------------------------------------------
 * This function checks user input
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		prompt: Must be previously defined and used for output
 * 		min   : Must be previously defined and used for range
 * 		max   : Must be previously defined and used for range
 *
 * POST-CONDITIONS
 * 		Returns an error checked integer
 *
 *	RETURNS: None
 *******************************************************************************/
#include "Header.h"

int ErrorCheckInteger(string prompt, //IN & OUT - used to prompt the user
					  int    min,    //IN & CALC - used to set the ranges
					  int    max)    //IN & CALC - used to set the ranges
{
	//D E C L A R A T I O N S
	bool          invalid;		  //CALC - used for sentinel value in while loop
	int           userInput;      //IN & CALC & OUT- used to error check
	int 		  width;		  //OUT - used to set output
	ostringstream out;			  //OUT - used output number into the ostream
	string        errorMessageOne;//OUT - used to output to the user if they
								  //      don't enter a number
	string        errorMessageTwo;//OUT - used to output to the user if the input
							      //      is out of range

	//I N I T I A L I Z A T I O N S
	invalid = true;

	//BEGIN While
	do
	{
		cout << endl << prompt;
		//Checks if the input buffer fell into a fail state
		if(!(cin >> userInput))
		{
			cin.clear();

			cout << "\n\n***Invalid entry. Please enter a NUMBER****\n\n";
		}
		//Checks to see if the input is within a range
		else if(userInput < min || userInput > max)
		{
			out << "***" << userInput << " is an invalid entry";
			errorMessageOne = out.str();

			out.str("");

			out << "***Please enter a number between " << min << " and " << max;

			errorMessageTwo = out.str();

			out.str("");

			//Used for formatting
			if(errorMessageOne.length() < errorMessageTwo.length())
			{
				//Assigns the length of the error message
				width = errorMessageTwo.length();
			}
			else
			{
				//Assigns the length of the error message
				width = errorMessageOne.length();
			}

			//Outputs error message
			cout << left;
			cout << setw(width) << endl << endl << errorMessageOne << "***";
			cout << setw(width) << endl << endl << errorMessageTwo << "***";
		}
		else
		{
			invalid = false;

		}

		cin.ignore(numeric_limits<streamsize>::max(),'\n');

	}while(invalid);

	return userInput;
}
