/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #6: Smart Array
 *******************************************************************************/
#ifndef SMARTARRAYSPECIFICATION_CPP_
#define SMARTARRAYSPECIFICATION_CPP_

#include <iostream>
#include <stdlib.h>
using namespace std;



class SmartArray
{
/*****************
 * P R I V A T E *
 *****************/
private:

	int * array;
	int   size;

/***************
 * P U B L I C *
 ***************/

public:
	//C O N S T R U C T O R S
	/***************************************************************************
	 * SmartArray (non-default constructor)
	 * -------------------------------------------------------------------------
	 * This method will construct an array and error check the input
	 ***************************************************************************/
	SmartArray(int arrSize); //non-default constructor

	/***************************************************************************
	 * SmartArray (copy constructor)
	 * -------------------------------------------------------------------------
	 * This method will ensure that whenever the copy constructor is called
	 * a deep copy will be performed.
	 ***************************************************************************/
	SmartArray(const SmartArray& otherArr); //copy constructor

	/***************************************************************************
	 * ~SmartArray (destructor)
	 * -------------------------------------------------------------------------
	 * This method will destruct all dynamic memory in the object
	 ***************************************************************************/
	~SmartArray();


	//A C C E S S O R S
	/***************************************************************************
	 * ValueAt
	 * -------------------------------------------------------------------------
	 * This method will retrieve the value specified by the user
	 ***************************************************************************/
	int ValueAt(int index) const;

	/***************************************************************************
	 * GetSize
	 * -------------------------------------------------------------------------
	 * This method will return the size of the array.
	 ***************************************************************************/
	int GetSize() const;


	// M U T A T O R S
	/***************************************************************************
	 * Store
	 * -------------------------------------------------------------------------
	 * This method will replace a value in the index specified
	 ***************************************************************************/
	void Store(int newIndexValue, int index);

	/***************************************************************************
	 * CopyFrom
	 * -------------------------------------------------------------------------
	 * This method will perform a deep copy of the contents in the parameter
	 * otherArr
	 ***************************************************************************/
	void CopyFrom(SmartArray otherArr);
};



#endif /* SMARTARRAYSPECIFICATION_CPP_ */
