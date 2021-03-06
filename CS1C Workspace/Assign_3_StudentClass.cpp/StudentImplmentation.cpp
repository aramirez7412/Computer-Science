/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/9/14
 * ASSIGN #3: Student Class
 *******************************************************************************/
#include "StudentClass.h"
/*******************************
 * Student Class Implementation*
 *******************************/

/*******************************************************************************
 * Student (Default Constructor)
 * -----------------------------------------------------------------------------
 * This constructor will initialize all of the private members of the Student
 * class
 *******************************************************************************/
Student::Student(): name		 (" "),
					classStanding(" "),
					phoneNumber  (" "),
					id           (0),
					age		     (0),
					gpa		     (0),
					gender	     (' ')
{
	//Empty body
}
/***************************************************************************
 * Student Constructor (non-default)
 * -------------------------------------------------------------------------
 * This is the non-default constructor for the student class and will
 * initialize private members to the parameters being passed in
 *
 * Returns: All private members initialized to respective parameter
 ***************************************************************************/
Student::Student(string 	    newName,
				 string 	    newStanding,
				 string 	    newNumber,
				 long 		    newId,
				 unsigned short newAge,
				 double 	    newGpa,
				 char 		    newGender,
				 int			month,
				 int            day,
				 int            year)
{
	SetAll(newName, newStanding, newNumber, newId, newAge, newGpa, newGender,
			month, day, year);
}

/***************************************************************************
 * SetMonth
 * -------------------------------------------------------------------------
 * This method will set -month by assigning the value of newName
 *
 * Returns: All private members initialized to respective parameter
 ***************************************************************************/
void Student::SetMonth	(int newMonth)
{
	graduationDate.SetMonth(newMonth);
}

/***************************************************************************
 * SetDay
 * -------------------------------------------------------------------------
 * This method will set -day by assigning the value of newDay
 *
 * Returns: day = newDay;
 ***************************************************************************/
void Student::SetDay(int newDay)
{
	graduationDate.SetDay(newDay);
}

/***************************************************************************
 * SetYear
 * -------------------------------------------------------------------------
 * This method will set -year by assigning the value of newYear
 *
 * Returns: year = newYear;
 ***************************************************************************/
void Student::SetYear	(int newYear)
{
	graduationDate.SetYear(newYear);
}

/***************************************************************************
 * SetAllDate
 * -------------------------------------------------------------------------
 * This method will set all private members
 *
 * Returns: All members will be assigned a value
 ***************************************************************************/
void Student::SetAllDate(int newMonth,
						 int newDay,
						 int newYear)
{
	graduationDate.SetMonth(newMonth);
	graduationDate.SetDay(newDay);
	graduationDate.SetYear(newYear);
	graduationDate.SetDate();
}


/***************************************************************************
 * GetDate
 * -------------------------------------------------------------------------
 * This method will return the phone number of the object
 *
 * Returns: string(-date)
 ***************************************************************************/
string Student::GetDate() const
{
	return graduationDate.GetDate();
}


/***************************************************************************
 * SetName
 * -------------------------------------------------------------------------
 * This method will set -name by assigning the value of newName
 *
 * Returns: All private members initialized to respective parameter
 ***************************************************************************/
void Student::SetName	(string newName)
{
	name = newName;
}

/***************************************************************************
 * SetStanding
 * -------------------------------------------------------------------------
 * This method will set -classStanding by assigning the value of newStanding
 *
 * Returns: classStanding = newStanding;
 ***************************************************************************/
void Student::SetStanding(string newStanding)
{
	classStanding = newStanding;
}

/***************************************************************************
 * SetNumber
 * -------------------------------------------------------------------------
 * This method will set -phoneNumber by assigning the value of newNumber
 *
 * Returns: -phoneNumber = newNumber;
 ***************************************************************************/
void Student::SetNumber(string newNumber)
{
	phoneNumber = newNumber;
}

/***************************************************************************
 * SetAge
 * -------------------------------------------------------------------------
 * This method will set -age by assigning the value of newAge
 *
 * Returns: age = newAge;
 ***************************************************************************/
void Student::SetAge(unsigned short newAge)
{
	 age = newAge;
}

/***************************************************************************
 * SetGpa
 * -------------------------------------------------------------------------
 * This method will set -gpa by assigning the value of newGpa
 *
 * Returns: -gpa = newGpa;
 ***************************************************************************/
void Student::SetGpa(double newGpa)
{
	gpa = newGpa;
}

/***************************************************************************
 * SetGender
 * -------------------------------------------------------------------------
 * This method will set -gender by assigning the value of newGender
 *
 * Returns: -gender = newGender;
 ***************************************************************************/
void Student::SetGender(char newGender)
{
	gender = newGender;
}

/***************************************************************************
 * SetId
 * -------------------------------------------------------------------------
 * This method will set -id by assigning the value of newId
 *
 * Returns: -id = newId;
 ***************************************************************************/
void Student::SetId      (long newId)
{
	id = newId;
}

/***************************************************************************
 * SetAll
 * -------------------------------------------------------------------------
 * This method will set all private members
 *
 * Returns: All members will be assigned a value
 ***************************************************************************/
void Student::SetAll(string 		   newName,
					 string 		   newStanding,
					 string 		   newNumber,
					 long   		   newId,
					 unsigned short    newAge,
					 double 		   newGpa,
					 char 		       newGender,
					 int               month,
					 int               day,
					 int               year)
{
	//Calls all set methods to initialize all
	SetName    (newName);
	SetStanding(newStanding);
	SetNumber  (newNumber);
	SetId      (newId);
	SetAge     (newAge);
	SetGpa     (newGpa);
	SetGender  (newGender);
	SetAllDate(month, day, year);
}

/***************************************************************************
 * GetName (const)
 * -------------------------------------------------------------------------
 * This method will return the name of the object
 *
 * Returns: string (-name member is returned)
 ***************************************************************************/
string 	Student::GetName() const
{
	return name;
}

/***************************************************************************
 * GetStanding
 * -------------------------------------------------------------------------
 * This method will return the class standing of the object
 *
 * Returns: string (-classStanding)
 ***************************************************************************/
string 	Student::GetStanding() const
{
	return classStanding;
}

/***************************************************************************
 * GetNumber
 * -------------------------------------------------------------------------
 * This method will return the phone number of the object
 *
 * Returns: string(-phoneNumber)
 ***************************************************************************/
string 	Student::GetNumber() const
{
	return phoneNumber;
}

/***************************************************************************
 * GetId
 * -------------------------------------------------------------------------
 * This method will return the id of the object
 *
 * Returns: long(-id)
 ***************************************************************************/
long  Student::GetId() const
{
	return id;
}

/***************************************************************************
 * GetNewAge
 * -------------------------------------------------------------------------
 * This method will return the age of the object
 *
 * Returns: string(-age)
 ***************************************************************************/
unsigned short Student::GetAge() const
{
	return age;
}

/***************************************************************************
 * GetNumber
 * -------------------------------------------------------------------------
 * This method will return the phone number of the object
 *
 * Returns: string(-phoneNumber)
 ***************************************************************************/
double Student::GetGpa() const
{
	return gpa;
}

/***************************************************************************
 * GetGender
 * -------------------------------------------------------------------------
 * This method will return the gender of the object
 *
 * Returns: string(-gender)
 ***************************************************************************/
char Student::GetGender() const
{
	return gender;
}


/***************************************************************************
 * PromptUserForInput
 * -------------------------------------------------------------------------
 * This method will prompt the user for each input
 *
 * Returns:
 ***************************************************************************/
void Student::PropagateStudent()
{
	const int	   WIDTH = 21;
	string 		   newName;
	long   		   newId;
	string		   newNumber;
	unsigned short newAge;
	char           newGender;
	string         newStanding;
	double		   newGpa;
	int 		   month, day, year;

	cout << "\nEnter the proper information to continue.\n";


		cout << setw(WIDTH) << "Enter Name: " ;
		getline(cin, newName);
		SetName(newName);

		cout << setw(WIDTH) << "Enter ID: ";
		cin  >> newId;
		SetId(newId);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << setw(WIDTH) << "Enter phone number: ";
		getline(cin, newNumber);
		SetNumber(newNumber);

		cout << setw(WIDTH) << "Enter age: ";
		cin  >> newAge;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		SetAge(newAge);

		cout << setw(WIDTH) << "Enter Gender: ";
		cin.get(newGender);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		SetGender(newGender);

		cout << setw(WIDTH) << "Enter Class Standing: ";
		getline(cin, newStanding);

		SetStanding(newStanding);

		cout << setw(WIDTH) << "Enter GPA: ";
		cin  >> newGpa;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		SetGpa(newGpa);

		cout << "Enter year of month, day, and year of graduation: ";
		cin  >> month >> day >> year;

		SetAllDate(month, day, year);

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

}

/***************************************************************************
 * PrintAll
 * -------------------------------------------------------------------------
 * This method will print the attributes of the object
 *
 * Returns: none
 ***************************************************************************/
void Student::PrintAll() const
{
	const int WIDTH = 17;


	cout << fixed 			  << setprecision(2) << left;
	cout << "Student Information" << endl;
	cout << "-------------------" << endl;
	cout << setw(WIDTH)       << "Name: " 		    << GetName()    << endl;
	cout << setw(WIDTH)       << "ID: " 	        << GetId()      << endl;
	cout << setw(WIDTH)       << "Number: "         << GetNumber()  << endl;
	cout << setw(WIDTH)       << "Age: " 		    << GetAge()     << endl;
	cout << setw(WIDTH)       << "Gender: "	        << GetGender()  << endl;
	cout << setw(WIDTH)       << "Standing: "       << GetStanding()<< endl;
	cout << setw(WIDTH)       << "GPA: " 		    << GetGpa()     << endl;
	cout << setw(WIDTH)       << "Graduation Date: "<< GetDate()    << endl;
}
