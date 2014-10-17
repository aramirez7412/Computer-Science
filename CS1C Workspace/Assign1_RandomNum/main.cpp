/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#include "Header.h"

/*******************************************************************************
 * Generate Random Number
 * -----------------------------------------------------------------------------
 * This program will generate a random number and allow the user to reverse the
 * number, triple the number, and sum the digits. After the menu, the user will
 * choose an output file to print an array. They will then be allowed to
 * propagate an array from
 * -----------------------------------------------------------------------------
 * INPUT:
 *		string outFile: Output file specified by the user
 *
 * OUTPUT:
 *
 *
 *
 *******************************************************************************/
int main()
{
	//Declares time as a seed
	srand(time(NULL));

	//C O N S T A N T S
	const int      SIZE = 10;			//CALC - used to declare array size

	//D E C L A R A T I O N S
	string         out;					//OUT - used to determine output file
	ofstream       outFile;				//OUT - used to create a stream to the
										//		output file
	RandomNumClass randomArray[SIZE];   //CALC & OUT - random Array used to output
	RandomNumClass inFileArray[SIZE] =  //CALC & OUT & IN - blank array that is
										//                  propagated from an
										//				    input file
   {RandomNumClass(0,0,0,0)};

	/***************************************************************************
	 * FUNCTION RunRandomNumber
	 * -------------------------------------------------------------------------
	 * This function outputs a menu for the user and allows them to reverse
	 * digits of a random number, sum its digits, and triple the value
	 ***************************************************************************/
	RunRandomNumber();

	//OUTPUT
	cout << "\nHello! The next step is to generate an array of 10 randomNumbers."
		 << "\nThe numbers are conveniently already generated. They will be sent"
		 << "\nto the console by default. You must now specify an output file"
		 << "\nto read from.";

	//PROMPTS the user to enter a file name
	cout << "\n\nWhat output file would you like to use?: ";
	getline(cin, out);

	//Opens the outputfile
	outFile.open(out.c_str());

	/***************************************************************************
	 * FUNCTION OutputArrayToCon
	 * -------------------------------------------------------------------------
	 * Outputs the array to console
	 ***************************************************************************/
	OutputArrayToCon(randomArray, SIZE);

	/***************************************************************************
	 * FUNCTION InsertionSort
	 * -------------------------------------------------------------------------
	 * Sorts the array
	 ***************************************************************************/
	InsertionSort(randomArray, SIZE);

	//Output
	cout << "\nHere is the array sorted using an insertion sort\n";

	/***************************************************************************
	 * FUNCTION OutputArrayToCon
	 * -------------------------------------------------------------------------
	 * Outputs the array to console (sorted array)
	 ***************************************************************************/
	OutputArrayToCon(randomArray,SIZE);

	/***************************************************************************
	 * FUNCTION OutputArrayToFile
	 * -------------------------------------------------------------------------
	 * Outputs the array to the outfile specified by the user
	 ***************************************************************************/
	OutputArrayToFile(outFile, randomArray, SIZE);

	cout << "\nThanks! The array was output to both the console and the specified "
		 << "\noutput file";

	//Close the output file
	outFile.close();

	//Output
	cout << "\nNext, another array will read in the random numbers that were sent"
		 << " \nto the output file. \nPlease specify the output file that you used: ";

	/***************************************************************************
	 * FUNCTION PropagateArrayFromFile
	 * -------------------------------------------------------------------------
	 * Propagates the array from an input file
	 ***************************************************************************/
	PropagateArrayFromFile(inFileArray, SIZE);

	cout << "\nHere is the array that was read from the output file!\n";

	/***************************************************************************
	 * FUNCTION OutputArrayToCon
	 * -------------------------------------------------------------------------
	 * Outputs the array to console (sorted array)
	 ***************************************************************************/
	OutputArrayToCon(inFileArray, SIZE);

	/***************************************************************************
	 * FUNCTION InsertionSort
	 * -------------------------------------------------------------------------
	 * Sorts the array
	 ***************************************************************************/
	InsertionSort(randomArray, SIZE);

	return 0;
}
