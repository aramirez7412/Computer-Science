/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 10/14/14
 * ASSIGN #8: Friends and Operator Overloading
 *******************************************************************************/

#ifndef CS1CSTUDENT_H_
#define CS1CSTUDENT_H_

#include "StudentClass.h"
#include "Date.h"


class CS1CStudent: public Student
{
private:
	/**************************
	 *      			      *
	 *     -P R I V A T E-    *
	 *      				  *
	 **************************/

	long   assignmentScore;
	char   pythonKnowledge;
	Date   graduationDate;

public:

	/*******************************************
	 * O V E R L O A D E D ~ O P E R A T O R S *
	 *******************************************/
	const CS1CStudent operator + (const int) const;
	bool operator == (const CS1CStudent& studentRHS) const;
	/**************************
	 * 						  *
	 *      +P U B L I C+  	  *
	 *            		      *
	 **************************/

	//C O N S T R U C T O R S
	/***************************************************************************
	 * CS1CStudent Constructor
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the CS1CStudent class and will
	 * initialize private members to zero
	 *
	 * Returns: All private members initialized to zero
	 ***************************************************************************/
	CS1CStudent();

	/***************************************************************************
	 * CS1C Student Constructor (non-default)
	 * -------------------------------------------------------------------------
	 * This is the non-default constructor for the student class and will
	 * initialize private members to the parameters being passed in
	 *
	 * Returns: All private members initialized to respective parameter
	 ***************************************************************************/
	CS1CStudent(string 		   newName,
				string 	       newStanding,
				string 		   newNumber,
				long 		   newId,
				unsigned short newAge,
				double 		   newGpa,
				char 		   newGender,
				long 		   newScore,
				char 		   pythonKnowledge,
				int			   month,
				int 		   day,
				int 		   year);


	virtual ~CS1CStudent();
	/*********************
	 *  M U T A T O R S  *
	 *********************/
	/***************************************************************************
		 * SetScore
		 * -------------------------------------------------------------------------
		 * This method will set the -assignmentScore member in the object
		 *
		 * RETURNS: none
		 **************************************************************************/
	void SetNewDay(int day);

	void SetNewMonth(int month);

	void SetNewYear(int year);
	void SetAllDate(int newMonth,
							 int newDay,
							 int newYear);



	/***************************************************************************
	 * SetScore
	 * -------------------------------------------------------------------------
	 * This method will set the -assignmentScore member in the object
	 *
	 * RETURNS: none
	 **************************************************************************/
	void SetScore(long newScore);

	/***************************************************************************
	 * SetPythonKnowledge
	 * -------------------------------------------------------------------------
	 * This method will set the -pythonKnowledge variable
	 *
	 * RETURNS: none
	 **************************************************************************/
	void SetPythonKnowledge(char check);

	void AddToAge(int add);



	/***************************************************************************
	 * SetAll
	 * -------------------------------------------------------------------------
	 * This method will set all the private members and the members from the
	 * super class
	 *
	 * RETURNS: none
	 **************************************************************************/
	void SetAllCS1C(long 		    newScore,
			        char 		    pythonKnowledge);

	/*********************
	 * A C C E S S O R S *
	 *********************/

	/***************************************************************************
	 * GetAssignmentScore
	 * -------------------------------------------------------------------------
	 * This method will get -assignmentScore in the object
	 *
	 * RETURNS: none
	 **************************************************************************/
	long GetAssignmentScore() const;

	/***************************************************************************
	 * GetPythonKnowledge
	 * -------------------------------------------------------------------------
	 * This method will get -pythonKnowledge in the object
	 *
	 * RETURNS: char
	 **************************************************************************/
	char  GetPythonKnowledge() const;


	/***************************************************************************
	 * PropagateCS1CObject
	 * -------------------------------------------------------------------------
	 * This method will prompt the user for each input
	 *
	 * Returns:
	 ***************************************************************************/
	void PropagateCS1C();

	/***************************************************************************
	 * PrintCS1C
	 * -------------------------------------------------------------------------
	 * This method will print all privata members0256
	 *
	 * RETURNS: string
	 **************************************************************************/
	void PrintAll() const;


};

#endif /* STUDENTCLASS_H_ */
