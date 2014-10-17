/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/
#ifndef CANDIDATECLASS_H_
#define CANDIDATECLASS_H_

/*******************************************************************************
 * Candidate Class Specification File
 *******************************************************************************/

#include <string>
#include <iomanip>
#include <iostream>
#include <ios>
#include <limits>
using namespace std;

class Candidate
{
private:
	/**************************
	 *      			      *
	 *     -P R I V A T E-    *
	 *      				  *
	 **************************/
	string     name;
	int        votesReceived;
	double     percentage;

	//S T A T I C ~ V A R I A B L E S
	static int    totalVotes;
	static int    greatestVotes;
	static string nameWinner;


	/**************************
	 * 						  *
	 *      +P U B L I C+  	  *
	 *            		      *
	 **************************/
public:

	//C O N S T R U C T O R S
	/***************************************************************************
	 * Candidate Constructor
	 * -------------------------------------------------------------------------
	 * This is the default constructor for the Candidate class and will
	 * initialize private members to zero
	 *
	 * Returns: All private members initialized to zero
	 ***************************************************************************/
	Candidate();

	/***************************************************************************
	 * Candidate Constructor (non-default)
	 * -------------------------------------------------------------------------
	 * This is the non-default constructor for the politician class and will
	 * initialize private members to the parameters being passed in
	 *
	 * Returns: All private members initialized to respective parameter
	 ***************************************************************************/
	Candidate(string newName,
			  int    newVotesReceived);

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
	void SetName(string newName);

	/***************************************************************************
	 * SetVotesReceived
	 * -------------------------------------------------------------------------
	 * This method will set -classStanding by assigning the value of newStanding
	 *
	 * Returns: classStanding = newStanding;
	 ***************************************************************************/
	void SetVotesReceived(int votes);


	/***************************************************************************
	 * SetPercentage
	 * -------------------------------------------------------------------------
	 * This method will set -percentage by calculating it with the accumulated
	 * total of the votes received by all candidates
	 *
	 * Returns: none
	 ***************************************************************************/
	void SetPercentage(double newPerc);


	/***************************************************************************
	 * CalculatePercentage
	 * -------------------------------------------------------------------------
	 * This method will calculate -percentage by calculating it with the
	 *  accumulated total of the votes received by all candidates
	 *
	 * Returns: none
	 ***************************************************************************/
	void CalculatePercentage();

	/***************************************************************************
	 * SetWinner
	 * -------------------------------------------------------------------------
	 * This method will set -winner
	 *
	 * Returns: none
	 ***************************************************************************/
	static void SetWinner(int newWinner);

	/***************************************************************************
	 * SetGreatestVotes
	 * -------------------------------------------------------------------------
	 * This method will set -greatestVotes
	 *
	 * Returns:
	 ***************************************************************************/
	static void SetGreatestVotes(int newGreatest);

	/***************************************************************************
	 * ElectionWinner
	 * -------------------------------------------------------------------------
	 * This method sets the greatest vote and the name affiliated with the score
	 * Returns:
	 ***************************************************************************/
	static void ElectionWinner(int newVote, string newName);


	/***************************************************************************
	 * SetNameWinner
	 * -------------------------------------------------------------------------
	 * This method will set the static variable called nameWinner
	 * Returns: none
	 ***************************************************************************/
	static void SetNameWinner(string name);

	/*********************
	 * A C C E S S O R S *
	 *********************/

	/***************************************************************************
	 * GetNameWinner
	 * -------------------------------------------------------------------------
	 *	This method will return the name of the winner
	 * Returns: string
	 ***************************************************************************/
	static string GetNameWinner();

	/***************************************************************************
	 * GetGreatestVotes
	 * -------------------------------------------------------------------------
	 * This method will retrieve the greatestVotes
	 * Returns: int
	 ***************************************************************************/
	static int GetGreatestVotes();


	/***************************************************************************
	 * GetName (const)
	 * -------------------------------------------------------------------------
	 * This method will return the name of the object
	 *
	 * Returns: string (-name member is returned)
	 ***************************************************************************/
	string GetName() const;

	/***************************************************************************
	 * GetVotesReceived
	 * -------------------------------------------------------------------------
	 * This method will return votes received by the candidate of the object
	 *
	 * Returns: long
	 ***************************************************************************/
	int GetVotesReceived() const;


	/***************************************************************************
	 * GetTotalVotes
	 * -------------------------------------------------------------------------
	 * This method will return votes received by the candidate of the object
	 *
	 * Returns: static int
	 ***************************************************************************/
	static int GetTotalVotes();

	/***************************************************************************
	 * GetPercentage
	 * -------------------------------------------------------------------------
	 * This method will return the percentage of the object
	 *
	 * Returns: double
	 ***************************************************************************/
	double GetPercentage() const;


	/***************************************************************************
	 * IncrementTotalVotes
	 * -------------------------------------------------------------------------
	 * This method will increment the static variable totalVotes
	 *
	 * Returns: None
	 ***************************************************************************/
	void IncrementTotalVotes(double newVotes);

	/***************************************************************************
	 * PrintAll
	 * -------------------------------------------------------------------------
	 * This method will print the attributes of the object
	 *
	 * Returns: none
	 ***************************************************************************/
	void PrintAll() const;
};


#endif /* CANDIDATECLASS_H_ */
