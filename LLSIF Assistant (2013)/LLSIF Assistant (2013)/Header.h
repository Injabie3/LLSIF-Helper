class XP{
	int currentXP;
	int XPtolevel;
	int XPdiff;
	double 
	double LPrequired;
	const int XPEasy;
	const int XPNorm;
	const int XPHard;
	const int XPExpt;
	const int LPEasy;
	const int LPNorm;
	const int LPHard;
	const int LPExpt;
	int difficulty = 1; //easy = 1, expert = 4
	//placeholder: songs to play

	void setval(int diff, int XPnow, int XPrank){
		currentXP = XPnow;
		XPtolevel = XPrank;
		XPdiff = XPtolevel - currentXP;
		difficulty = diff;
	}

	int calc(){
		if(difficulty == 1){
			
