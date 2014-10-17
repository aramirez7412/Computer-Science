/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/9/14
 * ASSIGN #3: Student Class
 *******************************************************************************/

#include "Header.h"
#include "StudentClass.h"
#include "CS1CStudent.h"


/******************************************************************************
 * Student Class
 * ----------------------------------------------------------------------------
 * This program contains two classes that represent a student and a CS1C student
 * ------------------------------------------------------------------------------
 * INPUT:
 * 	NONE
 *
 * OUTPUT:
 *
 *  Content of Object is output
 *******************************************************************************/
#define StudentClassRun
int main()
{
	//D E C L A R A T I O N S
	Student testStudent("Test Student",
						"Standing",
						"000-000-0000",
						123456,
						0,
						0.0,
						'M',
						0,
						0,
						0);
	Student     student;
	Student     student2;
	CS1CStudent CSStudent;

	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 3, "Student Class", 'A');


		CSStudent.PropagateCS1C();
		CSStudent.PrintCS1C();
		cout << endl;

		student.SetAll("Bill Gates", "Frshman", "909-456-7891",543210,60,
						4.0, 'M', 06, 13, 2014);
		student.PrintAll();
		cout << endl;

		student2.SetAll("Drew Brees", "Senior", "909-967-4123",164976,45,
								3.5, 'M', 07, 10, 2014);
		student2.PrintAll();


	return 0;
}
