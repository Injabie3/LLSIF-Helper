#include <string>

using namespace std;
//placeholder

class cardStat{
public:
	string rarity; //R, SR, UR
	int smile; //original stats
	int pure;
	int cool; //estimated stats
	int smileE;
	int pureE;
	int coolE; 
	int currentLevel; //level operators
	int findLevel;
	int levelDiff; 

	int findlevelDiff(int currentLevel, int findLevel){
		int levelDiff = findLevel-currentLevel;
		return levelDiff;
	}

	int calcStat(int stat, int levelDiff);
};