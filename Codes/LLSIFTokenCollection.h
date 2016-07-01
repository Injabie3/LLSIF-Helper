#ifndef LLSIFTOKENCOLLECTION_H
#define LLSIFTOKENCOLLECTION_H
#include "LLSIFBase.h"


class LLSIFtokenCollection : public LLSIFBase
{
public:

	//Default Constructor 
	LLSIFtokenCollection();

	//Copy Constructor

	//Assignment Operator

	//Initial Constructor
	LLSIFtokenCollection(int currentpoints, int tokens, int pSong, int targetpoints);
	//Precondition:		pSong is the amount of points the user obtains in a song, an int, >0
	//					tokens is the amount of tokens has when they initially start tracking their event data, >=0
	//					currentPoints is the current number of points the player has, expressed as an int, >=0.
	//					targetPoints is the number of points the player is aiming for, >= currentPoints.
	//Postcondition:	If valid inputs are given, the object is instantiated with these values.
	//					If ANY of the inputs are invalid, the object is instantiated with the default constructor.


	int getCurrentTokens();
	//Precondition:		tokenCollection Constructor has been invoked on the object before.
	//Postcondition:	Returns the number of current tokens as an int.

	int getDifficulty();
	//Precondition:		tokenCollection Constructor has been invoked on the object before.
	//Postcondition:	Returns the difficult as an int:
	//					1 - Easy
	//					2 - Normal
	//					3 - Hard
	//					4 - Expert

	int getPointsPerSong();
	//Precondition:		tokenCollection Constructor member function has been invoked on the object before.
	//Postcondtion:		Returns the number of points a player can receive per song for the difficulty selected.

	virtual void calculateEstimatedPoints();
	//Function to calculate the estimated number of points.
	//Precondition:		tokenCollection Constructor member function has been invoked on the object before.
	//Postcondition:	Calculates the estimated points obtainable, and stores it in member field estimatedPoints.  Allows for getEstimatedPoints() member function to be invoked.

	virtual int getEstimatedPoints();
	//Precondition: tokenCollection Constructor has been invoked on the object before.
	//Postcondition: Returns the number of estimated points as an int.

	int setDifficulty(int diff);
	//Precondition:		None.  diff is an int from 1 to 4 inclusive, with the following meanings:
	//					1 - Easy
	//					2 - Normal
	//					3 - Hard
	//					4 - Expert
	//Postcondition:	Sets the difficulty. will set "difficulty" to -1 to indicate an error that difficulty is invalid

	/*
	//int setTargetPoints(int points);
	////Precondition:		tokenCollection Constructor has been invoked on the object before.
	////Postcondition:	Sets the target points.  Function returns 0 if the difficulty was set, else it returns 1 for an error.
	*/

	int setTokenSong(int difficulty); 	//Function to set the token cost per event song, based on the difficulty selected.
	//Precondition:		tokenCollection Constructor invoked on the object before.
	//Postcondition:	returns the amount of tokens a song will cost the player based on the difficulty, will set "tokenSong" to -1 to indicate an error that difficulty is invalid

	void calculateTokensNeeded();		//Function to calculate number of tokens needed to reach user's target event points.
	//Precondition:	tokenCollection Constructor has been invoked on the object before.
	//Postcondition: Calculates the number of tokens needed to reach targetPoints, based off of the current difficulty selected, and stores it in member field tokensNeeded.

private:
	int difficulty;				//Difficulty of song: Easy/Normal/Hard/Expert
	int currentTokens;			//The user's current event tokens.
	int pointsPerSong;			//Points per song, entered by user.
	int tokenSong;				//The token cost per event song
	int estimatedPoints;		//stores the calculation of estimated points.
	double scoreMultiplier;		//Multiplier based on score.
	double comboMultiplier;		//Multiplier based on combo.

	int tokensNeeded;			//The estimated number of tokens needed to get to the user's target event points.


};

#endif //LLSIFTOKENCOLLECTION_H