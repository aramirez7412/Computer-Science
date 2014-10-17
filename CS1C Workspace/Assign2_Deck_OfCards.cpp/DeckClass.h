/*******************************************************************************
 * NAME     : Anthony Ramirez
 * CLASS    : CS1C
 * SECTION  : T/TH 6:00-8:50
 * DATE     : 9/2/14
 * ASSIGN #2: Deck Of Cards
 *******************************************************************************/
#ifndef DECKCLASS_H_
#define DECKCLASS_H_

#include "CardClass.h"
#include <string>
#include <iostream>
using namespace std;

//G L O B A L ~ V A R I A B L E S
const int SIZE = 52;
/*******************************************************************************
 * See Deck&Card_Implementation .cpp file for further implementation details
 *******************************************************************************/
class Deck
{
	public:

	//C O N S T R U C T O R & D E S T R U C T O R
	/***************************************************************************
	 * Deck (constuctor)
	 * -------------------------------------------------------------------------
	 * This method is the constructor and is used to instantiate an instance of
	 * the Deck Class
	 ***************************************************************************/
	Deck();

	/***************************************************************************
	 * ~Deck (destructor)
	 * -------------------------------------------------------------------------
	 * This is the destructor of the class and is used to destruct an instance
	 ***************************************************************************/
	~Deck();

	//M U T A T O R S
	/***************************************************************************
	 * PerfectShuffle
	 * -------------------------------------------------------------------------
	 * This is method is used to shuffle an array of cards one time to create
	 * a perfect shuffle
	 ***************************************************************************/
	void PerfectShuffle();

	/***************************************************************************
	 * InititalizeDeck
	 * -------------------------------------------------------------------------
	 * This method initializes the "deck", "perfectSuffle", and "finalDeck"
	 * array
	 ***************************************************************************/
	void InitializeDeck();

	/***************************************************************************
	 * ShuffleFinalUntilPerfect
	 * -------------------------------------------------------------------------
	 * This method Shuffles the "finalDeck" array until it reaches its initial
	 * state. It then returns an integer which counts the amount of shuffles it
	 * took
	 *
	 * RETURNS: integer
	 ***************************************************************************/
	int ShuffleFinalUntilPerfect();

	/***************************************************************************
	 * InitializeAll
	 * -------------------------------------------------------------------------
	 * This method initializes the "perfectShuffe", and "finalDeck" array
	 ***************************************************************************/
	void InitializeAll();

	/***************************************************************************
	 * ShuffleFinalDeckOnce
	 * -------------------------------------------------------------------------
	 * This method Shuffles the "finalDeck" array once
	 ***************************************************************************/
	void ShuffleFinalDeckOnce();


	//A C C E S S O R S
	/***************************************************************************
	 * PrintDeck
	 * -------------------------------------------------------------------------
	 * This method prints the "deck" array of cards to the console
	 ***************************************************************************/
	void PrintDeck()        const;

	/***************************************************************************
	 * PrintShuffledDeck
	 * -------------------------------------------------------------------------
	 * This method prints "perfectShuffle" array to the console
	 ***************************************************************************/
	void PrintShuffledDeck() const;


	/***************************************************************************
	 * PrintFinalDeck
	 * -------------------------------------------------------------------------
	 * This method prints the "finalDeck" array
	 ***************************************************************************/
	void PrintFinalDeck()    const;

	/***************************************************************************
	 * CheckFinalDeck
	 * -------------------------------------------------------------------------
	 * This method compares the "finalDeck" array against the "deck" array. If
	 * they differ at any point then false will be returned
	 *
	 * RETURNS bool
	 ***************************************************************************/
	bool CheckFinalDeck()    const;


	private:

	Card deck[SIZE];
	Card perfectShuffle[SIZE];
	Card finalDeck[SIZE];
};



#endif /* DECKCLASS_H_ */
