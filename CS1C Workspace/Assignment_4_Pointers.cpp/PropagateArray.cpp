/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/
#include "Header.h"
#include "CandidateClass.h"

/*******************************************************************************
 * FUNCTION PropagateArray
 * ----------------------------------------------------------------------------
 * This function will propagate an array for the candidate class
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: none
 *

 ******************************************************************************/
void PropagateArray(Candidate * pointer, const int SIZE)
{
	//D E C L A R A T I O N S
	int    width;
	string newName;
	long   votes;

	//I N I T I A L I Z A T I O N S
	width = 43;

	for(int index = 0; index < SIZE; index++)
	{
		cout << setw(width) << "Please enter the name of the candidate: ";
		getline(cin, newName);
		pointer[index].SetName(newName);

		votes = ErrorCheckInput(0, 50000, "***Please ent.er a NUMBER***",
				       "***Please enter a NUMBER between 0 & 50000***",
				       "Please enter the amount of votes received: ");
		pointer[index].SetVotesReceived(votes);


	}


}
