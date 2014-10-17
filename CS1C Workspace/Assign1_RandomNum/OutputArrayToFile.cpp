/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#include "Header.h"
/*******************************************************************************
 * FUNCTION OutputArrayToFile
 * -----------------------------------------------------------------------------
 * This function outputs an array of random number objects
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		None
 *
 * POST-CONDITIONS
 * 		Outputs the array to either the console or a text file
 *
 *	RETURNS: None
 *******************************************************************************/
void OutputArrayToFile(ostream&       out,    //OUT - used to output
  		 	 	  	   RandomNumClass array[],//OUT - used for output
  		 	 	  	   const int      SIZE)  //CALC - used for loop
 {
	 //D E C L A R A T I O N S
	 int index; //CALC - used to traverse the array

	 for(index = 0; index < SIZE; index++)
	 {
		 //Outputs to text file
		 out << array[index].GetRandomNumber();
		 //Ensures that there is no extra line output to the output file
		 if(index < SIZE-1)
		{
			 out << endl;
		}
	 }
 }
