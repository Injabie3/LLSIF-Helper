#pragma once

//Description:	A class purely for token collection related stuff.

class tokenCollection
{
public:
	tokenCollection();

	void setCurrentPoints(int points);
	int getCurrentPoints();
	
	void setCurrentTokens(int tokens);
	int getCurrentTokens();
	
	void setEstimatedPoints(int points);
	int getEstimatedPoints();

	//Don't know what this is, but I'll leave it here for now.
	//~tokenCollection();
private:
	int currentPoints;
	int currentTokens;
	int estimatedPoints;
};

