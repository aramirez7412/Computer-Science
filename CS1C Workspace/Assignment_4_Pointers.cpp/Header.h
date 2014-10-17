/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

//P R E ~ P R O C E S S O R ~ D I R E C T I V E S
#include "CandidateClass.h"
#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <ostream>
#include <limits>
#include <ios>

using namespace std;

//F U N C T I O N ~ D E F I N I T I O N S

/*******************************************************************************
 * FUNCTION OutputHeader
 * -----------------------------------------------------------------------------
 * This function will output the name header to either the console or a text
 * file
 *
 * RETURNS: none
 *******************************************************************************/
void OutputHeader(ostream&     out,     //OUT - used to determine where to send
				  const string NAME,    //OUT - Student name
				  const string CLASS,   //OUT - Class name
				  const string SECTION, //OUT - class time
				  const int    LAB_NUM, //OUT - Assignment or Lab number
				  const string LAB_NAME,//OUT - Assignment or Lab name
				  char asType			//CALC - either a for assign or l for lab
				  );

/*******************************************************************************
 * FUNCTION OutputGreeting
 * ----------------------------------------------------------------------------
 * This function will output the greeting to the console or a text file
 *
 * RETURNS: none
  ******************************************************************************/
void OutputGreeting(ostream& out); //OUT - used to output to the console or an
								   //      output file

/*******************************************************************************
 * FUNCTION ErrorCheckCharInput
 * ----------------------------------------------------------------------------
 * This function will error check char input
 *
 * RETURNS: char
 ******************************************************************************/
char ErrorCheckCharInput(char   checkOne, //CALC - used for error check
		                 char   checkTwo, //CALC - used for error check
		                 string prompt);   //OUT - used to prompt the user


/*******************************************************************************
 * FUNCTION PropagateArray
 * ----------------------------------------------------------------------------
 * This function will propagate an array for the candidate class
 *
 * RETURNS: none
  ******************************************************************************/
void PropagateArray(Candidate * pointer, const int SIZE);


/*******************************************************************************
 * FUNCTION SetPercentageFunction
 * ----------------------------------------------------------------------------
 * This function will set the percentages of all of the
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: none
 *
 ******************************************************************************/
void SetPercentageFunction(Candidate * pointer, const int SIZE);


/*******************************************************************************
 * FUNCTION PrintTable
 * ----------------------------------------------------------------------------
 * This PrintTable
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *	This function will print the table of the object
 *
 * POST-CONDITIONS
 *
 * RETURNS:
 ******************************************************************************/
void PrintTable(Candidate * pointer, const int SIZE);


/*******************************************************************************
 * FUNCTION PrintTableHeader
 * ----------------------------------------------------------------------------
 * This function prints the table header
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 *	This function will print the table header
 *
 * POST-CONDITIONS
 * Prints table header
 * RETURNS: none
 ******************************************************************************/
void PrintTableHeader();

//T E M P L A T E
template <typename dataType>

dataType ErrorCheckInput(dataType min,
						 dataType max,
						 string   errorMessage,
						 string   errorMessage2,
						 string   prompt)
{
		//D E C L A R A T I O N
		dataType      userInput;	 //INPUT - input from user
		ostringstream out;	  		 //OUT - used for output
		string        errorMessage3; //OUT - used to notify user of an error
		int           width;		 //OUT - sets width of the output
		bool          proceed;       //CALC - used in do while loop

		do
		{
			//I N I T I A L I Z A T I O N
			proceed = true;

			//Prompts user
			cout << prompt;

			//Will enter if statement if input is not a number
			if(!(cin >> userInput))
			{
				//Clears error state in input buffer
				cin.clear();

				//Outputs error message
				cout << endl << errorMessage << endl;
			}
			//Enters else-if if the input is outside of range
			else if(userInput < min || userInput > max)
			{
				//Will determine size of output size to format error message
				out << "***" << userInput << " is not valid input";
				errorMessage3 = out.str();

				//Clears string stream
				out.str("");

				//Checks lengths of both error messages to decide greater length
				if(errorMessage3.length() > errorMessage2.length())
				{
					//Assigns width to length
					width = errorMessage3.length();
				}
				else
				{
					//Assigns width to length
					width = errorMessage2.length();
				}

				//outputs error messages to the user
				cout << setw(width) << errorMessage3 << "****" << endl;
				cout << setw(width) << errorMessage2 << "****" << endl;
			}
			else
			{
				proceed = false;
			}
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << endl;
		}while(proceed);

		return userInput;
}
#endif /* HEADER_H_ */
