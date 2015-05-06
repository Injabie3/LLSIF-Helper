#pragma once
#include <string>
using namespace std;

class scoreMatch
{
public:
	scoreMatch();
	//Apparently this is a destructor.
	~scoreMatch();

	int setDataV1(int difficulty, string score, int rank);
	int setDataV2(int currentP, int goalP, double aveScore, int LPCost);
	void calculateFinalScore();
	int getFinalScore();
	void calculateLPNeeded();
	int getLPNeeded();


	//Base scores
	const int pointsEasy = 36;
	const int pointsNormal = 89;
	const int pointsHard = 163;
	const int pointsExpert = 272;
	//Multipliers
	const double score_S = 1.2;
	const double score_A = 1.15;
	const double score_B = 1.1;
	const double score_C = 1.05;
	const double score_N = 1;

	const double rank_1 = 1.25;
	const double rank_2 = 1.15;
	const double rank_3 = 1.05;
	const double rank_4 = 1;

	//Implementation 1
	double multiplyScore;	//Score Multiplier
	double multiplyRank;	//Rank Multiplier
	int baseScore;			//The base score.
	int difficulty;			//The difficulty selected.
	int finalScore;

	//Implementation 2
	int currentPoints;
	int goalPoints;
	double averageScore;
	int LPCost;
	int LPNeeded;

	

};

