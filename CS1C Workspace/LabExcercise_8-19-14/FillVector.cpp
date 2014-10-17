/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 ******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - FillVector
 * -----------------------------------------------------------------------------
 * This function will fill a vector
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		vec3: Must be previously defined typedef
 *
 * POST-CONDITIONS
 * 		Returns a filled vector.
 *******************************************************************************/
 void FillVector(vec3 vector,		  //CALC & OUT - used to be propagated
		 	 	 const string PROMPT) //OUT - used to prompt the user

 {
	 cout << PROMPT;
	 cin  >> vector[0] >> vector[1] >> vector[2];
	 cin.ignore(numeric_limits<streamsize>::max(), '\n');

 }
