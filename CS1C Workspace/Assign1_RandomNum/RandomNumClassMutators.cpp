/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/

#include "RandomNumberNameSpace.h"
using namespace RandomNumber;

/*******************************************************************************
 * RandomNumClass
 * -----------------------------------------------------------------------------
 * Default constructor that generates a random number, summed digits, and
 * reversed digits
 *******************************************************************************/
RandomNumClass::RandomNumClass()
{
	SetAll();
}
/*******************************************************************************
 * RandomNumClass
 * -----------------------------------------------------------------------------
 * Overloaded operator that assigns all members of the RandomNumClass to zero
 ********************************************************************************/
RandomNumClass::RandomNumClass(int num,			  //IN - assigns random num
							   int numTrip,		  //IN - assigns tripled num
							   int digSum,        //IN - assigns digits summed
							   int reversedDigits)//IN - assigns reversed digits
{
	SetAll(num, numTrip, digSum, reversedDigits);

}
/*******************************************************************************
 * RandomNumClass~
 * -----------------------------------------------------------------------------
 * Default destructor that deletes an instance of an object
 *******************************************************************************/
RandomNumClass::~RandomNumClass()
{
}

/*******************************************************************************
 * SetAll
 * -----------------------------------------------------------------------------
 * This function sets all of the attributes
 *******************************************************************************/
void RandomNumClass::SetAll()
{
	GenerateRandomInt();
	TripleNum();
	ReverseNumber();
	SumDigits();
}
/*******************************************************************************
 * SetAll (overloaded)
 * -----------------------------------------------------------------------------
 * This overloaded set all fucntion is used to set all of the memebrs to specific
 * values
 *******************************************************************************/
void RandomNumClass::SetAll(int num,		   //IN - assigns random num
						    int numTrip,	   //IN - assigns tripled num
						    int digSum,        //IN - assigns digits summed
						    int reversedDigits)//IN - assigns reversed digits
{
	SetRandomInt(num);
	SetNumberTripled(numTrip);
	SetSumDigits(digSum);
	SetReversedDigits(reversedDigits);
}
/*******************************************************************************
 * SetRandomInt
 * -----------------------------------------------------------------------------
 * Sets random integer
 *******************************************************************************/
void RandomNumClass::SetRandomInt(int num)
{
	randomNumber = num;
}

/*******************************************************************************
 * GenerateRandomInt
 * ------------------------------------------------------------------------------
 * This function generates a random integer
 *******************************************************************************/
void RandomNumClass::GenerateRandomInt()
{
	SetRandomInt(rand() % 900 + 100);
}

/*******************************************************************************
 * SetNumTripled
 * ------------------------------------------------------------------------------
 * Sets the numberTripled
 *******************************************************************************/
void RandomNumClass::SetNumberTripled(Triple num)
{
	numberTripled = num;
}
/*******************************************************************************
 * SetSumDigits
 * ------------------------------------------------------------------------------
 * Sets the digits summed
 *******************************************************************************/
void RandomNumClass::SetSumDigits(RandomDigitSum digSummed)
{
	digitsSummed = digSummed;
}
/*******************************************************************************
 * GenerateRandomInt
 * ------------------------------------------------------------------------------
 * This function generates a random integer
 *******************************************************************************/
void RandomNumClass::SetReversedDigits(RandomInt reversedNum)
{
	reversedNumber = reversedNum;
}

/*******************************************************************************
 * TripleNum
 * -----------------------------------------------------------------------------
 * This method triples the number and calls SetNumberTriple to re assign the
 * value
 *******************************************************************************/
void RandomNumClass::TripleNum()
{
	Triple temp;

	temp = (randomNumber * 3);

	SetNumberTripled(temp);
}
/*******************************************************************************
 * FUNCTION ReverseNumber
 * -----------------------------------------------------------------------------
 * This function reverses the random number. First, the length of the number is
 * found. Then the remainder of the number is raised to the power of the
 * length - 1. This allows for the greatest holding place to be raised to
 * 10^0 power to make it a ones place
 *******************************************************************************/
void RandomNumClass::ReverseNumber()
{
	//D E C L A R A T I O N S
	RandomDigitSum sumTemp;   //CALC - used to hold the sum of the accumulated
							  //	   power
	RandomDigitSum temp;	  //CALC - used to hold the randomNumber value
	int 		   length;    //CALC - length of the number
	int            index;     //CALC - used to traverse through the digits
	ostringstream  out;		  //CALC - used to find length of the number

	//I N I T I A L I Z A T I O N S
	sumTemp = 0;
	temp    = randomNumber;

	//Sends the random number into the string stream
	out << randomNumber;

	//Length of the number is found
	length = (out.str()).length();

	//Clears the string stream
	out.str("");

	//Begin For
	for(index = (length - 1); index >=0; index--)
	{
		sumTemp += (temp%10) * (pow(10, index));
		temp /= 10;
	}//End For

	/***************************************************************************
	 * FUNCTION SetReversedDigits
	 * -------------------------------------------------------------------------
	 * This function sets the reversedDigits value
	 ***************************************************************************/
	SetReversedDigits(sumTemp);
}
/*******************************************************************************
 * FUNCTION SumDigits
 * -----------------------------------------------------------------------------
 * This function sums the digits of the random number. It takes the random number
 * mods it by 10, and adds the remainder to a sum. It then divides the random
 * number by ten and and mods the newly divided random number to receive the
 * remainder..etc
 *******************************************************************************/
void RandomNumClass::SumDigits()
{
	//D E C L A R A T I O N S
	RandomDigitSum sumTemp;   //CALC - used to hold the sum of the accumulated
							  //	   remainder
	RandomDigitSum temp;	  //CALC - used to hold the randomNumber value
	int 		   length;    //CALC - length of the number
	int            index;     //CALC - used to traverse through the digits
	ostringstream  out;		  //CALC - used to find length of the number

	//I N I T I A L I Z A T I O N S
	sumTemp = 0;
	temp    = randomNumber;

	//Sends the number into the string stream
	out << randomNumber;

	//Finds length of whats in the string stream
	length = (out.str()).length();

	//Clears the string stream
	out.str("");

	//Begin for loop
	for(index = 0; index <= length; index++)
	{
		//Accumulates the remainder everyt time the number is moded by 10
		sumTemp += (temp%10);

		//Divides the number by ten to reduce a decimal place
		temp /= 10;
	}
	/***************************************************************************
	 * FUNCTION
	 * ------------------------------------------------------------------------
	 * This function Sets the sum digits value
	 ***************************************************************************/
	SetSumDigits(sumTemp);
}

