/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#include "Header.h"
/*******************************************************************************
 * FUNCTION OutputMenu
 * -----------------------------------------------------------------------------
 * This function outputs the menu options. The user may enter a value between 0
 * and 5
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		None
 *
 * POST-CONDITIONS
 * 		Outputs the menu to the console
 *
 *	RETURNS: None
 *******************************************************************************/
void OutputMenu()
{
	//Outputs the menu
	cout << endl;
	cout << "1 - Output number"         << endl;
	cout << "2 - Triple the number"     << endl;
	cout << "3 - Sum the digits"        << endl;
	cout << "4 - Reverse Digits"        << endl;
	cout << "5 - Generate New Number"   << endl;
	cout << "0 - Exit" 			        << endl;
}
