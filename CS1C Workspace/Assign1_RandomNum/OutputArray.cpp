/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#include "Header.h"
/*******************************************************************************
 * FUNCTION OutputArray
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
  void OutputArrayToCon(RandomNumClass array[], //IN & OUT - used for output
		 	 	 	    const int      SIZE)    //CALC - used for the loop
 {
	  //D E C L A R A T I O N S
	 int index; //CALC - used to traverse through the array

	 for(index = 0; index < SIZE; index++)
	 {
		 //OUTPUT
		 cout << "Element #" << index+1 << ": "
			  << array[index].GetRandomNumber();
		 cout << endl;

	 }
 }
