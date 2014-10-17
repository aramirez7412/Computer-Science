/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 ******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - OutputVectors
 * -----------------------------------------------------------------------------
 * This function will output two vectors
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 		vec3 typedef must be previously defined
 * 		VECTORS: Must be previously defined
 * 		title  : Must be previously defined
 *
 * POST-CONDITIONS
 * 		Outputs a vector
 *
 ********************************************************************************/
void OutputVector(const vec3   VECTOR, //IN & OUT - used for output
				        string title)  //IN & OUT - used for output
{
	cout << title <<  endl;
	cout << "("   << VECTOR[0] << ", "
		 << VECTOR[1]          << ", "
		 << VECTOR[2]          << ")";
	cout << endl;

}
