/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/2/14
 * ASSIGN #2: Deck Of Cards
 *******************************************************************************/
#include "Header.h"
/*******************************************************************************
 * FUNCTION OutputHeader
 * ----------------------------------------------------------------------------
 * This function will output the header to the console or a text file
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *
 * 		NAME    : Must be previously defined and stores name
 * 		CLASS   : Must be previously defined and stores class
 * 		SECTION : Must be previously defined and stores section
 * 		LAB_NUM : Must be previously defined and stores lab number
 * 		LAB_NAME: Must be previously defined and stores lab name
 * 		asType  : Must be previously defined and stores assignment type
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: none
 *
 * 		Outputs the header to eithe the console or file
 ******************************************************************************/
void OutputHeader(ostream&     out,     //OUT - used to determine where to send
				  const string NAME,    //OUT - Student name
				  const string CLASS,   //OUT - Class name
				  const string SECTION, //OUT - class time
				  const int    LAB_NUM, //OUT - Assignment or Lab number
				  const string LAB_NAME,//OUT - Assignment or Lab name
				  char asType			//CALC - either a for assign or l for lab
				  )
{

	out << left;
	out << "**************************************************\n";
	out << "* Programmed by : " << NAME << "\n";
	out << "* " << setw(14) << "Student ID" << ": 369397";
	out << "\n* " << setw(14) << CLASS << ":" << SECTION;
	if (toupper(asType) == 'L')
	{
		out << "\n* LAB # " << setw(8);
	}
	else
	{
		out << "\n* ASSIGNMENT #" << setw(2);
	}
	out << LAB_NUM << ": " << LAB_NAME;
	out << "\n**************************************************\n";


}

