/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/

#include "Header.h"

/*******************************************************************************
 * FUNCTION PrintTableHeader
 * ----------------------------------------------------------------------------
 * This function will output the table header
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *	none
 *
 * POST-CONDITIONS
 *
 * 		RETURNS: none
 *
 * 		Outputs the table header to the console
 ******************************************************************************/

void PrintTableHeader()
{
	    cout << "\nRESULTS!" << endl;
		cout << "--------"   << endl        << endl;
		cout << left;
		cout << setw(18)     << "Candidate" << setw(9) << "Votes"
			 << setw(6)      << "Percent"   << endl;
		cout << setfill('-') << setw(8)     << "-"     << setfill(' ')
			 << right        << setw(10)    << " "
			 << setfill('-') << left        << setw(6) << "-"  << setfill(' ')
			 << right        << setw(3)     << " "
			 << setfill('-') << setw(7) << "-" << endl << left << setfill(' ');
}
