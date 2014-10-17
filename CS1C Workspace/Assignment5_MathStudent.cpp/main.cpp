/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #5: Math Student Class
 *******************************************************************************/

#include "Header.h"
#include "StudentClass.h"
#include "CS1CStudent.h"
#include "MathStudent.h"

/******************************************************************************
 * MathStudent
 * ----------------------------------------------------------------------------
 * This program contains three class. Student, CS1C Student, and Math Student
 * -----------------------------------------------------------------------------
 * INPUT:
 * 	NONE
 *
 * OUTPUT:
 *
 *  Content of Object is output
 *******************************************************************************/

void        PrintFunctionCopy(MathStudent someStudent);
MathStudent ModifyName(MathStudent someStudent, string newName);

int main()
{

	//D E C L A R A T I O N S

	MathStudent someStudent;
	MathStudent anotherStudent;
	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 5, "Math Student Class", 'A');

	someStudent.SetAllMath("Joe Buck",
						   "Freshman",
						   "949-123-4564",
						   12345,
						   17,
						   3.5,
						   'M',
						   6,
						   15,
						   2017,
						   "1234 Some Street",
						   "City of Intel",
						   "California",
						   91111);
	MathStudent yetAnotherStudent = someStudent;

	yetAnotherStudent.PrintAllMath();

	PrintFunctionCopy(someStudent);

	anotherStudent = someStudent;

	anotherStudent = ModifyName(anotherStudent, "Bob Buck");

	anotherStudent.SetAllMath("John Cole",
							  "Sophomore",
							  "626-890-2314",
							  12345,
							  17,
							  3.1,
							  'M',
							  02,
							  15,
							  2017,
							  "1234 Rockview Drive",
							  "Irvine",
							  "CA",
							  91612);

	cout << endl << endl;
	anotherStudent.PrintAllMath();


	return 0;
}


void PrintFunctionCopy(MathStudent someStudent)
{
	cout << "\nEntering print function...\n\n";
	someStudent.PrintAllMath();

	cout << "Exiting Print function";
	cin.ignore(1000, '\n');
}


MathStudent ModifyName(MathStudent someStudent, string newName)
{
	cout << "\nEntering Modify name function\n";
	someStudent.SetName(newName);


	return someStudent;
}

