#include "tokenCollection.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Class constructor
tokenCollection::tokenCollection()
{
	int difficulty;				//Difficulty of song: Easy/Normal/Hard/Expert
	int currentPoints;			//The user's current event points.
	int currentTokens;			//The user's current event tokens.
	int pointsPerSong;			//Points per song, entered by user.
	int tokenSong;				//The token cost per event song
	double scoreMultiplier;		//Multiplier based on score.
	double comboMultiplier;		//Multiplier based on combo.
	int estimatedPoints;		//The estimated number of points the user has after calculations.

	currentPoints = 0;
	currentTokens = 0;
	estimatedPoints = 0;
	tokenSong = 1;			//To avoid divide by zero.
}

//Function to set data
	int tokenCollection::setData(int points, int tokens, int Difficulty, int pSong)
	{
		currentPoints = points;
		currentTokens = tokens;
		difficulty = Difficulty;
		pointsPerSong = pSong;

	/*tokenTracker.setCurrentPoints(currentPoints);
	tokenTracker.setCurrentTokens(tokens);
	tokenTracker.setPointsPerSong(pointsPerSong);
	tokenTracker.calculateEstimatedPoints();
	cout << "Estimated total currentPoints: " << tokenTracker.getEstimatedPoints() << endl;*/

//Function to set/get current points.
int tokenCollection::setCurrentPoints(int points)
{
	if (points > 0)
	{
		currentPoints = points;
		return 0;
	}
	else
	{
		return 1;
	}
}
int tokenCollection::getCurrentPoints()
{
	return currentPoints;
}

//Function to set/get current number of tokens.
int tokenCollection::setCurrentTokens(int tokens)
{
	if (tokens > 0)
	{
		currentTokens = tokens;
		return 0;
	}
	else
	{
		return 1;
	}
	
}
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

//Function to get/set song difficulty
int tokenCollection::setDifficulty(int songDifficulty)
{
	if (songDifficulty == 1)
	{
		tokenSong = 15;
	}
	else if (songDifficulty == 2)
	{
		tokenSong = 30;
	}
	else if (songDifficulty == 3)
	{
		tokenSong = 45;
	}
	else if (songDifficulty == 4)
	{
		tokenSong = 75;
	}
	else
	{
		return 1;
	}
	difficulty = songDifficulty;
	return 0;
}
int tokenCollection::getDifficulty()
{
	return difficulty;
}

//Function to set/get (average) event points obtained per song
int tokenCollection::setPointsPerSong(int points)
{
	if (points > 0)
	{
		pointsPerSong = points;
		return 0;
	}
	else
	{
		return 1;
	}
	
}
int tokenCollection::getPointsPerSong()
{
	return pointsPerSong;
}

//Function to calculate/get the estimated number of points.
void tokenCollection::calculateEstimatedPoints()
{
	int plays = 0;
	plays = floor(currentTokens / tokenSong);
	estimatedPoints = currentPoints + pointsPerSong * plays;
}
int tokenCollection::getEstimatedPoints()
{
	return estimatedPoints;
}

/*
tokenCollection::~tokenCollection()
{
}

*/