/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 9/4/14
 * LAB #3 : Shapes and Inheritance
 *******************************************************************************/
#include "CircleType.h"

/*************************************************
 * Circle Implementation File				     *
 * 												 *
 * S E E ~ CircleType.h for specification details*
 *************************************************/

/*******************************************************************************
 * PrintAll
 * -----------------------------------------------------------------------------
 * This method is will Print the radius, circumference, and Area to the console
 *
 * POST-CONDITIONS: Prints the radius, circumference, and area to the console
 *******************************************************************************/
void CircleType::PrintAll() const
{
	/***************************************************************************
	 * O U T P U T
	 * -------------------------------------------------------------------------
	 * Calls upon +GetRadius(), +Circumference(), and +Area() to be printed
	 ***************************************************************************/
	cout << setw(15) << "Radius: " 		  << GetRadius()	 << endl;
	cout << setw(15) << "Circumference: " << Circumference() << endl;
	cout << setw(15) << "Area: "          << Area()          << endl;

}

/*******************************************************************************
 * SetRadius
 * -----------------------------------------------------------------------------
 * This method is will set the radius in the CircleType object
 *
 * POST-CONDITIONS: Sets the radius to the parameter being passed in
 *******************************************************************************/
void CircleType::SetRadius(double r)
{
	/***************************************************************************
	 * P R O C E S S I N G
	 * -------------------------------------------------------------------------
	 * If the radius passed in is less then zero then the radius will be
	 * automatically initialized to 0
	 *
	 * POST-CONDITIONS: radius is initialized
	 ***************************************************************************/
	if (r >=0)
		radius = r;
	else
		radius = 0;
}

/*******************************************************************************
 * GetRadius
 * -----------------------------------------------------------------------------
 * This method is will return -radius
 *
 * POST-CONDITIONS: returns -radius
 *******************************************************************************/
double CircleType::GetRadius() const
{
	return radius;
}

/*******************************************************************************
 * Area
 * -----------------------------------------------------------------------------
 * This method is will calculate the Area using the given radius
 *
 * POST-CONDITIONS: returns the Area
 *******************************************************************************/
double CircleType::Area() const
{
	return pi*radius*radius;
}

/*******************************************************************************
 * Circumference
 * -----------------------------------------------------------------------------
 * This method is will calculate the circumference and return it
 *
 * POST-CONDITIONS: Returns circumference
 *******************************************************************************/
double CircleType::Circumference() const
{
	return 2*pi*radius;
}

/*******************************************************************************
 * CircleType (Constructor)
 * -----------------------------------------------------------------------------
 * This constructor will initialize -radius to 0
 *
 * POST-CONDITIONS: -radius is initialized to 0
 *******************************************************************************/
CircleType::CircleType(double r)
{
	SetRadius(r);
}
