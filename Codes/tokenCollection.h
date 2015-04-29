#pragma once

//Description:	A class purely for token collection related stuff.

class tokenCollection
{
public:
	tokenCollection();

	//Function to set data
	int setData(int points, int tokens, int songDifficulty, int pSong);

	/*tokenTracker.setCurrentPoints(currentPoints);
	tokenTracker.setCurrentTokens(tokens);
	tokenTracker.setPointsPerSong(pointsPerSong);
	tokenTracker.calculateEstimatedPoints();
	cout << "Estimated total currentPoints: " << tokenTracker.getEstimatedPoints() << endl;*/
	
	int getCurrentPoints();				//Function to get current points.
	int getCurrentTokens();				//Function to get current number of tokens.
	int getDifficulty();				//Function to get difficulty of song.
	int getPointsPerSong();				//Function to get the event points per song.
	int getEstimatedPoints();			//Function to get Estimated points

	int setTargetPoints(int points);	//Function to set target event points. Returns 0 if OK, 1 if error.
	int getTargetPoints();				//Function to get target event points.
	int setTokenSong(int difficulty);	//Function to set the token cost per event song, based on the difficulty selected.
	//Calculations
	void calculateEstimatedPoints();	//Function to calculate the estimated number of points.
	void calculateTokensNeeded();		//Function to calculate number of tokens needed to reach user's target event points.
	



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
	int tokensNeeded;			//The estimated number of tokens needed to get to the user's target event points.
};

