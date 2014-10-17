/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/16/14
 * ASSIGN #4: Election Class
 *******************************************************************************/
#include "CandidateClass.h"
#include <iomanip>
/***********************************
 * Candidate Class Implementation*
 ***********************************/
/***************************************************************************
 * Candidate Constructor
 * -------------------------------------------------------------------------
 * This is the default constructor for the Candidate class and will
 * initialize private members to zero
 *
 * Returns: All private members initialized to zero
 ***************************************************************************/
int    Candidate::totalVotes    = 0;
int    Candidate::greatestVotes = 0;
string Candidate::nameWinner    = " ";

Candidate::Candidate()
{
	SetName(" ");
	SetVotesReceived(0);
}

/***************************************************************************
 * Candidate Constructor
 * -------------------------------------------------------------------------
 * This is the default constructor for the Candidate class and will
 * initialize private members to zero
 *
 * Returns: All private members initialized to zero
 ***************************************************************************/
Candidate::Candidate(string newName,
					 int    newVotesReceived)
{
	SetName(newName);
	SetVotesReceived(newVotesReceived);
}

/*********************
 *  M U T A T O R S  *
 *********************/
/***************************************************************************
 * SetName
 * -------------------------------------------------------------------------
 * This method will set the -name member in the object
 *
 * RETURNS: none
 **************************************************************************/
void Candidate::SetName(string newName)
{
	name = newName;
}

/***************************************************************************
 * SetVotesRecived
 * -------------------------------------------------------------------------
 * This method will set the -votesReceived member
 *
 * RETURNS: none
 **************************************************************************/
void Candidate::SetVotesReceived(int votes)
{
	votesReceived = votes;

	IncrementTotalVotes(votes);
	ElectionWinner(votes, GetName());
}


/***************************************************************************
 * SetPercentage
 * -------------------------------------------------------------------------
 * This method will set the percentage of the Candidate class
 *
 * RETURNS: none
 **************************************************************************/
void Candidate::SetPercentage(double newPerc)
{
	percentage = newPerc;
}

/***************************************************************************
 * CalculatePercentage
 * -------------------------------------------------------------------------
 * This method will calculate -percentage by calculating it with the
 *  accumulated total of the votes received by all candidates
 *
 * Returns: none
 ***************************************************************************/
void Candidate::CalculatePercentage()
{
	double percentage;

	percentage = (double(votesReceived) / double(totalVotes));

	SetPercentage(percentage);
}

/***************************************************************************
 * IncrementTotalVotes
 * -------------------------------------------------------------------------
 * This method will accumulate the total votes for all of the objects
 *
 * Returns: none
 ***************************************************************************/
void Candidate::IncrementTotalVotes(double newVotes)
{
	 totalVotes += newVotes;
}

/*******************************************************************************
 * SetGreatestVotes
 * -----------------------------------------------------------------------------
 * This method will set -greatestVotes
 *
 * Returns:
 *******************************************************************************/
void Candidate::SetGreatestVotes(int newGreatest)
{
	greatestVotes = newGreatest;
}

/*******************************************************************************
 * SetNameWinner
 * -----------------------------------------------------------------------------
 * This method will set the -nameWinner
 *
 * Returns:
 *******************************************************************************/
void Candidate::SetNameWinner(string name)
{
	nameWinner = name;
}

/*******************************************************************************
 * ElectionWinner
 * -----------------------------------------------------------------------------
 * This method will set the election winner
 * Returns:
 *******************************************************************************/
void Candidate::ElectionWinner(int newVote, string name)
{
	if(newVote > greatestVotes)
	{
		greatestVotes = newVote;
		SetNameWinner(name);
	}
}

/*********************
 * A C C E S S O R S *
 *********************/

/*******************************************************************************
 * GetNameWinner
 * -----------------------------------------------------------------------------
 * This method will set the election winner
 * Returns:
 *******************************************************************************/
string Candidate::GetNameWinner()
{
	return nameWinner;
}

/*******************************************************************************
 * GetGreatestVotes
 * -----------------------------------------------------------------------------
 * This method will set the election winner
 * Returns: int greatestVotes
 *******************************************************************************/
int Candidate::GetGreatestVotes()
{
	return greatestVotes;
}

/***************************************************************************
 * GetName (const)
 * -------------------------------------------------------------------------
 * This method will return the name of the object
 *
 * Returns: string (-name member is returned)
 ***************************************************************************/
string Candidate::GetName() const
{
	return name;
}

/***************************************************************************
 * GetVotesReceived
 * -------------------------------------------------------------------------
 * This method will return votes received by the candidate of the object
 *
 * Returns: string (-classStanding)
 ***************************************************************************/
int Candidate::GetVotesReceived() const
{
	return votesReceived;
}
/***************************************************************************
 * GetPercentage
 * -------------------------------------------------------------------------
 * This method will return the percentage of the object
 *
 * Returns: double
 ***************************************************************************/
double Candidate::GetPercentage() const
{
	return percentage;
}

/***************************************************************************
 * GetTotalVotes
 * -------------------------------------------------------------------------
 * This method will return the total votes
 *
 * Returns: static int
 ***************************************************************************/
int Candidate::GetTotalVotes()
{
	return totalVotes;
}
/***************************************************************************
 * PrintAll
 * -------------------------------------------------------------------------
 * This method will print the attributes of the object
 *
 * Returns: none
 ***************************************************************************/
void Candidate::PrintAll() const
{
	const int NAME_WIDTH  = 19;
	const int VOTES_WIDTH = 7;
	const int TOTAL_VOTES = 6;

	/***********************************************************************
	 * O U T P U T
	 * ---------------------------------------------------------------------
	 * Outputs the name, votes received, and the percentage of votes received
	 ***********************************************************************/
	cout << left << setprecision(2)    << fixed;
	cout << setw(NAME_WIDTH)           << GetName()
		 << setw(VOTES_WIDTH)          << GetVotesReceived()
		 << setw(TOTAL_VOTES) << right << GetPercentage() * 100 << "%";
}

