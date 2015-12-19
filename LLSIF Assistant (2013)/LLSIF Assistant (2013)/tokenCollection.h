#pragma once

//Description:	A class purely for token collection related stuff.

class tokenCollection
{
public:
	tokenCollection();
	//Apparently this is a destructor.
	~tokenCollection();

	//Function to set data
	int setData(int points, int tokens, int pSong);
	//Precondition:		points is an int that is greater than 0, and represents the current number of points.
	//					tokens is an int that is greater than 0, and represents the current number of tokens available.
	//					pSong is an int greater than 0, and represents the number of points you can obtain per song.
	//Postcondition:	Sets the appropriate member fields to the values specified in each argument.
	
	int getCurrentPoints();	
	//Precondition:		setData() member function has been invoked before.
	//Postcondition:	Returns the number of current points as an int.

	int getCurrentTokens();				
	//Precondition:		setData() member function has been invoked on the object before.
	//Postcondition:	Returns the number of current tokens as an int.
	
	int getDifficulty();
	//Precondition:		setData() member function has been invoked on the object before.
	//Postcondition:	Returns the difficult as an int:
	//					1 - Easy
	//					2 - Normal
	//					3 - Hard
	//					4 - Expert

	int getPointsPerSong();	
	//Precondition:		setData() member function has been invoked on the object before.
	//Postcondtion:		Returns the number of points a player can receive per song for the difficulty selected.

	int getEstimatedPoints();
	//Precondition:		setData() and calculateEstimatedPoints() member functions have been invoked on the object before.
	//Postcondition:	Returns the estimated number of points the user can obtain with the current number of points and tokens at hand at the selected difficulty as an int.

	int setDifficulty(int diff);
	//Precondition:		None.  diff is an int from 1 to 4 inclusive, with the following meanings:
	//					1 - Easy
	//					2 - Normal
	//					3 - Hard
	//					4 - Expert
	//Postcondition:	Sets the difficulty. Function returns 0 if the difficulty was set, else it returns 1 for an error.

	int setTargetPoints(int points);
	//Precondition:		None.  points is an int greater than 0.
	//Postcondition:	Sets the target points.  Function returns 0 if the difficulty was set, else it returns 1 for an error.

	int getTargetPoints();				//Function to get target event points.
	//Precondition:		setTargetPoints() or setData() member function invoked on the object before.
	//Postcondition:	Returns the target points as an int.

	
	//Calculations
	void calculateEstimatedPoints();	//Function to calculate the estimated number of points.
	//Precondition:		setData() member function, or
	//Postcondition:	Calculates the estimated points obtainable, and stores it in member field estimatedPoints.  Allows for getEstimatedPoints() member function to be invoked.

	void calculateTokensNeeded();		//Function to calculate number of tokens needed to reach user's target event points.
	//Precondition:	setData() member function has been invoked on the object before.
	//Postcondition: Calculates the number of tokens needed to reach targetPoints, based off of the current difficulty selected, and stores it in member field tokensNeeded.
	
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

	
	int setTokenSong(int difficulty); 	//Function to set the token cost per event song, based on the difficulty selected.
};

