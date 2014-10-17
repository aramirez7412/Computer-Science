/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#include "Header.h"
/*******************************************************************************
 * FUNCTION PropagateArrayFromFile
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
 void PropagateArrayFromFile(RandomNumClass array[], //CALC & IN - used to
		 	 	 	 	 	 	 	 	 	 	 	 //            propagate
		 	 	 	 	     const int      SIZE)    //CALC - used in while loop
 {
	 //D E C L A R A T I O N S
	 ifstream inFile;  //IN - used to propagate the array
	 string   fileName;//IN - used to determine which input file to read from
	 int      index;   //CALC - used in while loop
	 int      temp;    //IN - used to temporarily store input

	 //I N I T I A L I Z A T I O N S
	 index = 0;

	 //PROMPTS the user for file name
	 cout << "\nPlease enter the file name you would like to use: ";
	 getline(cin, fileName);

	 //Opens the input file
	 inFile.open(fileName.c_str());

	 //Begin while
	 while(index < SIZE && inFile)
	 {
		 //Reads input from text file
		 inFile >> temp;
		 array[index].SetRandomInt(temp);
		 index++;
	 }//End WHile

	 inFile.close();

 }
