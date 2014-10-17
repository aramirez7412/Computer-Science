/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #6: Smart Array
 *******************************************************************************/

#include "SmartArray.h"
/*******************************************************************************
 * SmartArray Implementation File
 *******************************************************************************/

//C O N S T R U C T O R S
/***************************************************************************
 * SmartArray (non-default constructor)
 * -------------------------------------------------------------------------
 * This method will construct an array and error check the input
 ***************************************************************************/
SmartArray::SmartArray(int arrSize)
{
	// D E C L A R A T I O N
	// none

	//Checks to ensure size is not a negative number
	if(arrSize > 0)
	{
		//Assigns arrSize to size, creates a dynamic array with the new
		//size and then initializes all array elements to 0
		size  = arrSize;
		array = new int[size]; //Creates dynamic memory

		for(int index = 0; index < size; index++)
		{
			array[index] = 0;
		}
	}
	else
	{
		cerr << "SmartArray constructor - Invalid size: " << arrSize << endl;
		exit(1);
	}
}

/*******************************************************************************
 * GetSize
 * -----------------------------------------------------------------------------
 * This const method will return the size of the class
 *******************************************************************************/
int SmartArray::GetSize() const
{
	return size;
}

/*******************************************************************************
 * ValueAt
 * -----------------------------------------------------------------------------
 * This const method will retireve the value at the specified index
 *******************************************************************************/
int SmartArray::ValueAt(int index) const
{
	if(index < 0 || index >= size)
	{
		cout << "Value At- invalid index: " << index << endl;

	}
	else
	{
		return array[index];

	}

}

/*******************************************************************************
 * Store
 * -----------------------------------------------------------------------------
 * This method will store a value at the specified index
 ********************************************************************************/
void SmartArray::Store(int value,
					   int index)
{
	if(index < 0 || index >= size)
	{
		cout << "Store-invalid index: " << index << endl;
	}
	else
	{
	  array[index] = value;
	}
}
/***************************************************************************
 * SmartArray (copy constructor)
 * -------------------------------------------------------------------------
 * This method will ensure that wwhenever the copy constructor is called
 * a deep copy will be performed.
 ***************************************************************************/
SmartArray::SmartArray(const SmartArray& otherArr) //copy constructor
{

	cout << endl <<  "Copy constructor is being called!" << endl;
	int index;

	size = otherArr.GetSize();

	array = new int[size];

	for(index = 0; index < size; index++)
	{
		Store(otherArr.ValueAt(index), index);
	}
}

/***************************************************************************
 * CopyFrom
 * -------------------------------------------------------------------------
 * This method will perform a deep copy of any object being passed in as a
 * parameter
 ***************************************************************************/
void SmartArray::CopyFrom(SmartArray otherArr)
{
	int index;

	cout << "\nCopy from function is called" << endl;

	delete [] array;

	size = otherArr.GetSize();

	array = new int[size];

	for(index = 0; index < size; index++)
	{
		array[index] = otherArr.ValueAt(index);
	}
}

//D E S T U C T O R
SmartArray::~SmartArray()
{
	delete [] array;
}
