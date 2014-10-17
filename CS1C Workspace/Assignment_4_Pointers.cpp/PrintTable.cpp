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
 * FUNCTION PrintTable
 * ----------------------------------------------------------------------------
 * This PrintTable
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *	This function will print the table of the object
 *
 * POST-CONDITIONS
 *
 * 		RETURNS:
 *
 * 		returns an error checked integer
 ******************************************************************************/
void PrintTable(Candidate * pointer, const int SIZE)
{
	int index;

	PrintTableHeader();
	for(index = 0; index < SIZE; index++)
	{
		pointer[index].PrintAll();
		cout << endl;
	}

	cout << "\n\nTotal Votes: " << pointer[0].GetTotalVotes() << endl << endl;
	cout << "The winner is: "   << pointer[index-1].GetNameWinner()
		 << " with "            << pointer[index-1].GetGreatestVotes()
		 << " votes." 			<< endl;
}
