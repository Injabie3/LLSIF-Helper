#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <assert.h>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	char rarity[2] = {}; //R, SR, UR
	int smile, pure, cool;
	int smileE, pureE, coolE; //estimated stats
	int currentL, findL, Ldiff; //current level, find level, level difference
	cout << "LLSIF Card Stat Calculator" << endl;
	cout << "Please enter card rarity: " << endl;
	cin >> rarity;
	cout << "Please enter card level: " << endl;
	cin >> currentL;
	assert(currentL > 0);
	cout << "Please enter card's current smile stat: " << endl;
	cin >> smile;
	assert(smile > 0);
	cout << "Please enter card's current pure stat: " << endl;
	cin >> pure;
	assert(pure > 0);
	cout << "Please enter card's current cool stat: " << endl;
	cin >> cool;
	assert(cool > 0);
	cout << "Please enter the level you want to estimate the card's stats at: " << endl;
	cin >> findL;
	assert(findL > 0);

	Ldiff = findL - currentL; 
	if(rarity == "R"){//+13 each level
		smileE = smile + Ldiff*13;
		pureE = pure + Ldiff*13;
		coolE = cool + Ldiff*13;
		if(findL == 60)
			smileE += 3;
	}
	else if(rarity == "SR"){//+14 each level
		smileE = smile + Ldiff*14;
		pureE = pure + Ldiff*14;
		coolE = cool + Ldiff*14;
		if(findL == 80)
			smileE += 4;
	}
	else if(rarity == "UR"){//+15 each level
		smileE = smile + Ldiff*15;
		pureE = pure + Ldiff*15;
		coolE = cool + Ldiff*15;
		if(findL == 100)
			smileE += 5;
	}

	cout << "At level " << findL << " your card's stats are:" << endl;
	cout << "Smile: " << smileE  << endl;
	cout << "Pure: " << pureE  << endl;
	cout << "Cool: " << coolE  << endl;

	system("PAUSE");

	return 0;
}