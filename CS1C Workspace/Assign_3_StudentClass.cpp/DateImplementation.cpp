/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/9/14
 * ASSIGN #3: Student Class
 *******************************************************************************/
#include "Date.h"


/*********************
 *  M U T A T O R S  *
 *********************/
/***************************************************************************
 * Date Constructor
 * -------------------------------------------------------------------------
 * This is the default constructor for the date class and will initialize
 * private members to zero
 *
 * Returns: All private members initialized to zero
 ***************************************************************************/
Date::Date():month(0),day(0),year(0), date(" ")
{
}

/***************************************************************************
 * Date Constructor (non-default)
 * -------------------------------------------------------------------------
 * This is the non-default constructor for the date class and will
 * initialize private members to the parameters being passed in
 *
 * Returns: All private members initialized to respective parameter
 ***************************************************************************/
Date::Date(int    newMonth,
		   int    newDay,
		   int    newYear)
{
	SetMonth(newMonth);
	SetDay(newDay);
	SetYear(newYear);
}


/***************************************************************************
 * SetMonth
 * -------------------------------------------------------------------------
 * This method will set -month by assigning the value of newName
 *
 * Returns: All private members initialized to respective parameter
 ***************************************************************************/
void Date::SetMonth	(int newMonth)
{
	month = newMonth;
}

/***************************************************************************
 * SetDay
 * -------------------------------------------------------------------------
 * This method will set -day by assigning the value of newDay
 *
 * Returns: day = newDay;
 ***************************************************************************/
void Date::SetDay(int newDay)
{
	day = newDay;
}


/***************************************************************************
 * SetYear
 * -------------------------------------------------------------------------
 * This method will set -year by assigning the value of newYear
 *
 * Returns: year = newYear;
 ***************************************************************************/
void Date::SetYear	(int newYear)
{
	year = newYear;
}

/***************************************************************************
 * SetAll
 * -------------------------------------------------------------------------
 * This method will set all private members
 *
 * Returns: All members will be assigned a value
 ***************************************************************************/
void Date::SetAll(int newMonth,
				  int newDay,
				  int newYear)
{
	ostringstream out;

	SetMonth(newMonth);
	SetDay(newDay);
	SetYear(newYear);
	SetDate();
}


/***************************************************************************
 * SetDate
 * -------------------------------------------------------------------------
 * This method will set -date by concatenating all private members
 *
 * Returns: date in string format
 ***************************************************************************/
void Date::SetDate	()
{
	ostringstream out;
	out << month << "/" << day << "/" << year;
	date = out.str();

	out.str("");
}

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
int Date::GetMonth() const
{
	return month;
}

/***************************************************************************
 * GetDay
 * -------------------------------------------------------------------------
 * This method will return the day of the object
 *
 * Returns: string (-day)
 ***************************************************************************/
int Date:: GetDay() const
{
	return day;
}

/***************************************************************************
 * GetDate
 * -------------------------------------------------------------------------
 * This method will return the phone number of the object
 *
 * Returns: string(-phoneNumber)
 ***************************************************************************/
string Date::GetDate() const
{
	return date;
}
