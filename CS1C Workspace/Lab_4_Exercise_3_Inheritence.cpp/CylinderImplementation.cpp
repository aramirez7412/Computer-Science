/*******************************************************************************
 * NAME   : Anthony Ramirez
 * CLASS  : CS1C
 * SECTION: T/TH 6:00-8:50
 * DATE   : 9/4/14
 * LAB #3 : Shapes and Inheritance
 *******************************************************************************/
#include "CylinderType.h"

/*************************************************
 * CylinderType Implementation File			     *
 * 												 *
 * NOTE: The CircleType class interface must be  *
 * 	     previously defined and accessible to    *
 * 	     the CylinderType class. Some methods    *
 * 	     are dependent on methods defined in     *
 * 	     CircleType	    						 *
 * 	     										 *
 * **CylinderType is derived from CircleType**	 *
 * 	     										 *
 * S E E ~ CircleType.h for specification details*
 *************************************************/

/*******************************************************************************
 * CylinderType (Constructor)
 * -----------------------------------------------------------------------------
 * This constructor will initialize height and radius to zero
 *
 * POST-CONDITIONS
 *******************************************************************************/
CylinderType::CylinderType()
{
	height  = 0;
	SetRadius(0);
}

/*******************************************************************************
 * ~CylinderType (Destructor)
 * -----------------------------------------------------------------------------
 * This destructor will destruct an instance of CylinderType
 *
 * POST-CONDITIONS
 *******************************************************************************/
CylinderType::~CylinderType()
{
}

/*******************************************************************************
 * PrintAllCylinder const
 * -----------------------------------------------------------------------------
 * This method will print the -radius, surface area, and volume of the
 * cylinder with the provided radius
 * -----------------------------------------------------------------------------
 *  GetRadius is a public method of the CircleType and must be
 *  previously defined
 *     CircleType::GetRadius()
 *     {
 * 	     return radius
 *     }
 *
 * POST-CONDITIONS
 * Outputs the radius, surface area, and volume to the console
 *
 * RETURNS None
 *******************************************************************************/
void CylinderType::PrintAllCylinder() const
{
	/***************************************************************************
	 * O U T P U T
	 * -------------------------------------------------------------------------
	 * The following segment of code will output the radius, volume, and
	 * surface area to the console.
	 ***************************************************************************/
	cout << setw(20) << "The radius is:" 	   << GetRadius()   << endl;
	cout << setw(20) << "The height is:"	   << GetHeight()   << endl;
	cout << setw(20) << "The volume is:" 	   << Volume()    	<< endl;
	cout << setw(20) << "The surface area is:" << SurfaceArea() << endl;
}

/*******************************************************************************
 * GetCylinderRadius const
 * -----------------------------------------------------------------------------
 * This method will call upon a method in the super class to retrieve
 * the radius
 *
 *  GetRadius is a public method of the CircleType and must be
 *  previously defined
 *
 *  CircleType::GetRadius()
 *  {
 * 	 return radius
 *  }
 *
 * POST-CONDITIONS
 * radius is returned
 *
 * RETURNS radius (double)
 *******************************************************************************/
double CylinderType::GetCylinderRadius() const
{
	return GetRadius();
}


/*******************************************************************************
 * GetCylinderHeight const
 * -----------------------------------------------------------------------------
 * This method will call upon a method in the super class to retrieve
 * the radius
 *
 *  GetRadius is a public method of the CircleType and must be
 *  previously defined
 *
 *  CircleType::GetHeight()
 *  {
 * 	 return height
 *  }
 *
 * POST-CONDITIONS
 * height is returned
 *
 * RETURNS height (double)
 *******************************************************************************/
double CylinderType::GetHeight() const
{
	return height;
}
/*******************************************************************************
 * SetCylinderRadius
 * -----------------------------------------------------------------------------
 * This method will call the CircleType method called SetRadius. The
 * -radius will take the value of newRadius. Radius is a member of the
 * super class CircleType.
 *
 * SetRadius() is a method of the CircleType class and must be previously
 * defined
 *
 * SetRadius(double newRadius)
 * {
 * 	radius = newRadius;
 * }
 *
 *
 * POST-CONDITIONS
 * -radius = newRadius;
 *******************************************************************************/
void CylinderType::SetCylinderRadius(double newRadius) //IN - Used to set radius
{
	SetRadius(newRadius);
}

/*******************************************************************************
 * SetHeight
 * -----------------------------------------------------------------------------
 * This method will set the -height member
 *
 * POST-CONDITION newHeight will be assigned to height
 ******************************************************************************/
void CylinderType::SetHeight(double newHeight)
{
	height = newHeight;
}

/*******************************************************************************
 * SurfaceArea const
 * -----------------------------------------------------------------------------
 * This method will calculate and return the surface area with the
 * given radius
 *
 *  GetRadius is a public method of the CircleType and must be
 *  previously defined
 *
 *  CircleType::GetRadius()
 *  {
 *    return radius
 *  }
 *
 * POST-CONDITIONS
 * 2*pi*GetRadius()*GetRadius()) +(2*pi*GetRadius()*height)
 *
 * RETURNS surfaceArea (double)
 *******************************************************************************/
double CylinderType::SurfaceArea() const
{
	return (2 * pi * GetRadius() * GetRadius()) +
		   (2 * pi * GetRadius() * height);
}

/*******************************************************************************
 * Volume const
 * -----------------------------------------------------------------------------
 * This method will calculate and return the volume with the given radius
 *
 * GetRadius is a public method of the CircleType and must be
 * previously defined
 *
 * CircleType::GetRadius()
 * {
 *   return radius
 * }
 *
 * POST-CONDITIONS
 * pi*GetRadius()*GetRadius()*height;
 *
 * RETURNS volume (double)
 *******************************************************************************/
double CylinderType::Volume() const
{
	return pi * GetRadius() * GetRadius() * height;
}
