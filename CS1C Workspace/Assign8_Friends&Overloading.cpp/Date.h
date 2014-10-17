/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 10/14/14
 * ASSIGN #8: Friends and Operator Overloading
 *******************************************************************************/

#ifndef DATE_H_
#define DATE_H_


#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

class Date
{
private:
	/**************************
	 *      			      *
	 *     -P R I V A T E-    *
	 *      				  *
	 **************************/

	int    month;
	int    day;
	int    year;
	string date;

	/**************************
	 * 						  *
	 *      +P U B L I C+  	  *
	 *            		      *
	 **************************/
public:
	//C O N S T R U C T O R S
	/***************************************************************************
	 * Date Constructor
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the date class and will initialize
	 * private members to zero
	 *
	 * Returns: All private members initialized to zero
	 ***************************************************************************/
	Date();

	/***************************************************************************
	 * Date Constructor (non-default)
	 * -------------------------------------------------------------------------
	 * This is the non-default constructor for the date class and will
	 * initialize private members to the parameters being passed in
	 *
	 * Returns: All private members initialized to respective parameter
	 ***************************************************************************/
	Date(int    newMonth,
		 int    newDay,
		 int    newYear);

	/*********************
	 *  M U T A T O R S  *
	 *********************/

	/***************************************************************************
	 * SetMonth
	 * -------------------------------------------------------------------------
	 * This method will set -month by assigning the value of newName
	 *
	 * Returns: All private members initialized to respective parameter
	 ***************************************************************************/
	void SetMonth	(int newMonth);

	/***************************************************************************
	 * SetDay
	 * -------------------------------------------------------------------------
	 * This method will set -date by assigning the value of newDay
	 *
	 * Returns: day = newDay;
	 ***************************************************************************/
	void SetDay(int newDay);

	/***************************************************************************
	 * SetYear
	 * -------------------------------------------------------------------------
	 * This method will set -year by assigning the value of newYear
	 *
	 * Returns: year = newYear;
	 ***************************************************************************/
	void SetYear	(int newYear);

	/***************************************************************************
	 * SetDate
	 * -------------------------------------------------------------------------
	 * This method will set -date by concatenating all private members
	 *
	 * Returns: date in string format
	 ***************************************************************************/
	void SetDate	();


	/***************************************************************************
	 * SetAll
	 * -------------------------------------------------------------------------
	 * This method will set all private members
	 *
	 * Returns: All members will be assigned a value
	 ***************************************************************************/
	void SetAll(int newMonth,
				int newDay,
				int newYear);


	/*********************
	 * A C C E S S O R S *
	 *********************/

	/***************************************************************************
	 * GetMonth (const)
	 * -------------------------------------------------------------------------
	 * This method will return the month of the object
	 *
	 * Returns: int (-month member is returned)
	 ***************************************************************************/
	int 		   GetMonth() const;

	/***************************************************************************
	 * GetDay
	 * -------------------------------------------------------------------------
	 * This method will return the day of the object
	 *
	 * Returns: string (-day)
	 ***************************************************************************/
	int 		   GetDay() const;

	int 			GetYear() const;

	/***************************************************************************
	 * GetDate
	 * -------------------------------------------------------------------------
	 * This method will return the phone number of the object
	 *
	 * Returns: string(-phoneNumber)
	 ***************************************************************************/
	string 		   GetDate() const;
};



#endif /* DATE_H_ */
