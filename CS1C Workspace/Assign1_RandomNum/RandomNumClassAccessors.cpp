/*******************************************************************************
 * NAME   : Anthony Ramirez
 * DATE   : 8/26/2014
 * CLASS  : CS1C
 * SECTION: T/TH 6-850PM
 *******************************************************************************/

#include "RandomNumberNameSpace.h"

//O V E R L O A D E D ~ O P E R A T O R ~  D E F I N T I O N S
RandomNumClass& RandomNumClass::operator =(const RandomNumClass &object)
{
	object.Copy(*this);

	return *this;
}

/*******************************************************************************
 * Operator >
 * -----------------------------------------------------------------------------
 * This overload allows objects to be compared
 *******************************************************************************/
bool RandomNumClass::operator >(RandomNumber::RandomNumClass number)
{
	return randomNumber > number.GetRandomNumber();
}

/*******************************************************************************
 * Operator <
 * -----------------------------------------------------------------------------
 * This overload allows objects to be compared
 *******************************************************************************/
bool RandomNumClass::operator <(RandomNumClass number)
{
	return randomNumber < number.GetRandomNumber();
}
/*******************************************************************************
 * Operator <=
 * -----------------------------------------------------------------------------
 * This overload allows objects to be compared
 *******************************************************************************/
bool RandomNumClass::operator <=(RandomNumClass number)
{
	return randomNumber <= number.GetRandomNumber();
}
/*******************************************************************************
 * Operator ==
 * -----------------------------------------------------------------------------
 * This overload allows objects to be compared
 *******************************************************************************/
bool RandomNumClass::operator ==(RandomNumClass number)
{
	return randomNumber == number.GetRandomNumber();
}
/*******************************************************************************
 * Operator !=
 * -----------------------------------------------------------------------------
 * This overload allows objects to be compared
 *******************************************************************************/
bool RandomNumClass::operator !=(RandomNumClass number)
{
	return randomNumber != number.GetRandomNumber();
}
/*******************************************************************************
 * Copy
 * -----------------------------------------------------------------------------
 * This method copies this objects randomNumber into the passed objects randomNum
 * value
 *
 * RETURNS The objects randomNumber value is changed
 *******************************************************************************/
void RandomNumClass::Copy(RandomNumClass &copy) const
{
	copy.SetRandomInt(randomNumber);
}
/*******************************************************************************
 * GetRandomNumber
 * -----------------------------------------------------------------------------
 * This function returns the randomNumber
 *******************************************************************************/
const RandomInt RandomNumClass::GetRandomNumber()
{
	return randomNumber;
}

/*******************************************************************************
 * GetTripledNumber
 * -----------------------------------------------------------------------------
 * This function returns the tripled number
 *******************************************************************************/
const Triple RandomNumClass::GetTripledNumber()
{
	return numberTripled;
}

/*******************************************************************************
 * GetSumDigits
 * -----------------------------------------------------------------------------
 * This function returns the digits summed
 *******************************************************************************/
const RandomDigitSum RandomNumClass::GetSumDigits()
{
	return digitsSummed;
}

/*******************************************************************************
 * GetNumberReversed
 * -----------------------------------------------------------------------------
 * This function returns the reversedNumber
 *******************************************************************************/
const RandomInt RandomNumClass::GetNumberReversed()
{
	return reversedNumber;
}
