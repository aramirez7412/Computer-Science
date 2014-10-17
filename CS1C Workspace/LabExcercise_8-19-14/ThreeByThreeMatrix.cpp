/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 *******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - ThreeByThreeMatrixSum
 * -----------------------------------------------------------------------------
 * This function return the sum of a three by three matrix
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		Typedef double vec3 must be previously
 * 		defined in the header file
 *
 * POST-CONDITIONS
 * 		Returns dot product of two vectors
 *******************************************************************************/

void ThreeByThreeMatrixSum(const mat3 MATRIX_ONE, //CALC - used to traverse through
						   const mat3 MATRIX_TWO, //CALC - used to traverse through
						         mat3 matrixThree)//CALC & OUT - used to hold the
											      //             sum of the two
											      //			  matrices
{
	//I D E N T I F I E R S
	int index;		//CALC - used for the counter for the primary for loop
	int innerIndex; //CALC - used for the counter for the inner for loop

	//BEGIN For
	for(index = 0; index < 3; index++)
	{
		//BEGIN innerFor
		for(innerIndex = 0; innerIndex < 3; innerIndex++)
		{
			matrixThree[index][innerIndex] += MATRIX_ONE[index][innerIndex] +
											   MATRIX_TWO[index][innerIndex];
		}//BEGUN innerFor
	}//BEGIN For
}
