#include "tokenCollection.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

tokenCollection::tokenCollection()
{

}

void tokenCollection::setCurrentPoints(int points)
{
	currentPoints = points;
}

int tokenCollection::getCurrentPoints()
{
	return currentPoints;
}

void tokenCollection::setCurrentTokens(int tokens)
{
	currentTokens = tokens;
}

int tokenCollection::getCurrentTokens()
{
	return currentTokens;
}

void tokenCollection::setEstimatedPoints(int points)
{
	estimatedPoints = points;
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