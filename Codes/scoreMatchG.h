#ifndef SCOREMATCHG_H
#define SCOREMATCHG_H
#include "LLSIFBase.h"
#include <list>

//****implement the position you end up being in (1,2,3,4) and then rank u got in the song (S,A,B,C,D) will let you calculate points you get for the round****

//target points inherits from base class

//lp needed = targetpts-currents/avgpoints * LPused for that difficulty
//NOTE** we will store the history of average points, and we will store the data in a linked list to be able to update the amount of lp needed

//Description:	A class purely for score match related stuff.

class scoreMatch : public LLSIFBase
{
public:
	//Default Constructor 
	scoreMatch();

	//Initial Constructor 
	scoreMatch(int currentpoints,int targetpoints, int AvgScore);
	
	int setScoreAverage(int recentScore);
	//Precondition:		the recent score will be sent in to the function where previous scores are being held in a doubly linked list
	//Postcondition:	updated average value is returned based on the most recent score, the rest of the values in the list, and the amount of songs played

	void setDifficulty(int diff);
	//Precondition:		None.  diff is an int from 1 to 4 inclusive, with the following meanings:
	//					1 - Easy
	//					2 - Normal
	//					3 - Hard
	//					4 - Expert
	//Postcondition:	Sets the difficulty. Difficulty will be set to -1 as an error indicator to let program know to re-prompt for data entry

	int getScoreAverage();
	//Precondition:		scoreMatchG constructor has been invoked and/or multiple rounds(every score match song) have been inputted
	//Postcondition:	returns the current averagescore value

	int getDifficulty();
	//Precondition:		scoreMatchG Constructor has been invoked on the object before.
	//Postcondition:	Returns the difficult as an int:
	//					1 - Easy
	//					2 - Normal
	//					3 - Hard
	//					4 - Expert

	int calcLP();		
	//Precondition:		scoreMatchG Constructor has been invoked on the object before.	
	//Postcondition:	Returns an estimated LP value to be able to reach the Target points, will return -1 as an error indicator that difficulty is not valid

	virtual void calculateEstimatedPoints();
	//Function to calculate the estimated number of points.
	//Precondition:		tokenCollection Constructor member function has been invoked on the object before.
	//Postcondition:	Calculates the estimated points obtainable, and stores it in member field estimatedPoints.  Allows for getEstimatedPoints() member function to be invoked.

	virtual int getEstimatedPoints();
	//Precondition: tokenCollection Constructor has been invoked on the object before.
	//Postcondition: Returns the number of estimated points as an int.

private:
	int currentpoints;		//COMMENT
	int difficulty;			//Score Match difficulty
	int pointGoal;			//amount of points the user wishes to reach in the event
	int pointDiff;			//different between the pointGoal and currentPoints of the user
	int averageScore;		//Average score per game, user will be able to input scores after each song and a new average score will be calculated
	int recentScore;		//the score the player received on the most recent score match they had just played, will be used to calculate the net average score
	int estimatedPoints;		//stores the calculation of estimated points.
	
	//constants defined for LP costs
	const int LPEasy = 5; 
	const int LPNormal = 10;
	const int LPHard = 15;
	const int LPExpert = 25;

};

std::list<int> songScoreList; //doubly linked list used to hold the values that the user has achieved, main purpose is to be used to calculate the average score but will also be used for an Event History page

#endif //SCOREMATCHG_H
