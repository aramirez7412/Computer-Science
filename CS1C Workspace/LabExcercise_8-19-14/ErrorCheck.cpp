/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 ******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - ErrorCheck
 * -----------------------------------------------------------------------------
 * This function will error check the conversions
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		month: Must be previously defined and used for error checking
 * 		day  : Must be previously defined and used for error checking
 * 		year : Must be previously defined and used for error checking
 *
 * POST-CONDITIONS
 * 		Returns boolean of the status of the error check
 *******************************************************************************/
bool ErrorCheckDate(int month, //IN - used to error check
					int day,   //IN - used to error check
					int year)  //IN - used to error check
{
	//D E C L A R A T I O N S
	bool invalid;

	invalid = false;

	//BEGIN If
	if((month  < 1 || month   > 12) ||
		 (day  < 0 || day     > 31) ||
		 (year < 1800 || year > 2015))
	{
		invalid = true;
	}//END If

	return invalid;
}
