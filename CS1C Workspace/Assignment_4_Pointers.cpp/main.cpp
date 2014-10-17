/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/

#include "Header.h"
#include "CandidateClass.h"

/******************************************************************************
 * Student Class
 * ----------------------------------------------------------------------------
 * This program contains two classes that represent a student and a CS1C student
 * ------------------------------------------------------------------------------
 * INPUT:
 * 	NONE
 *
 * OUTPUT:
 *
 *  Content of Object is output
 *******************************************************************************/

int main()
{
	//D E C L A R A T I O N S
	Candidate*    candidatePointer;     //CALC & OUT & IN - used to create array
	int           amountOfCandidates;   //IN & CALC - user input and used to
										//			  create the array
	bool          proceedDoWhile;       //CALC - used as seninel value for
										//		 do while
	string        checkCandidateAmount; //OUT - used to prompt user
	ostringstream out;					//OUT - used to create string



	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 4, "Election", 'A');

	/***************************************************************************
	 * FUNCTION OutputGreeting
	 * -------------------------------------------------------------------------
	 * This function will output the  greeting to the console
	 ***************************************************************************/
	OutputGreeting(cout);

	/***************************************************************************
	 * P R O C E S S I N G
	 * -------------------------------------------------------------------------
	 * In the following segment of code, the user is prompted for the amount
	 * of canidates in the election.
	 ***************************************************************************/
	//Begin Do While
	do
	{
		//ProceedDoWHile is initialized
		proceedDoWhile      = false;

		/***********************************************************************
		 * FUNCTION ErrorCheckInput
		 * ---------------------------------------------------------------------
		 * This function will error check the users input
		 ***********************************************************************/
		amountOfCandidates  = ErrorCheckInput(0, 50, "***Please enter a NUMBER***",
				     "***Invalid Input please enter a number between 0 & 40000",
					 "Please enter the amount of candidates in the election: ");

		out << "Is " << amountOfCandidates
		    << " the correct amount of candidates? (Y/N): ";
		checkCandidateAmount = out.str();

		out.str("");

		//Checks if the user wants to stick with the amount of candidates
		if((ErrorCheckCharInput('Y', 'N', checkCandidateAmount)) == 'N')
		{
			proceedDoWhile = true;
		}


	}while(proceedDoWhile);//End Do While

	//Creates a dynamic array with the
	candidatePointer = new Candidate[amountOfCandidates];

	cout << "Thank you. Next, you must enter the \n full name of each candidate "
			"followed \nby the amounts of votes received\n\n";

	/***************************************************************************
	 * I N P U T
	 * -------------------------------------------------------------------------
	 * PropagateArray() this function will fill each element of the array
	 * SetPrecentage will calculate the percentage of each object in the array.	 *
	 ****************************************************************************/
	PropagateArray(candidatePointer, amountOfCandidates);
	SetPercentageFunction(candidatePointer, amountOfCandidates);


	/***************************************************************************
	 * O U T P U T
	 * -------------------------------------------------------------------------
	 * PrintTable() will output all of the objects in the array
	 ***************************************************************************/
	PrintTable(candidatePointer, amountOfCandidates);

	return 0;
}
