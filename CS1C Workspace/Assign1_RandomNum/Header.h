/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

//P R E - P R O C E S S O R_D I R E C T I V E S
#include <iostream>
#include <limits>
#include <sstream>
#include <ostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <fstream>
#include "RandomNumberNameSpace.h"


//N A M E_S P A C E S
using namespace std;
using namespace RandomNumber;


/*******************************************************************************
 * FUNCTION ErrorCheckInteger
 * -----------------------------------------------------------------------------
 * This function prompts the user for integral input, checks the input and
 * returns it to the calling function
 *
 * RETURNS: UserInput
 ******************************************************************************/
int ErrorCheckInteger(string prompt, //IN & OUT - used to prompt the user
					  int    min,    //CALC - used to set ranges for the error
					  	  	  	  	 //       checking
					  int    max);   //CALC - used to set ranges for the error
									 //       checking

/*******************************************************************************
 * FUNCTION OutputMenu
 * -----------------------------------------------------------------------------
 * This function outputs the menu options. The user may enter a value between 0
 * and 5
 *RETURNS: None
 *******************************************************************************/
void OutputMenu();

/*******************************************************************************
 * FUNCTION Greeting
 * -----------------------------------------------------------------------------
 * This function outputs the Greeting to the user. It describes the options the
 * user has with the current program
 *
 *	RETURNS: None
 *******************************************************************************/
void Greeting();

/*******************************************************************************
 * FUNCTION RunRandomNumber
 * -----------------------------------------------------------------------------
 * This function generates a random number and allows the user to choose from
 * a selection of different options that include summing the digits, reverse the
 * number, and triple the number.
 *
 * RETURNS: None
 *******************************************************************************/
 void RunRandomNumber();

 /******************************************************************************
  * FUNCTION OutputArrayToCon
  * ----------------------------------------------------------------------------
  * This function will output an array to the console
  *
  * RETURNS: None, outputs array
  ******************************************************************************/
 void OutputArrayToCon(RandomNumClass array[], //IN & OUT - used for output
		 	 	 	   const int      SIZE);   //CALC - used for the loop

  /*****************************************************************************
   * FUNCTION OutputArrayToFile
   * ---------------------------------------------------------------------------
   * This function outputs an array to a text file of the users choice
   *
   *	RETURNS: None
   *****************************************************************************/
   void OutputArrayToFile(ostream&       out,    //OUT - used to output
  		 	 	  	      RandomNumClass array[],//OUT - used for output
  		 	 	  	      const int      SIZE);  //CALC - used for loop
   /****************************************************************************
    * FUNCTION PropagateArrayFromFile
    * --------------------------------------------------------------------------
    * This function will propagate an array from an input file
    *
    * RETURN: array
    ****************************************************************************/
   void PropagateArrayFromFile(RandomNumClass array[], //IN - used to read in
		   	   	   	   	   	   	   	   	   	   	   	   //     data
  		 	 	 	 	       const int      SIZE);   //CALC - array size

//T E M P L A T E S
   /****************************************************************************
    * FUNCTION InsertionSort
    * --------------------------------------------------------------------------
    * This function will sort any array that is passed into the function. This
    * specific function utilizes an insertion sort
    ***************************************************************************/
   template<typename DataType>
   void InsertionSort(DataType  array[], //CALC - used to sort
		              const int SIZE)    //CALC - used for the loop
   {
   	int      index;   //CALC - used for the loop
   	int      traverse;//CALC - used to traverse down the array
   	DataType temp;    //CALC - used to store a temporary variable

   	//Begin For Loop
   	for(index = 1; index < SIZE; index++)
   	{
   		//sets the traverse value to index
   		traverse = index;

   		//Begin While
   		while(traverse > 0 && array[traverse - 1] > array[traverse])
   		{
   			temp              = array[traverse];
   			array[traverse]   = array[traverse-1];
   			array[traverse-1] = temp;

   			traverse--;
   		}//End While
   	}//End for
   }

#endif
