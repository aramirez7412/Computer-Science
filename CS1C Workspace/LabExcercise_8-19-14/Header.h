/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 ******************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <string>
#include <iostream>
#include <iomanip>
#include <ostream>
#include <sstream>
#include <stdlib.h>
#include <limits>

using namespace std;

//***C O N S T A N T S***
const int vectorSize = 3; //CALC - used to define vector size

//***T Y P E D E F S***
typedef double vec3[vectorSize];
typedef double mat3[vectorSize][vectorSize];


/*******************************************************************************
 * Function Add
 * -----------------------------------------------------------------------------
 * This function adds two vectors
 *
 * RETURNS: vectorSum
 *******************************************************************************/
void Add(const vec3 VECTOR_1,  //CALC & INPUT - used to
						       //               calc sum
		 const vec3 VECTOR_2,  //CALC & INPUT - used to
		 	 	 	 	       //               calc sum
		       vec3 vectorSum);//CALC & IN & OUT - stores
						       //                  sum
/*******************************************************************************
 * Function Dot
 * -----------------------------------------------------------------------------
 * This function returns the dot product of the two arrays
 *******************************************************************************/
double Dot(const vec3 VECTOR_ONE, //CALC - used to calculate the sum
		   const vec3 VECTOR_TWO, //CALC - used to calculate the sum
		   double     dotProduct);//CALC & OUT - used to store product
/*******************************************************************************
 * Function ThreeByThreeMatrix
 * -----------------------------------------------------------------------------
 * This function add
 *******************************************************************************/

void ThreeByThreeMatrixSum(const mat3 MATRIX_ONE,//CALC - used to traverse through
						   const mat3 MATRIX_TWO,//CALC - used to traverse through
						      mat3 matrixThree); //CALC & OUT - used to hold the
											     //             sum of the two
											     //			  matrices
/*******************************************************************************
 * Function OutputMatrix
 * -----------------------------------------------------------------------------
 * This function outputs a matrix
 *
 * RETURNS outputs a matrix
 *******************************************************************************/
void OutputMatrix(const mat3   MATRIX, //IN & OUT - used for output
				  const string PROMPT); //IN & OUT - used for output
/*******************************************************************************
 * Function OutputVector
 * -----------------------------------------------------------------------------
 *
 *******************************************************************************/
void OutputVector(const vec3   VECTOR, //IN & OUT - used for output
				        string title); //IN & OUT - used for output

/*******************************************************************************
 * Function DateStringConversion
 * -----------------------------------------------------------------------------
 *
 *******************************************************************************/
string DateStringConversion(string initialDate); //CALC - used to reformat

/*******************************************************************************
 * Function ErrorCheck
 * -----------------------------------------------------------------------------
 * This function error checks the month, day, and year for invalid input
 *******************************************************************************/
bool ErrorCheckDate(int month, //IN - used to error check
				    int day,   //IN - used to error check
				    int year); //IN - used to error check
/*******************************************************************************
 * FUNCTION FillVector
 * -----------------------------------------------------------------------------
 * This function will fill a vector and return it back to the calling function
 *
 * RETURNS: vector
 *******************************************************************************/
 void FillVector(vec3 vector,		  //CALC & OUT - used to be propagated
		 	 	 const string PROMPT);//OUT - used to prompt the user

 void FillMatrix(mat3         matrix, //CALC & OUT - used to fill matrix
 		 	 	 const string PROMPT);//OUT - used to prompt user
#endif
