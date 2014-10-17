/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/
#ifndef RANDOMINTEGERNAMESPACE_CPP_
#define RANDOMINTEGERNAMESPACE_CPP_

#include <string>
#include <cstdlib>
#include <time.h>
#include <sstream>
#include <ostream>
#include <math.h>
#include <iostream>
using namespace std;

//N A M E S P A C E
namespace RandomNumber
{
	//T Y P E D E F S
	typedef long RandomInt;
	typedef long Triple;
	typedef long RandomDigitSum;

	//C L A S S E S
	class RandomNumClass;

	//E N U M S
	enum MenuOption
	{
		EXIT,
		SUM_DIGITS,
		TRIPLE_NUMBER,
		REVERSE_DIGITS
	};
}
using namespace RandomNumber;

//C L A S S ~ D E F I N I T I O N
class RandomNumber::RandomNumClass
{
	public:

	//C O N S T R U C T O R S & D E S T R U C T O R S
	RandomNumClass();
	RandomNumClass(int num, int numTrip, int digSum, int reversedDigits);
	~RandomNumClass();

	//O V E R L O A D E D ~ O P E R A T O R S
	/***************************************************************************
	 * Assignment Operator
	 * ------------------------------------------------------------------------
	 * Used to assign values into objects
	 **************************************************************************/
	RandomNumClass& operator =(const RandomNumClass &object);
	/***************************************************************************
	 * Greater Than Operator
	 * ------------------------------------------------------------------------
	 * Returns a bool if the current objects random integer value is greater
	 * than the object being passed in.
	 **************************************************************************/
 	bool 			operator > (RandomNumClass number);
 	/***************************************************************************
	 * Less Than Operator
	 * ------------------------------------------------------------------------
	 * Returns a bool if the current objects random integer value is less
	 * than the object being passed in.
	 **************************************************************************/
 	bool 			operator < (RandomNumClass number);
 	/***************************************************************************
	 * Less Than Or Equal Too Operator
	 * ------------------------------------------------------------------------
	 * Returns a bool if the current objects random integer value is less
	 * than or equal to the object being passed in.
	 **************************************************************************/
 	bool 			operator <=(RandomNumClass number);
 	/***************************************************************************
	 * Greater Than Or Equal Too Operator
	 * ------------------------------------------------------------------------
	 * Returns a bool if the current objects random integer value is greater
	 * than or equal to the object being passed in.
	 **************************************************************************/
 	bool 			operator >=(RandomNumClass number);
 	/***************************************************************************
	 * Comparison Operator
	 * ------------------------------------------------------------------------
	 * Returns a bool if the current objects random integer value is equal
	 * too the object being passed in.
	 **************************************************************************/
 	bool			operator ==(RandomNumClass number);
 	/***************************************************************************
	 * Not equal too Operator
	 * ------------------------------------------------------------------------
	 * Returns a bool if the current objects random integer value is not equal o
	 * too the object being passed in.
	 **************************************************************************/
 	bool 			operator !=(RandomNumClass number);


	//M A N I P U L A T O R S
 	/***************************************************************************
 	 * SetAll
 	 * -------------------------------------------------------------------------
 	 * This method Sets all of the values with not parameters
 	 ***************************************************************************/
	void SetAll();
 	/***************************************************************************
 	 * SetAll (overloaded)
 	 * -------------------------------------------------------------------------
 	 * This method Sets all of the values
 	 ***************************************************************************/
	void SetAll(int num, int numTrip, int digSum, int reversedDigits);
 	/***************************************************************************
 	 * GenerateRandomInt
 	 * -------------------------------------------------------------------------
 	 * This method generates a random integer
 	 ***************************************************************************/
	void GenerateRandomInt();//
 	/***************************************************************************
 	 * SetRandomInt
 	 * -------------------------------------------------------------------------
 	 * This method sets a random integer
 	 ***************************************************************************/
	void SetRandomInt(int num);//
 	/***************************************************************************
 	 * SetNumberTripled
 	 * -------------------------------------------------------------------------
 	 * This method sets the TripledNumber
 	 ***************************************************************************/
	void SetNumberTripled(Triple num);//
 	/***************************************************************************
 	 * SetSumDigits
 	 * -------------------------------------------------------------------------
 	 * This method Sets the digits summed
 	 ***************************************************************************/
	void SetSumDigits(RandomDigitSum digSummed);//
 	/***************************************************************************
 	 * SetReversedDigits
 	 * -------------------------------------------------------------------------
 	 * This method sets the reversed number
 	 ***************************************************************************/
	void SetReversedDigits(RandomInt reversedNum);//
 	/***************************************************************************
 	 * TripleNum
 	 * -------------------------------------------------------------------------
 	 * This method triples the number
 	 ***************************************************************************/
	void TripleNum();//
 	/***************************************************************************
 	 * ReverseNumber
 	 * -------------------------------------------------------------------------
 	 * This method reversed the number
 	 ***************************************************************************/
	void ReverseNumber();//
 	/***************************************************************************
 	 * SumDigits
 	 * -------------------------------------------------------------------------
 	 * This method sums the digits
 	 ***************************************************************************/
    void SumDigits();//

	//A C C E S S O R S
 	/***************************************************************************
 	 * Copy
 	 * -------------------------------------------------------------------------
 	 * This method copies a value of the current object to the value of another
 	 * object
 	 ***************************************************************************/
    void                 Copy(RandomNumClass &copy) const;
 	/***************************************************************************
 	 * GetRandomNumber
 	 * -------------------------------------------------------------------------
 	 * This method returns the random integer
 	 ***************************************************************************/
	const RandomInt      GetRandomNumber();
 	/***************************************************************************
 	 * Triple
 	 * -------------------------------------------------------------------------
 	 * This method returns the tripled number
 	 ***************************************************************************/
	const Triple         GetTripledNumber();
 	/***************************************************************************
 	 * GetSumDigits
 	 * -------------------------------------------------------------------------
 	 * This method returns the summed digits
 	 ***************************************************************************/
	const RandomDigitSum GetSumDigits();
 	/***************************************************************************
 	 * GetNumberReversed
 	 * -------------------------------------------------------------------------
 	 * This method returns the number reversed
 	 ***************************************************************************/
	const RandomInt      GetNumberReversed();

	private:

	RandomInt      randomNumber;	//Random integer
	Triple         numberTripled;   //Number tripled
	RandomDigitSum digitsSummed;    //Digits summed
	RandomInt      reversedNumber;  //Reversed number
};

#endif /* RANDOMINTEGERNAMESPACE_CPP_ */
