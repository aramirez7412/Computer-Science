/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 9/4/14
 * LAB #3 : Shapes and Inheritance
 *******************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

//P R E ~ P R O C E S S O R ~ D I R E C T I V E S
#include <iostream>
#include <string>
#include <iomanip>
#include <ostream>
#include <sstream>
#include <ios>
#include <limits>
#include "CircleType.h"
#include "CylinderType.h"
using namespace std;

//E N U M E R A T E D ~ T Y P E S
enum MainMenu
{
	EXIT_MAIN,
	PERFORM_CIRCLE_OP,
	PERFORM_CYLINDER_OP,
	CHANGE_RADIUS_MAIN
};

enum CircleMenu
{
	EXIT_CIRCLE,
	CALC_AREA,
	CALC_CIRCUMFERENCE,
	PRINT_ALL_CIRCLE,
	ENTER_NEW_RADIUS,
	GO_TO_CYL,


};

enum CylinderMenu
{
	EXIT_CYLINDER,
	CALC_SURFACE_AREA,
	CALC_VOLUME,
	PRINT_ALL_CYL,
	ENTER_NEW_RADIUS_CYL,
	MODIFY_HEIGHT,
	GO_TO_CIRCLE

};
//F U N C T I O N ~ D E F I N I T I O N S

/*******************************************************************************
 * FUNCTION OutputHeader
 * -----------------------------------------------------------------------------
 * THis function will output the name header to either the console or a text file
 *
 * RETURNS: none
 *******************************************************************************/
void OutputHeader(ostream&     out,     //OUT - used to determine where to send
				  const string NAME,    //OUT - Student name
				  const string CLASS,   //OUT - Class name
				  const string SECTION, //OUT - class time
				  const int    LAB_NUM, //OUT - Assignment or Lab number
				  const string LAB_NAME,//OUT - Assignment or Lab name
				  char asType);			//CALC - either a for assign or l for lab
/*******************************************************************************
 * ModifyRadius
 * -----------------------------------------------------------------------------
 * This function will allow the user to modify the radius
 *
 * RETURNS none
 *******************************************************************************/
void ModifyRadius(CylinderType & cyl);//IN & OUT - used to set radius

/*******************************************************************************
 * MainMenu
 * -----------------------------------------------------------------------------
 * Outputs the main menu
 *
 * RETURNS none
 *******************************************************************************/
void MainMenu    (CylinderType cyl); //OUT - used to output radius


/*******************************************************************************
 * CircleMenu
 * -----------------------------------------------------------------------------
 * Outputs the circle menu
 *
 * RETURNS none
 *******************************************************************************/
void CircleMenu  (CylinderType cyl); //OUT - used to output radius


/*******************************************************************************
 * CylinderMenu
 * -----------------------------------------------------------------------------
 * Outputs the Cylinder menu
 *
 * RETURNS none
 *******************************************************************************/
void CylinderMenu(CylinderType cyl); //OUT - used to output radius

/*******************************************************************************
 * PromptUserForInput
 * -----------------------------------------------------------------------------
 * This function will error check user input. In this specific function, it
 * will utilize doubles to check.

 * 	Returns an error checked double
 *******************************************************************************/
double PromptUserForDoubleInput(string errorMessage,  //OUT - used for out
							 string errorMessage2,
							 string prompt,
							 double    min,           //CALC - lower bound
							 double    max);
/*******************************************************************************
 * PromptUserForIntInput
 * -----------------------------------------------------------------------------
 * This function will error check user input. In this specific function, it
 * will utilize doubles to check.

 * 	Returns an error checked integer
 *******************************************************************************/
int PromptUserForIntInput(string errorMessage,  //OUT - used for out
					   	  string errorMessage2,
					   	  string prompt,
					   	  int    min,           //CALC - lower bound
					   	  int    max);

/*******************************************************************************
 * CylinderOperations
 * -----------------------------------------------------------------------------
 * This function takes the user into a menu specific to perform operations with
 * a cylinder
 * -----------------------------------------------------------------------------
 * POST-CODNDITIONS
 *
 * CylinderType Class must be previously defined
 * CircleMenu() must be previously defined
 *
 * cyl: Used to for output and must be previously defined
 *
 * RETURNS none
 *******************************************************************************/
void CylinderOperations(CylinderType & cyl);//IN & OUT & CALC

/*******************************************************************************
 * CircleOperations
 * -----------------------------------------------------------------------------
 * This function takes the user into a menu specific to perform operations with
 * a circle
 * -----------------------------------------------------------------------------
 * POST-CONDITIONS
 *
 * CylinderType Class must be previously defined
 * CircleMenu() must be previously defined
 *
 * cyl: Used to for output and must be previously defined
 *
 * RETURNS none
 *******************************************************************************/
void CircleOperations(CylinderType & cyl);//IN & OUT & CALC


void ModifyHeight(CylinderType & cyl);
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

		}while(proceed);

		return userInput;
}


#endif /* HEADER_H_ */
