/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 8/26/14
 * LAB #2 : C-String concatenation
 *******************************************************************************/
#include "Header.h"

/******************************************************************************
 * C-String concatenation
 * ----------------------------------------------------------------------------
 * This program will imitate the strcat() function and concatenate two -strings.
 * ------------------------------------------------------------------------------
 * INPUT:
 *
 * 		None
 * OUTPUT
 * 		destination: This array is output to show concatenation taking place
 *******************************************************************************/

int main()
{
	//D E C L A R A T I O N S
	char source[]         = "World"; //CALC - string that will be concatenated
	char destination[30]  = "Hey ";  //CALC - base c-string that will be be added
								     //       too

	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header to the console
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 2, "C-string concatenation", 'L');

	cout << "\nDestination C-String: " << destination;
	cout << "\nSource C-String     : " << source;

	/***************************************************************************
	 * FUNCTION MyStrCat
	 * -------------------------------------------------------------------------
	 * This function will concatenate two c-strings.
	 ***************************************************************************/
	MyStrCat(destination, source);

	cout << "\n\nConcatenated string: " << destination;

	return 0;
}
