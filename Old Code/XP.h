//returns the LP needed to rank up when playing easy, normal, hard or expert songs

class XP{
	int currentXP;
	int XPtolevel;
	int XPdiff;
	double XPperLP;
	double LPrequiredEasy;
	double LPrequiredNormal;
	double LPrequiredHard;
	double LPrequiredExpert;
	const int XPEasy;
	const int XPNormal;
	const int XPHard;
	const int XPExpert;
	const int LPEasy;
	const int LPNormal;
	const int LPHard;
	const int LPExpert;
	//int difficulty; //easy = 1, expert = 4
	//placeholder: songs to play

public:
	void setval(/*int diff*/, int XPnow, int XPrank){
		currentXP = XPnow;
		XPtolevel = XPrank;
		XPdiff = XPtolevel - currentXP;
		/*difficulty = diff;*/
	}

	//Easy song
	//Return value should be placed into LPrequiredEasy
	double calcEasy(){
		/*if(difficulty == 1){*/
		XPperLP = (double)XPEasy/LPEasy;
		return XPdiff/XPperLP;
	}

	//Normal song
	//Return value should be placed into LPrequiredNormal
	double calcNormal(){
		/*if(difficulty == 2){*/
		XPperLP = (double)XPNormal/LPNormal;
		return XPdiff/XPperLP;
	}

	//Hard song
	//Return value should be placed into LPrequiredHard
	double calcHard(){
		/*if(difficulty == 3){*/
		XPperLP = (double)XPHard/LPHard;
		return XPdiff/XPperLP;
	}

	//Expert song
	//Return value should be placed into LPrequiredExpert
	double calcExpert(){
		/*if(difficulty == 4){*/
		XPperLP = (double)XPExpert/LPExpert;
		return XPdiff/XPperLP;
	}
}
		
			
			
