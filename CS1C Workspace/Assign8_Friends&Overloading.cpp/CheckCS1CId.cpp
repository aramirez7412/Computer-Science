/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 10/14/14
 * ASSIGN #8: Friends and Operator Overloading
 *******************************************************************************/

#include "Header.h"
#include "StudentClass.h"
#include "CS1CStudent.h"
#include "MathStudent.h"


void CheckIdCS1C(const CS1CStudent& student1,const CS1CStudent& student2)
{
	//D E C L A R A T I O N S
	const int WIDTH = 28;

	cout << left;
	cout << setfill('*');
	cout << " Current ID's" << endl;
	cout << " Student 1: " << student1.GetId() << endl;
	cout << " Student 2: " << student2.GetId() << endl;
	if(student1 == student2)
	{
		cout << left;
		cout << endl << setw(WIDTH) << " "<< endl;
		cout << " * The Id's are the same!*";
		cout << endl << setw(WIDTH)  << " "<< endl;
	}
	else
	{
		cout << left;
		cout << endl << setw(WIDTH) << " " << endl;
		cout << " * The Id's are DIFFERENT!*";
		cout << endl << setw(WIDTH) << " " << endl;
	}
}
