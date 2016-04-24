#include "LLSIFScoreMatch.h"
#include <cmath>


//Default Constructor
LLSIFScoreMatch::LLSIFScoreMatch()
{
	setTargetPoints(0);
	setCurrentPoints(0);
	averageScore = 0;
	pointDiff = 0;
}

//Copy Constructor

//Assignment Operator

//Precondition:		EXP is the current EXP of the player, expressed as an int, >0.
//					rank is the current player's rank, expressed as an int, >0.
//					currentPoints is the current number of points the player has, expressed as an int, >=0.
//					targetPoints is the number of points the player is aiming for, >= currentPoints.
//Postcondition:	If valid inputs are given, the object is instantiated with these values.
//					If ANY of the inputs are invalid, the object is instantiated with the default constructor.
LLSIFScoreMatch::LLSIFScoreMatch(int currentpoints, int targetpoints, int AvgScore)
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
int LLSIFScoreMatch::setScoreAverage(int recentScore)
{


	std::list<int>::iterator songScoreIter;	//an iterator used to move back and forth throughout the songScoreList
	int avgScore = 0;				//int variable in which the average score value will be held and returned

	if (recentScore > 0)
		songScoreList.push_back(recentScore); //impossible to get (-)tive score in a match, therefore this list should only contain positive intergers
	else
		return -1; //error invoked

	for (songScoreIter = songScoreList.begin(); songScoreIter != songScoreList.end(); songScoreIter++)
	{
		avgScore += (*songScoreIter) / getEventSongsPlayed(); //dereferencing the iterator to get the value of the integer in the list and dividing by total songs played
	}															// calculation is set up this way because it prevents us from having an extra placeholder variable
	averageScore = avgScore;										// based on the property that a/c + b/c = (a + b)/c

	return 0; //valid input, data OK
}


//Precondition:		None.  diff is an int from 1 to 4 inclusive, with the following meanings:
//					1 - Easy
//					2 - Normal
//					3 - Hard
//					4 - Expert
//Postcondition:	Sets the difficulty. Difficulty will be set to -1 as an error indicator to let program know to re-prompt for data entry
int LLSIFScoreMatch::setDifficulty(int diff)
{
	if (diff >= 1 && diff <= 4)		//only sets difficulty to the corresponding integers, 1 to 4
	{
		difficulty = diff;
		return 0;	//valid input, data OK
	}

	else
		return -1;			//error invoked
}

//Precondition:		scoreMatchG constructor has been invoked and/or multiple rounds(every score match song) have been inputted
//Postcondition:	returns the current averagescore value
int LLSIFScoreMatch::getScoreAverage()
{
	return averageScore;
}

//Precondition:		scoreMatchG Constructor has been invoked on the object before.
//Postcondition:	Returns the difficult as an int:
//					1 - Easy
//					2 - Normal
//					3 - Hard
//					4 - Expert
int LLSIFScoreMatch::getDifficulty()
{
	return difficulty;
}

//Precondition:		scoreMatchG Constructor has been invoked on the object before.	
//Postcondition:	Returns an estimated LP value to be able to reach the Target points, will return -1 as an error indicator that difficulty is not valid
int LLSIFScoreMatch::calcLP()
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
		return -1;		//error invoked

	double PtsperLP = (double)averageScore / (double)LPCost; //***COMMENT explaining calculation here***
	int LPReq = (int)ceil((double)pointDiff / PtsperLP);
	return LPReq;
}

//Function to calculate the estimated number of points.
//Precondition:		setData() member function, or
//Postcondition:	Calculates the estimated points obtainable, and stores it in member field estimatedPoints.  Allows for getEstimatedPoints() member function to be invoked.
void LLSIFScoreMatch::calculateEstimatedPoints()
{
	//**fill in implementation
}

//Precondition: tokenCollection Constructor has been invoked on the object before.
//Postcondition: Returns the number of estimated points as an int.
int LLSIFScoreMatch::getEstimatedPoints()
{
	return estimatedPoints;
}