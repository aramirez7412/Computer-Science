#include "Header.h"
void OutputHeader( ostream& out,
				  const string NAME,
				  const string CLASS,
				  const string SECTION,
				  const int LAB_NUM,
				  const string LAB_NAME,
				  char asType
				  )

{

	out << left;
	out << "**************************************************\n";
	out << "* Programmed by : " << NAME << "\n";
	out << "* " << setw(14) << "Student ID" << ": 369397 & 840049";
	out << "\n* " << setw(14) << CLASS << ":" << SECTION;
	if (toupper(asType) == 'L')
	{
		out << "\n* LAB # " << setw(9);
	}
	else
	{
		out << "\n* ASSIGNMENT #" << setw(2);
	}
	out << LAB_NUM << ": " << LAB_NAME;
	out << "\n**************************************************\n";


}
