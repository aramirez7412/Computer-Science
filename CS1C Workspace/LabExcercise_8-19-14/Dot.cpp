/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 *******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - Dot
 * -----------------------------------------------------------------------------
 * This function return the dot product of two vectors
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		Typedef double vec3 must be previously
 * 		defined in the header file
 *
 * POST-CONDITIONS
 * 		Returns dot product of two vectors
 *******************************************************************************/

double Dot(const vec3 VECTOR_ONE, //CALC - used to calculate the sum
		   const vec3 VECTOR_TWO, //CALC - used to calculate the sum
		   double dotProduct)     //CALC & OUT - used to store product
{
	//D E C L A R A T I O N S
	int index; //CALC - used for the For loop

	//BEGIN For
	for(index = 0; index < vectorSize; index++)
	{
		dotProduct = dotProduct + ( VECTOR_ONE[index] * VECTOR_TWO[index]);
	}//END For

	return dotProduct;
}


