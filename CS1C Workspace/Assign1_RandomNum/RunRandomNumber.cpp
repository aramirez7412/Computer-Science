/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#include "Header.h"
/*******************************************************************************
 * FUNCTION RunRandomNumber
 * -----------------------------------------------------------------------------
 * This function generates a random number and allows the user to choose from
 * a selection of different options that include summing the digits, reverse the
 * number, and triple the number.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		None
 *
 * POST-CONDITIONS
 * 		Outputs the greeting to the console
 *
 *	RETURNS: None
 *******************************************************************************/
 void RunRandomNumber()
 {

	//D E C L A R A T I O N S
	RandomNumClass number;		  //CALC & OUT - instance of the RandomNumClass
	 	 	 	 	 	 	 	  //			 instantiated and is used for
	 	 	 	 	 	 	 	  //			 output
	int 		   userInput;	  //IN & CALC -  used to determine which menu
	 	 	 	 	 	 	 	  //			 option to choose
	bool 		   continueLoop;  //CALC - used to determine when to end the loop


	//I N I T I A L I Z A T I O N S
	continueLoop = true;

	/***************************************************************************
	 * FUNCTION - Greeting
	 * -------------------------------------------------------------------------
	 * This function will output a greeting to the user. It will explain what
	 * the program will do
	 ***************************************************************************/
	Greeting();

	//Prompts the user to press enter
	cout <<  "\nPress enter to generate a random number!";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//Begin while
	while(continueLoop)
	{
		/***********************************************************************
		 * FUNCTION - OutputMenu
		 * ---------------------------------------------------------------------
		 * Outputs the menu option to the user
		 ***********************************************************************/
		OutputMenu();

		/***********************************************************************
		 * INPUT
		 * ---------------------------------------------------------------------
		 * User enters the menu option choice
		 ***********************************************************************/
		userInput = ErrorCheckInteger("\nPlease choose a menu option: ", 0, 5);

		//BEGIN Switch. To exit the user must input 0
		switch(userInput)
		{
			case 0: continueLoop = false;
				  break;
			case 1: cout << "\nThe random number generated: "
						 //Returns the random number
						 << number.GetRandomNumber() << endl;
				  break;
			case 2: cout << "\nTriple the random number: "
						 //Returns the tripled number
					     << number.GetTripledNumber() << endl;
				  break;
			case 3: cout << "\nThe sum of the digits of the random number: "
						 //Reutrns the digits summed
						 << number.GetSumDigits()     << endl;
				  break;
			case 4: cout << "\nThe random number reversed: "
						 //Returns the number reversed
					     << number.GetNumberReversed()<< endl;
			      break;
			case 5: cout << "\nOne moment please..."<< endl;
					//Runs the random number function over again
					RunRandomNumber();
				  break;
			default: "\n\nSomething terrible happened! ): \n\n";
		}
	}

 }
