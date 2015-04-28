#pragma once

//Description:	A class purely for token collection related stuff.

class tokenCollection
{
public:
	tokenCollection();

	//Function to set/get current points.
	int setCurrentPoints(int points);	//Returns 0 if OK, 1 if error.
	int getCurrentPoints();
	
	//Function to set/get current number of tokens.
	int setCurrentTokens(int tokens);	//Returns 0 if OK, 1 if error.
	int getCurrentTokens();
	
	//Function to set/get target event points
	int setTargetPoints(int points);	//Returns 0 if OK, 1 if error.
	int getTargetPoints();

	//Function to set/get difficulty of song.
	int setDifficulty(int songDifficulty);	//Returns 0 if OK, 1 if error.
	int getDifficulty();

	//Function to set/get the event points per song.
	int setPointsPerSong(int points);	//Returns 0 if OK, 1 if error.
	int getPointsPerSong();

	//Function to calculate/get the estimated number of points.
	void calculateEstimatedPoints();
	int getEstimatedPoints();	

	//Don't know what this is, but I'll leave it here for now.
	//~tokenCollection();
private:
	int difficulty;				//Difficulty of song: Easy/Normal/Hard/Expert
	int currentPoints;			//The user's current event points.
	int currentTokens;			//The user's current event tokens.
	int pointsPerSong;			//Points per song, entered by user.
	int targetPoints;			//The target event points, entered by user.
	int tokenSong;				//The token cost per event song
	double scoreMultiplier;		//Multiplier based on score.
	double comboMultiplier;		//Multiplier based on combo.
	int estimatedPoints;		//The estimated number of points the user has after calculations.
};

