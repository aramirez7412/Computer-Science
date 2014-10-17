/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/23/14
 * ASSIGN #5: Math Student Class
 *******************************************************************************/

#ifndef MATHSTUDENT_CPP_
#define MATHSTUDENT_CPP_


#include "StudentClass.h"

class MathStudent: public Student
{
private:
	/**************************
	 *      			      *
	 *     -P R I V A T E-    *
	 *      				  *
	 **************************/

	char *     address;
	char *     city;
	char *     state;
	long       zipCode;
	static int count;
	int        objectCount;

public:

	/**************************
	 * 						  *
	 *      +P U B L I C+  	  *
	 *            		      *
	 **************************/

	//C O N S T R U C T O R S

	/***************************************************************************
	 * MathStudent Constructor
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the MathStudent class and will
	 * initialize private members to zero
	 *
	 * Returns: All private members initialized to zero
	 ***************************************************************************/
	MathStudent();

	/***************************************************************************
	 * MathStudent Constructor (non-default)
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the MathStudent class and will
	 * initialize private members to the respective parameter arguments
	 *
	 * Returns: All private members initialized to the respective parameter
	 ***************************************************************************/
	MathStudent(const char *   newAddress,
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
			    int            newYear);


	/***************************************************************************
	 * MathStudent Constructor (non-default)
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the MathStudent class and will
	 * initialize private members to zero
	 *
	 * Returns: All private members initialized the obejct being passed in
	 * 			as a parameter
	 ***************************************************************************/
	MathStudent(const MathStudent& otherStudent);


	/***************************************************************************
	 * MathStudent de-structor
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the MathStudent class and will
	 * deallocate dynamic memory that was created in the object during runtime
	 *
	 * Returns: none
	 ***************************************************************************/
	~MathStudent();




	//D E S T R U C T O R


	/*********************
	 *  M U T A T O R S  *
	 *********************/

	void SetObjectCount(int newNum);

	void SetAddress(const char * newAddress);

	void SetCity   (const char * newCity);

	void SetState  (const char * newState);

	void SetZipCode(long newZipCode);

	void CopyFrom(MathStudent otherStudent);

	/***************************************************************************
	 *
	 ***************************************************************************/
	void SetAllMath(string 		   newName,
					string 		   newStanding,
					string 		   newNumber,
					long   		   newId,
					unsigned short newAge,
					double 		   newGpa,
					char 		   newGender,
					int			   month,
					int 		   day,
					int 		   year,
					char *         newAddress,
					char * 		   newCity,
					char *         newState,
					long           zipCode);

	/*********************
	 * A C C E S S O R S *
	 *********************/

	char * GetAddress() const;

	char * GetCity   () const;

	char * GetState  () const;

	long   GetZipCode() const;

	void   PrintAllMath() const;

	int    GetObjectCount() const;

	//O V E R L O A D I N G~ A S S I G N M E N T ~ O P E R A T O R
	MathStudent& operator =(const MathStudent& otherStudent)
	{
		cout << "\nUsing overloaded operator, passing by reference.\n";
		this->CopyFrom(otherStudent);

		return *this;

	}
};



#endif /* MATHSTUDENT_CPP_ */
