/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 ******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - Add
 * -----------------------------------------------------------------------------
 * This function will add two vectors
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		Typedef double vec3 must be previously
 * 		defined in the header file
 *
 * POST-CONDITIONS
 * 		Returns sum of two vectors
 *******************************************************************************/
void Add(const vec3 VECTOR_1,  //CALC & INPUT - used to calculate sum
		 const vec3 VECTOR_2,  //CALC & INPUT - used to calculate sum
		       vec3 vectorSum) //CALC & IN & OUT - stores sum

{
	//D E C L A R A T I O N S

	int index;

	//BEGIN For Loop
	for(index = 0; index < vectorSize; index++)
	{
		vectorSum[index] += (VECTOR_1[index] + VECTOR_2[index]);
	}

}
