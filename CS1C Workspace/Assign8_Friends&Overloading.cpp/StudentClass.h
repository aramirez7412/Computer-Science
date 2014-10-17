/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 10/14/14
 * ASSIGN #8: Friends and Operator Overloading
 *******************************************************************************/

#ifndef STUDENTCLASS_H_
#define STUDENTCLASS_H_

#include "Date.h"
#include <string>
#include <iomanip>
#include <iostream>
#include <ios>
#include <limits>
using namespace std;

class Student
{
private:
	/*****************t*********
	 *      			      *
	 *     -P R I V A T E-    *
	 *      				  *
	 **************************/

	string 		   name;
	string         classStanding;
	string         phoneNumber;
	long   		   id;
	unsigned short age;
	double         gpa;
	char           gender;

	/**************************
	 * 						  *
	 *      +P U B L I C+  	  *
	 *            		      *
	 **************************/
public:

	bool operator == (const Student& studentRHS);

	/**********************************
	 * F R I E N D ~ F U N C T I O N S*
	 **********************************/
	/***************************************************************************
	 * CheckID Friend Function
	 * -------------------------------------------------------------------------
	 * This method will check the id of a CS1C students ID number and a Math
	 * students ID number
	 *
	 * Returns:  a bool
	 ***************************************************************************/
	friend bool checkId(const Student& CS1CStudent, const Student& MathStudent);


	/***************************
	 * C O N S T R U C T O R S *
	 ***************************/
	/***************************************************************************
	 * Student Constructor
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the student class and will initialize
	 * private members to zero
	 *
	 * Returns: All private members initialized to zero
	 ***************************************************************************/
	Student();

	virtual ~Student();

	/***************************************************************************
	 * Student Constructor (non-default)
	 * -------------------------------------------------------------------------
	 * This is the non-default constructor for the student class and will
	 * initialize private members to the parameters being passed in
	 *
	 * Returns: All private members initialized to respective parameter
	 ***************************************************************************/
	Student(string 	       newName,
			string 	       newStanding,
			string 	       newNumber,
			long 		   newId,
			unsigned short newAge,
			double 	       newGpa,
			char 		   newGender);


	/*********************
	 *  M U T A T O R S  *
	 *********************/

	/***************************************************************************
	 * SetName
	 * -------------------------------------------------------------------------
	 * This method will set -name by assigning the value of newName
	 *
	 * Returns: All private members initialized to respective parameter
	 ***************************************************************************/
	void SetName	(string newName);

	/***************************************************************************
	 * SetStanding
	 * -------------------------------------------------------------------------
	 * This method will set -classStanding by assigning the value of newStanding
	 *
	 * Returns: classStanding = newStanding;
	 ***************************************************************************/
	void SetStanding(string newStanding);

	/***************************************************************************
	 * SetNumber
	 * -------------------------------------------------------------------------
	 * This method will set -phoneNumber by assigning the value of newNumber
	 *
	 * Returns: -phoneNumber = newNumber;
	 ***************************************************************************/
	void SetNumber	(string newNumber);

	/***************************************************************************
	 * SetAge
	 * -------------------------------------------------------------------------
	 * This method will set -age by assigning the value of newAge
	 *
	 * Returns: age = newAge;
	 ***************************************************************************/
	void SetAge		(unsigned short newAge);

	/***************************************************************************
	 * SetGpa
	 * -------------------------------------------------------------------------
	 * This method will set -gpa by assigning the value of newGpa
	 *
	 * Returns: -gpa = newGpa;
	 ***************************************************************************/
	void SetGpa     (double newGpa);

	/***************************************************************************
	 * SetGender
	 * -------------------------------------------------------------------------
	 * This method will set -gender by assigning the value of newGender
	 *
	 * Returns: -gender = newGender;
	 ***************************************************************************/
	void SetGender  (char newGender);

	/***************************************************************************
	 * SetId
	 * -------------------------------------------------------------------------
	 * This method will set -id by assigning the value of newId
	 *
	 * Returns: -id = newId;
	 ***************************************************************************/
	void SetId      (long newId);


	/***************************************************************************
	 * SetAll
	 * -------------------------------------------------------------------------
	 * This method will set all private members
	 *
	 * Returns: All members will be assigned a value
	 ***************************************************************************/
	void SetAll(string 		   newName,
				string 		   newStanding,
				string 		   newNumber,
				long   		   newId,
				unsigned short newAge,
				double 		   newGpa,
				char 		   newGender);


	/*********************
	 * A C C E S S O R S *
	 *********************/

	/***************************************************************************
	 * GetName (const)
	 * -------------------------------------------------------------------------
	 * This method will return the name of the object
	 *
	 * Returns: string (-name member is returned)
	 ***************************************************************************/
	string 		   GetName() const;

	/***************************************************************************
	 * GetStanding
	 * -------------------------------------------------------------------------
	 * This method will return the class standing of the object
	 *
	 * Returns: string (-classStanding)
	 ***************************************************************************/
	string 		   GetStanding() const;

	/***************************************************************************
	 * GetNumber
	 * -------------------------------------------------------------------------
	 * This method will return the phone number of the object
	 *
	 * Returns: string(-phoneNumber)
	 ***************************************************************************/
	string 		   GetNumber() const;

	/***************************************************************************
	 * GetId
	 * -------------------------------------------------------------------------
	 * This method will return the id of the object
	 *
	 * Returns: long(-id)
	 ***************************************************************************/
	long   		   GetId() const;

	/***************************************************************************
	 * GetNewAge
	 * -------------------------------------------------------------------------
	 * This method will return the age of the object
	 *
	 * Returns: string(-age)
	 ***************************************************************************/
	unsigned short GetAge() const;

	/***************************************************************************
	 * GetNumber
	 * -------------------------------------------------------------------------
	 * This method will return the phone number of the object
	 *
	 * Returns: string(-phoneNumber)
	 ***************************************************************************/
	double 		   GetGpa() const;

	/***************************************************************************
	 * GetGender
	 * -------------------------------------------------------------------------
	 * This method will return the gender of the object
	 *+++
	 * Returns: string(-gender)
	 ***************************************************************************/
	char 		   GetGender() const;


	/***************************************************************************
	 * PropagateStudent
	 * -------------------------------------------------------------------------
	 * This method will prompt the user for each input
	 *
	 * Returns:
	 ***************************************************************************/
	void PropagateStudent();

	/***************************************************************************
	 * PrintAll
	 * -------------------------------------------------------------------------
	 * This method will print the attributes of the object
	 *
	 * Returns: none
	 ***************************************************************************/
	virtual void PrintAll() const;
};

#endif /* STUDENTCLASS_H_ */
