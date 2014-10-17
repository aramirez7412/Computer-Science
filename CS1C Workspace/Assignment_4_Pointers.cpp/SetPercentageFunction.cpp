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
 * FUNCTION SetPercentageFunction
 * ----------------------------------------------------------------------------
 * This function will set the percentages of all of the
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	Candidate Class must be previously defined
 *
 *	pointer: Must be previously defined
 *	SIZE   : Must be previously defined
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: none
 *
 ******************************************************************************/
void SetPercentageFunction(Candidate * pointer,
						   const int   SIZE)
{
	//D E C L A R A T I O N S
	int index;


	for(index = 0; index < SIZE; index++)
	{
		pointer[index].CalculatePercentage();
	}
}


