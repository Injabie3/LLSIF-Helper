#include "tokenCollection.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

tokenCollection::tokenCollection()
{

}

//Function to set current points.
void tokenCollection::setCurrentPoints(int points)
{
	currentPoints = points;
}

//Function to get current points.
int tokenCollection::getCurrentPoints()
{
	return currentPoints;
}

//Function to set current number of tokens.
void tokenCollection::setCurrentTokens(int tokens)
{
	currentTokens = tokens;
}

//Function to get current number of tokens.
int tokenCollection::getCurrentTokens()
{
	return currentTokens;
}

//Function to set the estimated number of points.
void tokenCollection::setEstimatedPoints(int points)
{
	estimatedPoints = points;
}

//Function to get the estimated number of points.
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