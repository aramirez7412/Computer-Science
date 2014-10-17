/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #5: Math Student Class
 *******************************************************************************/

#ifndef CS1CSTUDENT_H_
#define CS1CSTUDENT_H_

#include "StudentClass.h"

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
	string graduationDate;

public:

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
	CS1CStudent(string 		newName,
				string 	    newStanding,
				string 		newNumber,
				long 		    newId,
				unsigned short newAge,
				double 		newGpa,
				char 		    newGender,
				long 		    newScore,
				char 		    pythonKnowledge,
				int			month,
				int 			day,
				int 			year);


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
	void SetScore(long newScore);

	/***************************************************************************
	 * SetPythonKnowledge
	 * -------------------------------------------------------------------------
	 * This method will set the -pythonKnowledge variable
	 *
	 * RETURNS: none
	 **************************************************************************/
	void SetPythonKnowledge(char check);


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
	long GetAssignmentScore();

	/***************************************************************************
	 * GetPythonKnowledge
	 * -------------------------------------------------------------------------
	 * This method will get -pythonKnowledge in the object
	 *
	 * RETURNS: char
	 **************************************************************************/
	char  GetPythonKnowledge();



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
	void PrintCS1C();
};

#endif /* STUDENTCLASS_H_ */
