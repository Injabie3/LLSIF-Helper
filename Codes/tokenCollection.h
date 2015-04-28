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

	//Function to set/get the event points per song.
	void setPointsPerSong(int points);
	int getPointsPerSong();

	//Function to set/get target event points
	void setTargetPoints(int points);
	int getTargetPoints();

	//Function to calculate estimated total of points.
	void calculate(int points, int tokens);

	//Don't know what this is, but I'll leave it here for now.
	//~tokenCollection();
private:
	int difficulty;				//Difficulty of song: Easy/Normal/Hard/Expert
	int currentPoints;			//The user's current event points.
	int currentTokens;			//The user's current event tokens.
	int pointsPerSong;			//Points per song, entered by user.
	int targetPoints;			//The target event points, entered by user.
	double scoreMultiplier;		//Multiplier based on score.
	double comboMultiplier;		//Multiplier based on combo.
	int estimatedPoints;		//The estimated number of points the user has after calculations.
};

