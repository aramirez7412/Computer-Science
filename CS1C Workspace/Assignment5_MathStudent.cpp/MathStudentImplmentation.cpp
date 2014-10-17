/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #5: Math Student Class
 *******************************************************************************/

#include "MathStudent.h"

int MathStudent::count =0;
MathStudent::MathStudent()
{
	count++;
	SetObjectCount(count);

	address    = new char[5];
	strcpy(address, "add");

	city       = new char[5];
	strcpy(city, "cit");

	state      = new char[5];
	strcpy(state, "sta");

	zipCode    = 0;

	SetName(" ");
	SetStanding(" ");
	SetNumber(" ");
	SetId(0);
	SetAge(0);
	SetGpa(0.0);
	SetGender('X');
	SetAllDate(0,0,0);

}

MathStudent::MathStudent(const char *   newAddress,
						 const char *   newCity,
						 const char *   newState,
						 long           newZipCode,
						 string         newName,
						 string         newStanding,
						 string         newNumber,
						 long           newId,
						 unsigned short newAge,
						 double         newGpa,
						 char           newGender,
						 int            newMonth,
						 int            newDay,
						 int            newYear
						  ):

						Student( newName,
						    	 newStanding,
								 newNumber,
								 newId,
								 newAge,
								 newGpa,
								 newGender,
								 newMonth,
								 newDay,
								 newYear)
{
	address = new char[strlen(newAddress)+1];
	strcpy(address, newAddress);

	city    = new char[strlen(newCity)+1];
	strcpy(city, newCity);

	state   = new char[strlen(newState)+1];
	strcpy(state, newState);

	zipCode = newZipCode;

}


MathStudent::MathStudent(const MathStudent& otherStudent)
{

	address = new char[strlen(otherStudent.GetAddress())+1];
	strcpy(address, otherStudent.GetAddress());

	city    = new char[strlen(otherStudent.GetCity())+1];
	strcpy(city, otherStudent.GetCity());

	state   = new char[strlen(otherStudent.GetState())+1];
	strcpy(state, otherStudent.GetState());

	zipCode = otherStudent.GetZipCode();

	SetName(otherStudent.GetName());
	SetStanding(otherStudent.GetStanding());
	SetNumber(otherStudent.GetNumber());
	SetId(otherStudent.GetId());
	SetAge(otherStudent.GetAge());
	SetGpa(otherStudent.GetGpa());
	SetGender(otherStudent.GetGender());
	SetAllDate(otherStudent.GetMonth(), otherStudent.GetDay(),otherStudent.GetYear());
	SetObjectCount(otherStudent.GetObjectCount());


	cout << "\nCopy constructor has been called.";
}


MathStudent::~MathStudent()
{
	delete [] address;
	delete [] city;
	delete [] state;

	cout << "\nDestructor called! #" << GetObjectCount();
}

/*******************
 *  M U T A T O R S *
 ********************/
void MathStudent::SetAddress(const char * newAddress)
{
	delete[] address;
	address = new char[strlen(newAddress)+1];
	strcpy(address, newAddress);
}

void MathStudent::SetCity(const char * newCity)
{
	delete[] city;
	city = new char[strlen(newCity)+1];
	strcpy(city, newCity);
}

void MathStudent::SetState(const char * newState)
{
	delete[] state;
	state = new char[strlen(newState)+1];
	strcpy(state, newState);
}

void MathStudent::SetZipCode(long newZipCode)
{
	zipCode = newZipCode;
}

void MathStudent::CopyFrom(MathStudent otherStudent)
{
	delete [] address;
	delete [] city;
	delete [] state;

	address = new char[strlen(otherStudent.GetAddress())+1];
	strcpy(address, otherStudent.GetAddress());

	city = new char[strlen(otherStudent.GetCity())+1];
	strcpy(city, otherStudent.GetCity());

	state = new char[strlen(otherStudent.GetState())+1];
	strcpy(state, otherStudent.GetState());

	zipCode = otherStudent.GetZipCode();

	SetName(otherStudent.GetName());
	SetStanding(otherStudent.GetStanding());
	SetNumber(otherStudent.GetNumber());
	SetId(otherStudent.GetId());
	SetAge(otherStudent.GetAge());
	SetGpa(otherStudent.GetGpa());
	SetGender(otherStudent.GetGender());
	SetAllDate(otherStudent.GetMonth(),
			   otherStudent.GetDay(),
			   otherStudent.GetYear());




}

void MathStudent::SetAllMath(string 		newName,
							 string 		newStanding,
							 string 		newNumber,
							 long   		newId,
							 unsigned short newAge,
							 double 		newGpa,
							 char 		    newGender,
							 int			newMonth,
							 int 		    newDay,
							 int 		    newYear,
							 char *         newAddress,
							 char * 		newCity,
							 char *         newState,
							 long           newZipCode)
{
	SetName(newName);
	SetStanding(newStanding);
	SetNumber(newNumber);
	SetId(newId);
	SetAge(newAge);
	SetGpa(newGpa);
	SetGender(newGender);
	SetAllDate(newMonth, newDay, newYear);
	SetAddress(newAddress);
	SetCity(newCity);
	SetState(newState);
	SetZipCode(newZipCode);



}

void MathStudent::SetObjectCount(int newNum)
{
	objectCount = newNum;
}


char * MathStudent::GetAddress() const
{
	return address;
}


char * MathStudent::GetCity() const
{
	return city;
}


char * MathStudent::GetState() const
{
	return state;
}

long MathStudent::GetZipCode() const
{
	return zipCode;
}


int MathStudent::GetObjectCount() const
{
	return objectCount;
}
void MathStudent::PrintAllMath() const
{

	PrintAll();
	const int WIDTH = 17;
	cout << fixed << left;
	cout << setw(WIDTH) << "Street Address: " << GetAddress() << endl;
	cout << setw(WIDTH) << "City: " 		  << GetCity()    << endl;
	cout << setw(WIDTH) << "State: "		  << GetState()   << endl;
	cout << setw(WIDTH) << "Zip code: "       << GetZipCode() << endl;
}





