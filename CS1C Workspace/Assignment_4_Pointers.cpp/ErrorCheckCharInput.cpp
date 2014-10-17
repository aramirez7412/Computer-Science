/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION ErrorCheckCharInput
 * ----------------------------------------------------------------------------
 * This function will error check char input
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *	checkOne: Must be previously defined and used to check input against
 *	checkTwo: Must be previously defined and used to check input against
 *	prompt  : Must be previously defined and used to prompt the user for input *
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: char
 *
 * 		returns an error checked integer
 ******************************************************************************/
char ErrorCheckCharInput(char   checkOne, //CALC - used for error check
		                 char   checkTwo, //CALC - used for error check
		                 string prompt)   //OUT - used to prompt the user
{
	//D E C L A R A T I O N S
	bool proceed; 	//CALC used as sentinel value for do-while loop
	char userInput; //IN - used to errorCheck


	do
	{
		//Initializes proceed
		proceed = false;

		//Outputs prompt to the user
		cout << prompt;
		cin.get(userInput);

		//capitalizes user input
		userInput = toupper(userInput);

		//Checks user input for value of checkOne and checkTwo
		if(userInput != checkOne && userInput != checkTwo)
		{
			cout << "\n***Invalid input. Enter " << checkOne << " or " << checkTwo
				 << "***\n";
			proceed = true;
		}

		//Clears the console stream
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << endl;
	}while(proceed);

	return userInput;
}


