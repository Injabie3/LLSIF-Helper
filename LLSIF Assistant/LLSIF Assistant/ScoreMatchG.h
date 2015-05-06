#include <cmath>

class ScoreMatch{
public:
	int CurrentPoints;
	int PointGoal;
	int Pointdiff;
	int AverageScore;
	
	int LPEasy; //set constants for LP costs
	int LPNormal;
	int LPHard;
	int LPExpert;

	//return values
	int LPReq;

	void setval(int CurrentPts, int PtGoal, int AvgScore){
		CurrentPoints = CurrentPts;
		PointGoal = PtGoal;
		AverageScore = AvgScore;
		Pointdiff = PtGoal-CurrentPts;
	}
	double CalcLP(int difficulty){ //difficulty = LP cost
		double PtsperLP = AverageScore/difficulty;
		LPReq = ceil(Pointdiff/PtsperLP);
		return LPReq;
	}
}