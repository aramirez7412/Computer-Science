/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/9/14
 * ASSIGN #3: Student Class
 *******************************************************************************/

#include "Header.h"

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
int main()
{
	//D E C L A R A T I O N S
	const int WIDTH = 12;


	/***************************************************************************
	 * FUNCTION OutputHeader
	 * -------------------------------------------------------------------------
	 * This function will output the header
	 ***************************************************************************/
	OutputHeader(cout, "Anthony Ramirez", "CS1C",
				 "6:00-8:50 PM", 3, "Student .Class", 'A');




 cout << endl;

 /////// PART 1 ///////////////////////////////////////////

 int *int_ptr1;
 int *int_ptr2;

 int int_var = 100;

 //point int_ptr1 to int_var
 int_ptr1 = &int_var;


 //allocate memory from the heap (dynamically) and point int_ptr2 at it
 //store the value 200 in this memory
 /***************
  * Modification*
  ***************/
 int_ptr2 = new int(200);

 cout << setw(WIDTH) << "int_var: "   << int_var   << endl
      << setw(WIDTH) << "*int_ptr1: " << *int_ptr1 << endl
      << setw(WIDTH) << "*int_ptr2: " << *int_ptr2 << endl
      << endl;

 //add 100 to the values pointed to by both int pointers
*int_ptr1 += 100;
*int_ptr2 += 100;

 cout << setw(WIDTH) << "int_var: "   << int_var   << endl
      << setw(WIDTH) << "*int_ptr1: " << *int_ptr1 << endl
      << setw(WIDTH) << "*int_ptr2: " << *int_ptr2 << endl
      << endl;

 //delete all dynamically allocated memory in Part 1
// delete int_ptr1; <- Can't be done since no dynamic memory was created
 delete int_ptr2;



 /////// PART 2 ///////////////////////////////////////////

 //dynamically allocate new memory from the heap for all 3 pointers
 int_ptr1      = new int;
 int_ptr2      = new int;
 int *int_ptr3 = 0; //Points ptr to NULL

 int_ptr3      = new int;

 *int_ptr1 	   = 400;
 *int_ptr2     = 500;
 *int_ptr3     = 600;

 cout << setw(WIDTH)   << "int_var: "   << int_var   << endl
      << setw(WIDTH)   << "*int_ptr1: " << *int_ptr1 << endl
      << setw(WIDTH)   << "*int_ptr2: " << *int_ptr2 << endl
      << setw(WIDTH)   << "*int_ptr3: " << *int_ptr3 << endl
      << endl;

 //point all pointers to the same memory location
 //  (the one pointed to by int_ptr1)
 //make sure you don't leave allocated memory floating around
 delete int_ptr2;
 delete int_ptr3;

 int_ptr2 = int_ptr1;
 int_ptr3 = int_ptr2;

 cout << "*int_ptr1: " << *int_ptr1 << endl
      << "*int_ptr2: " << *int_ptr2 << endl
      << "*int_ptr3: " << *int_ptr3 << endl
      << endl;

 //delete all dynamically allocated memory in part2
 delete int_ptr1;


 return 0;
}

