/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 8/26/14
 * LAB #2 : C-String concatenation
 ******************************************************************************/

#include "Header.h"

/*******************************************************************************
 * FUNCTION MyStrCat
 * -----------------------------------------------------------------------------
 * This function will concatenate two strings. The first parameter, destination,
 * is the base c-string while source is the c-string being added
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		destination : Destination must be previously defined and is used in
 * 					  concatenation. This will be the base string that will take
 * 					  on an additional c-string
 * 		source	    : Source must be previously defined and is used in
 * 					  concatenation and is the string to be added too the base
 * 					  string
 *******************************************************************************/

void MyStrCat(char       destination[], //CALC - used to concatenate
			  const char source[])      //CALC - used to concatenate
{
	//D E C L A R A T I O N S
	unsigned short int  sourceIndex; //CALC - used to increment index of
									 //       source string
	unsigned short int  destIndex;   //CALC - used to increment index of
									 //       destination string


	//I N I T I A L I Z A T I O N S
	destIndex   = 0;
	sourceIndex = 0;

	/***********************
	 * P R O C E S S I N G *
	 ***********************/

	//Begin while
	while(destination[destIndex] != '\0')
	{
		//increment index to traverse the array
		destIndex++;
	}//End while

	//Begin while
	while(source[sourceIndex] != '\0')
	{
		//Stores the respective character from source into the next free space
		// in destination
		destination[destIndex] = source[sourceIndex];

		//Increment both indices to traverse the array
		destIndex++;
		sourceIndex++;

	}

}
