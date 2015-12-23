#ifndef SCOREMATCHG_H
#define SCOREMATCHG_H
#include "LLSIFBase.h"

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
	
	int setScoreAverage(int AvgScore, int recentScore);
	//Precondition:		the previous average score value will be passed into the function, accumulating from the start of the event
	//Postcondition:	updated average value is returned based on the old value, the most recent score, and the amount of songs played

	int setDifficulty(int diff);
	//Precondition:		None.  diff is an int from 1 to 4 inclusive, with the following meanings:
	//					1 - Easy
	//					2 - Normal
	//					3 - Hard
	//					4 - Expert
	//Postcondition:	Sets the difficulty. Function returns 0 if the difficulty was set, else it returns 1 for an error.

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
	//Postcondition:	Returns an estimated LP value to be able to reach the Target points 
private:
	int currentpoints;		//COMMENT
	int difficulty;			//Score Match difficulty
	int pointGoal;			//amount of points the user wishes to reach in the event
	int pointDiff;			//different between the pointGoal and currentPoints of the user
	int averageScore;		//Average score per game, user will be able to input scores after each song and a new average score will be calculated
	int recentScore;		//the score the player received on the most recent score match they had just played, will be used to calculate the net average score
	

	//constants defined for LP costs
	const int LPEasy = 5; 
	const int LPNormal = 10;
	const int LPHard = 15;
	const int LPExpert = 25;

};
#endif //SCOREMATCHG_H
