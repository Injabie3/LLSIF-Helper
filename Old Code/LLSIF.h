#include <string>

using namespace std;
//placeholder

class cardStat{
public:
	string rarity; //R, SR, UR
	int smileC; //original stats
	int pureC;
	int coolC; 
	int smileE; //estimated stats
	int pureE;
	int coolE; 
	int levelDiff; //level difference between estimation and current

	/*int findlevelDiff(int currentLevel, int findLevel){
		int levelDiff = findLevel-currentLevel;
		return levelDiff;
	}*/
	
	void setVal(string rarevalue, int smile, int pure, int cool, int currentLevel, int findLevel){
		rarity = rarevalue;
		smileC = smile;
		pureC = pure;
		coolC = cool;
		levelDiff = findLevel-currentLevel;
	}

	void calcStat(string rarevalue, int smile, int pure, int cool, int levelDiff){
		if(rarity == "R"){//+13 each level
		smileE = smile + Ldiff*13;
		pureE = pure + Ldiff*13;
		coolE = cool + Ldiff*13;
		if (findL == 60){
			smileE += 3;
			pureE += 3;
			coolE += 3;
		}
	}
	else if (rarity == "SR"){//+14 each level
		smileE = smile + Ldiff*14;
		pureE = pure + Ldiff*14;
		coolE = cool + Ldiff*14;
		if (findL == 80){
			smileE += 4;
			pureE += 4;
			coolE += 4;
		}
	}
	else if (rarity == "UR"){//+15 each level
		smileE = smile + Ldiff*15;
		pureE = pure + Ldiff*15;
		coolE = cool + Ldiff*15;
		if (findL == 100){
			smileE += 5;
			pureE += 5;
			coolE += 5;
		}
	}


	int calcStat(int stat, int levelDiff);
};