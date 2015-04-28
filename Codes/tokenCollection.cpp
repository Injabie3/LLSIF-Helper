#include "tokenCollection.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//Class constructor
tokenCollection::tokenCollection()
{
	currentPoints = 0;
	currentTokens = 0;
	estimatedPoints = 0;
}

//Function to set/get current points.
void tokenCollection::setCurrentPoints(int points)
{
	currentPoints = points;
}
int tokenCollection::getCurrentPoints()
{
	return currentPoints;
}

//Function to set/get current number of tokens.
void tokenCollection::setCurrentTokens(int tokens)
{
	currentTokens = tokens;
}
int tokenCollection::getCurrentTokens()
{
	return currentTokens;
}

//Function to set/get target event points.
void tokenCollection::setTargetPoints(int points)
{
	targetPoints = points;
}
int tokenCollection::getTargetPoints()
{
	return targetPoints;
}

//Function to get/set song difficulty
void tokenCollection::setDifficulty(int songDifficulty)
{
	difficulty = songDifficulty;
}
int tokenCollection::getDifficulty()
{
	return difficulty;
}

//Function to set/get (average) event points obtained per song
void tokenCollection::setPointsPerSong(int points)
{
	pointsPerSong = points;
}
int tokenCollection::getPointsPerSong()
{
	return pointsPerSong;
}

//Function to set/get the estimated number of points.
void tokenCollection::setEstimatedPoints(int points)
{
	estimatedPoints = points;
}
int tokenCollection::getEstimatedPoints()
{
	return estimatedPoints;
}

//Function to calculate estimated total of points.
void tokenCollection::calculate(int points, int tokens)
{
	
}
/*
tokenCollection::~tokenCollection()
{
}

*/