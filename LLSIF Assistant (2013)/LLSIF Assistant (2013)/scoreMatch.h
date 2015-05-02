#pragma once
#include <string>
using namespace std;

class scoreMatch
{
public:
	scoreMatch();
	//Apparently this is a destructor.
	~scoreMatch();

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
private:
	double multiplyScore;
	double multiplyRank;
	int baseScore;
	int difficulty;
	int finalScore;

	
	int setData(int difficulty, string score, int rank);
	int calculateFinalScore();
};

