/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 *******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - OutputMatrix
 * -----------------------------------------------------------------------------
 * This function will output a matrix
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		mat3 typedef must be previously defined in header file
 *		MATRIX : must be previously defined
 *		PROMPT : must be previously defined
 *
 * POST-CONDITIONS
 * 		Outputs a matrix
 *******************************************************************************/
void OutputMatrix(const mat3   MATRIX, //IN & OUT - used for output
				  const string  PROMPT)//IN & OUT - used for output
{
	//BEGIN for
	for(int index = 0; index < 3; index++)
	{
		cout << setw(15) << " ";
		//BEGIN innerFor
		for(int innerIndex = 0; innerIndex < 3; innerIndex++)
		{
			cout << setw(5) << MATRIX[index][innerIndex];
		}

		cout << endl;
	}
}
