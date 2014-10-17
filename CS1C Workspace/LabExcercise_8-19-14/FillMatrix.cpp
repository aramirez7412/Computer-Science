/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 ******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * FUNCTION - FillMatrix
 * -----------------------------------------------------------------------------
 * This function will fill a matrix
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		mat3                 : Typedef must be previously defined in header file
 * 		"typedef double mat3[3][3];"
 * 		matrix (of type mat3): must be created in calling function
 *
 * POST-CONDITIONS
 * 		Returns matrix
 *
 *******************************************************************************/
 void FillMatrix(mat3         matrix, //CALC & OUT - used to fill matrix
		 	 	 const string PROMPT) //OUT - used to prompt user
 {
	 //Prompts the user for input
	 cout << PROMPT;
	 //Extracts input from keyboard and
	 cin  >> matrix[0][0]
	      >> matrix[0][1]
	      >> matrix[0][2]
	      >> matrix[1][0]
	      >> matrix[1][1]
	      >> matrix[1][2]
	      >> matrix[2][0]
	      >> matrix[2][1]
	      >> matrix[2][2];
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
 }
