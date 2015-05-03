#include "scoreMatch.h"
#include <string>
using namespace std;

scoreMatch::scoreMatch()
{
	finalScore = 0;
}


scoreMatch::~scoreMatch()
{
}

int scoreMatch::setDataV1(int difficulty, string score, int rank)
{
	if (difficulty == 1)
		baseScore = pointsEasy;
	else if (difficulty == 2)
		baseScore = pointsNormal;
	else if (difficulty == 3)
		baseScore = pointsHard;
	else if (difficulty == 4)
		baseScore = pointsExpert;
	else
		return 1;
	
	if (score == "S")
		multiplyScore = score_S;
	else if (score == "A")
		multiplyScore = score_A;
	else if (score == "B")
		multiplyScore = score_B;
	else if (score == "C")
		multiplyScore = score_C;
	else if (score == "N")
		multiplyScore = score_N;
	else
		return 2;	//Error with second parameter.

	if (rank == 1)
		multiplyRank = rank_1;
	else if (rank == 2)
		multiplyRank = rank_2;
	else if (rank == 3)
		multiplyRank = rank_3;
	else if (rank == 4)
		multiplyRank = rank_4;
	else
		return 3;	//Error with third parameter.

	return 0;
}

int scoreMatch::setDataV2(int currentP, int goalP, double aveScore, int cost)
{
	//Checking parameters.
	if (currentP <= 0)
		return 1;
	else if (goalP <= 0)
		return 2;
	else if (aveScore <= 0)
		return 3;
	else if (cost <= 0)
		return 4;

	currentPoints = currentP;
	goalPoints = goalP;
	averageScore = aveScore;
	LPCost = cost;
	return 0;
}
void scoreMatch::calculateFinalScore()
{
	finalScore = (int)round((double)baseScore * multiplyScore * multiplyRank);
}

int scoreMatch::getFinalScore()
{
	return finalScore;
}

void scoreMatch::calculateLPNeeded()
{
	LPNeeded = (int)(ceil((double)(goalPoints - currentPoints) / averageScore)*(double)LPCost);
}

int scoreMatch::getLPNeeded()
{
	return LPNeeded;
}