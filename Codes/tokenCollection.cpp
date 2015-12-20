#include "tokenCollection.h"
#include "LLSIFBase.h"
#include <cmath>

//Class constructor
tokenCollection::tokenCollection()
{
	difficulty = 0;				//Difficulty of song: Easy/Normal/Hard/Expert
	currentTokens = 0;			//The user's current event tokens.
	pointsPerSong = 1;			//Points per song, entered by user.
	tokenSong = 1;				//The token cost per event song
	scoreMultiplier = 0.0;		//Multiplier based on score.
	comboMultiplier = 0.0;		//Multiplier based on combo.
	estimatedPoints= 0;			//The estimated number of points the user has after calculations.

}

//Class destructor
tokenCollection::~tokenCollection()
{

}
//Initial Constructor 
tokenCollection::tokenCollection(int points, int tokens, int pSong)
{
	currentTokens = tokens;
	pointsPerSong = pSong;
}



//Function to get current number of tokens.
int tokenCollection::getCurrentTokens()
{
	return currentTokens;
}

//Function to set/get target event points.
int tokenCollection::setTargetPoints(int points)
{
	if (points > 0)
	{
		targetPoints = points;
		return 0;
	}
	else
	{
		return 1;
	}
}
int tokenCollection::getTargetPoints()
{
	return targetPoints;
}

//Function to set the token cost per event song, based on the difficulty selected.
//Returns 0 if function sets tokenSong correctly.
//Returns 1 if function is unable to set tokenSong.
int tokenCollection::setTokenSong(int difficulty)
{
	if (difficulty == 1)		//Easy song
	{
		tokenSong = 15;
	}
	else if (difficulty == 2)	//Normal song
	{
		tokenSong = 30;
	}
	else if (difficulty == 3)	//Hard song
	{
		tokenSong = 45;
	}
	else if (difficulty == 4)	//Expert song
	{
		tokenSong = 75;
	}
	else						//Return error.
	{
		return 1;
	}
	return 0;					//Return OK.
}

//Function to set song difficulty
//If function detects difficulty is incorrect, it will not set difficulty, and return 1
//If function can set tokenSong correctly, it will set difficulty and return 0
int tokenCollection::setDifficulty(int diff)
{
	if (setTokenSong(diff) == 1)
		return 1;
	difficulty = diff;
	return 0;
}
//Function to get song difficulty
int tokenCollection::getDifficulty()
{
	return difficulty;
}

//Function to get (average) event points obtained per song
int tokenCollection::getPointsPerSong()
{
	return pointsPerSong;
}

//Function to calculate the estimated number of points.
//Precondition:		setData() member function, or
//Postcondition:	Calculates the estimated points obtainable, and stores it in member field estimatedPoints.  Allows for getEstimatedPoints() member function to be invoked.
void tokenCollection::calculateEstimatedPoints()
{
	double plays = 0;
	plays = (double)(currentTokens) / (double)(tokenSong);
	estimatedPoints = (int)round(getCurrentPoints() + pointsPerSong * plays);
}
int tokenCollection::getEstimatedPoints()
{
	return estimatedPoints;
}

//Function to calculate number of tokens needed to reach user's target event points.
void tokenCollection::calculateTokensNeeded()
{
	tokensNeeded = (targetPoints - getCurrentPoints());
}



