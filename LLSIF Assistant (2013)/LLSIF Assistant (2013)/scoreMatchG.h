#pragma once

//Description:	A class purely for score match related stuff.

class scoreMatch{
public:
	scoreMatch();
	~scoreMatch();
	int setData(int currentPts, int PtGoal, int AvgScore);		//Set data.
	int setDifficulty(int diff);
	int getDifficulty();
	double calcLP();		//Calculates LP required

private:
	int currentPoints;		//Current Points
	int difficulty;			//Score Match difficulty
	int pointGoal;
	int pointDiff;			
	int averageScore;		//Average score per game
	int LPReq;				//LP Required to reach goal

	const int LPEasy = 5; //set constants for LP costs
	const int LPNormal = 10;
	const int LPHard = 15;
	const int LPExpert = 25;

};