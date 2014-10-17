/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #6: Smart Array
 *******************************************************************************/

#include "Header.h"
#include "SmartArray.h"
/******************************************************************************
 * MathStudent
 * ----------------------------------------------------------------------------
 * This program will utilize a smart array class and test its methods.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 	NONE
 *
 * OUTPUT:
 *
 *  Content of Object is output. There are multiple arguments passed in through
 *  the command prompt.
 *******************************************************************************/

int main(int argc, char * argv[])
{

	//D E C L A R A T I O N S
	SmartArray newArray(10); //OUT & CALC - used to output
	int        value;        //CALC - used as a temporary value to input values
							 //		  into an array

	//I N I T I A L I Z A T I O N S
	value = 0;

	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 5, "Math Student Class", 'A');


	cout << "***************\n";
	cout << "*    Part 1   *\n";
	cout << "***************\n";
	cout << endl;

	//This code segment propagates the array and outputs its content at the same
	//time
	for(int index = 0; index < newArray.GetSize(); index++)
	{
		newArray.Store(value, index);
		cout << newArray.ValueAt(index) << " " << newArray.ValueAt(index)*10
			 << endl;
		value++;
	}


	newArray.Store(120,11);
	newArray.ValueAt(11);

	//Declares a new instance of smart array and is initialized using the
	//initialization method. The copy constructor is called

	SmartArray someArray = newArray;
	cout << "***************\n";
	cout << "*    Part 2   *\n";
	cout << "***************\n";
	cout << endl;


	//The following segment of code outputs the content of the new object
	for(int i = 0; i < someArray.GetSize(); i++)
	{
		cout << someArray.ValueAt(i) << " " << someArray.ValueAt(i)*10
			 << endl;
	}



	//The next segment of code outputs the arguments being passed in as
	//parameters through main
	cout << endl << argc << " arguments passed in." << endl;

	cin.ignore(100, '\n');

	cout << argv[0];

	cin.ignore(100, '\n');


	cout << "First name: " << argv[1] << endl;
	cout << "Last name : " << argv[2] << endl << endl;


	cout << "Second letter of my first name: " << (*(argv[1]+1));

	cin.ignore(100, '\n');

	cout << "Second letter of my last name: " << (*(argv[2]+1));

	cin.ignore(100, '\n');
	return 0;
}




