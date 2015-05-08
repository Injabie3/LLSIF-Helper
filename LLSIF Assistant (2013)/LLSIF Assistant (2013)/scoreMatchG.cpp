#include "ScoreMatchG.h"
#include <cmath>

//Class constructor
scoreMatch::scoreMatch()
{
	currentPoints = 0;
	difficulty = 0;
	pointDiff = 0;
	pointGoal = 0;
	averageScore = 0;
	LPReq = 0;
}

//Class destructor
scoreMatch::~scoreMatch()
{

}

//Function to set data. Returns 1 if pointDiff is negative
int scoreMatch::setData(int CurrentPts, int PtGoal, int AvgScore){
	currentPoints = CurrentPts;
	pointGoal = PtGoal;
	averageScore = AvgScore;
	if (PtGoal - CurrentPts < 0)
		return 1;
	pointDiff = PtGoal - CurrentPts;
	return 0;
}

//Function to set difficulty
int scoreMatch::setDifficulty(int diff)
{
	if (diff == 1 || diff == 2 || diff == 3 || diff == 4)
		difficulty = diff;
	else
		return 1;
	return 0;
}

//Function to get difficulty
int scoreMatch::getDifficulty()
{
	return difficulty;
}
//Function to calculate LP needed.
double scoreMatch::calcLP(){
	int LPCost;
	if (difficulty == 1)
		LPCost = LPEasy;
	else if (difficulty == 2)
		LPCost = LPNormal;
	else if (difficulty == 3)
		LPCost = LPHard;
	else if (difficulty == 4)
		LPCost = LPExpert;
	else
		return -1;
	
	double PtsperLP = (double)averageScore / (double)LPCost;
	LPReq = (int)ceil((double)pointDiff / PtsperLP);
	return LPReq;
}