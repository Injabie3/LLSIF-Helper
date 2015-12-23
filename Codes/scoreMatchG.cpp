#include "ScoreMatchG.h"
#include <cmath>

//Default Constructor
scoreMatch::scoreMatch()
{
	setTargetPoints(0);
	setCurrentPoints(0);
	averageScore = 0;
	pointDiff = 0;
}

//Class destructor
scoreMatch::~scoreMatch()
{

}

//Precondition:		EXP is the current EXP of the player, expressed as an int, >0.
//					rank is the current player's rank, expressed as an int, >0.
//					currentPoints is the current number of points the player has, expressed as an int, >=0.
//					targetPoints is the number of points the player is aiming for, >= currentPoints.
//Postcondition:	If valid inputs are given, the object is instantiated with these values.
//					If ANY of the inputs are invalid, the object is instantiated with the default constructor.
scoreMatch::scoreMatch(int currentpoints, int targetpoints, int AvgScore)
{
	//fix implementation to properly handle the post-condition
	setTargetPoints(targetpoints);
	setCurrentPoints(currentpoints);
	averageScore = AvgScore;		  //average score will initially be the users first score, will be updated after every song 

	if (targetpoints > currentpoints) //only calculate the point difference when it will return a positive value
		pointDiff = getTargetPoints() - getCurrentPoints();
	else
		pointDiff = -1;				  //pointDiff will be set to -1 as an error indicator to let program know to re-prompt for data entry
}

//Precondition:		the previous average score value will be passed into the function, accumulating from the start of the event
//Postcondition:	updated average value is returned based on the old value, the most recent score, and the amount of songs played
int scoreMatch::setScoreAverage(int AvgScore, int recentScore)
{
	//***implementation soon, waiting on pending issues***
}


//Function to set difficulty
//Function returns 0 if difficulty was set correctly.
//Function returns 1 if difficulty could not be set.
int scoreMatch::setDifficulty(int diff)
{
	if (diff >= 1 && diff <= 4)		//only sets difficulty to the corresponding integers, 1 to 4
		difficulty = diff;
	else
		return 1;
	return 0;
}

//Precondition:		scoreMatchG constructor has been invoked and/or multiple rounds(every score match song) have been inputted
//Postcondition:	returns the current averagescore value
int scoreMatch::getScoreAverage()
{
	return averageScore;
}

//Precondition:		scoreMatchG Constructor has been invoked on the object before.
//Postcondition:	Returns the difficult as an int:
//					1 - Easy
//					2 - Normal
//					3 - Hard
//					4 - Expert
int scoreMatch::getDifficulty()
{
	return difficulty;
}

//Precondition:		scoreMatchG Constructor has been invoked on the object before.	
//Postcondition:	Returns an estimated LP value to be able to reach the Target points
int scoreMatch::calcLP()
{
	int LPCost;
	//setting difficulty based on user input
	if (difficulty == 1)
		LPCost = LPEasy;
	else if (difficulty == 2)
		LPCost = LPNormal;
	else if (difficulty == 3)
		LPCost = LPHard;
	else if (difficulty == 4)
		LPCost = LPExpert;
	else
		return -1;		//if none of the difficulty settings were selected, return the error
	
	double PtsperLP = (double)averageScore / (double)LPCost; //***COMMENT explaining calculation here***
	int LPReq = (int)ceil((double)pointDiff / PtsperLP);
	return LPReq;
}