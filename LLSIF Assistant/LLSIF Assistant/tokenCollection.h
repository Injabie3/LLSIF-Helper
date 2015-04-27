#pragma once

//Description:	A class purely for token collection related stuff.

class tokenCollection
{
public:
	tokenCollection();

	//Function to set/get current points.
	void setCurrentPoints(int points);
	int getCurrentPoints();
	
	//Function to set/get current number of tokens.
	void setCurrentTokens(int tokens);
	int getCurrentTokens();
	
	//Function to set/get the estimated number of points.
	void setEstimatedPoints(int points);
	int getEstimatedPoints();

	//Don't know what this is, but I'll leave it here for now.
	//~tokenCollection();
private:
	int currentPoints;			//The user's current event points
	int currentTokens;			//The user's current event tokens
	int estimatedPoints;		//The estimated number of points the user has after calculations.
};

