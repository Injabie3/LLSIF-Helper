#include "tokenCollection.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Class constructor
tokenCollection::tokenCollection()
{
	difficulty = 1;				//Difficulty of song: Easy/Normal/Hard/Expert
	currentPoints = 0;			//The user's current event points.
	currentTokens = 0;			//The user's current event tokens.
	pointsPerSong = 0;			//Points per song, entered by user.
	tokenSong = 1;				//The token cost per event song
	scoreMultiplier = 0.0;		//Multiplier based on score.
	comboMultiplier = 0.0;		//Multiplier based on combo.
	estimatedPoints;			//The estimated number of points the user has after calculations.

}

//Function to set data
int tokenCollection::setData(int points, int tokens, int Difficulty, int pSong)
{
	currentPoints = points;
	currentTokens = tokens;
	difficulty = Difficulty;
	if (setTokenSong(difficulty))
	{
		return 3;
	}
	pointsPerSong = pSong;
	return 0;
}

//Function to get current points.
int tokenCollection::getCurrentPoints()
{
	return currentPoints;
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

//Function to calculate/get the estimated number of points.
void tokenCollection::calculateEstimatedPoints()
{
	int plays = 0;
	plays = floor((double)(currentTokens / tokenSong));
	estimatedPoints = currentPoints + pointsPerSong * plays;
}
int tokenCollection::getEstimatedPoints()
{
	return estimatedPoints;
}

//Function to calculate number of tokens needed to reach user's target event points.
void tokenCollection::calculateTokensNeeded()
{
	tokensNeeded = (targetPoints - currentPoints);
}

tokenCollection::~tokenCollection()
{
}

