/*******************************************************************************
 * Name     : Anthony Ramirez
 * Lab      : Exercise
 * Class    : CS1C
 * Section  : T/TH 6-9
 * Due Date : 8/19/14
 *******************************************************************************/
#include "Header.h"
/*******************************************************************************
 * Lab Exercise 1
 * -----------------------------------------------------------------------------
 * This exercise utilizes Typedefs, functional
 * programming and arrays.
 * -----------------------------------------------------------------------------
 * Input:
 * None
 *
 * Output
 *  vectorOne   : Is output to the console
 *  vectorTwo   : Is output to the console
 *  vectorOfSums: Is output to the console
 *  matrixNumOne: Is output to the console
 *  matrixNumTwo: Is output to the console
 *  sumMatrix   : Is output to the console
 *
 *******************************************************************************/
int main()
{
	//I D E N T I F I E R S
	vec3 vectorOne    = {0};    //CALC & OUT - used to find sum
	vec3 vectorTwo    = {0};    //CALC & OUT - used to find sum
	vec3 vectorOfSums =	{0};    //CALC & OUT - used to store sum and then output
	mat3 matrixNumOne = {0};	//CALC & OUT - used to find sum
	mat3 matrixNumTwo = {0};    //CALC & OUT - used to find sum
	mat3 sumMatrix    = {0};    //CALC & OUT - used to store sum and then output

	double dotProduct;			//CALC & OUT - used to store the dot product
	string convertedString;     //CALC & OUT - used to store the converted string
	string vectorOnePrompt =	//OUT - used to prompt user for input for vector
    "Please enter 3 digits for vector one\n"
    "(each digit followed by a space \"_\"):";
	string vectorTwoPrompt =    //OUT - used to prompt user for input for vector
    "Please enter 3 digits for vector two\n("
    "each digit followed by a space \"_\"):";
	string matrixOnePrompt =    //OUT - used to prompt user for input for matrix
	"Please enter 9 digits for vector one\n"
	"(each digit followed by a space \" \"):";
	string matrixTwoPrompt =	//OUT - used to prompt user for input for matrix
	"Please enter 9 digits for vector two\n"
	"(each digit followed by a space \" \"):";
	string userInputDate;       //IN & CALC - used to reformat
	bool okayToContinue;        //CALC - used in do while loop for convertedString

	//I N I T I A L I Z A T I O N S
	dotProduct = 0;
	okayToContinue = true;

	/***************************************************************************
	 * FUNCTION FillVector
	 * -------------------------------------------------------------------------
	 * This function fills the vectors
	 ***************************************************************************/
	 FillVector(vectorOne, vectorOnePrompt);
	 FillVector(vectorTwo, vectorTwoPrompt);
	 cout << endl << endl;

	/***************************************************************************
	 * FUNCTION Add
	 * -------------------------------------------------------------------------
	 * Adds two vectors and stores sum in a separate array
	 ***************************************************************************/
	Add(vectorOne, vectorTwo, vectorOfSums);

    //Output
	cout << "Sum of two vectors" << endl;

	/***************************************************************************
	 * FUNCTION/OUTPUT OutputVector
	 * -------------------------------------------------------------------------
	 * This function will output the contents of vector
	 ***************************************************************************/
	OutputVector(vectorOne, "Vector 1");
	OutputVector(vectorTwo, "Vector 2");
	OutputVector(vectorOfSums, "Sum of Vectors");

	/***************************************************************************
	 * FUNCTION Dot
	 * -------------------------------------------------------------------------
	 * This function finds dot product of two arrays and returns the product
	 ***************************************************************************/
	dotProduct = Dot(vectorOne, vectorTwo, dotProduct);

	//Output
	cout << endl       <<  "The dot product of the two vectors is "
		 << dotProduct << endl << endl;



	/***************************************************************************
	 * INPUT FillMatrix
	 * -------------------------------------------------------------------------
	 * This function will fill the matrices
	 ***************************************************************************/
	FillMatrix(matrixNumOne, matrixOnePrompt);
	FillMatrix(matrixNumTwo, matrixTwoPrompt);

	/***************************************************************************
	 * FUNCTION ThreeByThreeMatrix
	 * -------------------------------------------------------------------------
	 * This function finds the sum of two matrices
	 ***************************************************************************/
	ThreeByThreeMatrixSum(matrixNumOne, matrixNumTwo, sumMatrix);

	/***************************************************************************
	 * OUTPUT
	 * -------------------------------------------------------------------------
	 * This segment will output both of the matrices being added as well as the
	 * matrix containing the sum
	 ***************************************************************************/
	cout << endl;
	cout << setw(29) << "Sum Matrix";
	cout << endl     << setw(29) << "----------" << endl;
	cout << setw(29) <<  "The sum of"            << endl;
	OutputMatrix(matrixNumOne, "Matrix #1");
	cout << endl     << setw(27) << " and "      << endl;
	OutputMatrix(matrixNumTwo, "Matrix #2");
	cout << endl     << setw(27) << " is "       << endl;
	OutputMatrix(sumMatrix, "Sum of Matrices");

	/***************************************************************************
	 * FUNCTION DateStringCoversion
	 * -------------------------------------------------------------------------
	 * Converts a string to a differently formatted string
	 ***************************************************************************/
	//Prompts user for a string that is to be converted
	do
	{
		//Prompts the user to enter a date
		cout << "\nPlease enter a date (\"mm/dd/yyyy\"): ";
	    getline(cin, userInputDate);


		cout << endl;
		//Converts the string to a different format and returns a space if the
		//format is incorrect
		convertedString = DateStringConversion(userInputDate);

		//Outputs the converted string
		if(convertedString != " ")
		{
			cout << "The date is " << convertedString;
			okayToContinue = false;
		}
		else
		{
			cout << "****Invalid date, "
					"enter the date in an acceptable format****";
		}
	}while(okayToContinue);

	return 0;

}
