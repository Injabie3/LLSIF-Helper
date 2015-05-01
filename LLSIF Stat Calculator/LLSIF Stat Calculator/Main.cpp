#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <assert.h>
#include <cmath>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "LLSIF.h"

using namespace std;

int main()
{
	cardStat Stat1;
	string rarity; //R, SR, UR
	int smile = 0; //current stats
	int pure = 0;
	int cool = 0;
	int smileE = 0; //estimated stats
	int pureE = 0;
	int coolE = 0; 
	int currentL = 0; //current level
	int findL = 0; //level to estimate

	printf("LLSIF Card Stat Calculator\n");

	printf("Please enter card level:\n");
	scanf("%d", &currentL);
	assert(currentL > 0);

	printf("Please enter card's current smile stat:\n");
	scanf("%d", &smile);
	assert(smile > 0);

	printf("Please enter card's current pure stat:\n");
	scanf("%d", &pure);
	assert(pure > 0);

	printf("Please enter card's current cool stat:\n");
	scanf("%d", &cool);
	assert(cool > 0);

	printf("Please enter the level you want to estimate the card's stats at:\n");
	scanf("%d", &findL);
	assert(findL > 0);

	printf("Please enter the card's rarity(R, SR, UR):\n");
	scanf("%s", &rarity);


	

	cout << "At level " << findL << " your card's stats are:" << endl;
	cout << "Smile: " << smileE  << endl;
	cout << "Pure: " << pureE  << endl;
	cout << "Cool: " << coolE  << endl;

	system("PAUSE");

	return 0;
}

/*Alternative algorithm
*/

//int main()
//{
//	string rarity = ""; //R, SR, UR
//	int smile, pure, cool;
//	int smileE, pureE, coolE; //estimated stats
//	int currentL, findL, Ldiff; //current level, find level, level difference
//
//	cout << "LLSIF Card Stat Calculator" << endl;
//	cout << "Please enter card rarity(R, SR, UR): " << endl;
//	cin >> rarity;
//	cout << "Please enter card level: " << endl;
//	cin >> currentL;
//	assert(currentL > 0);
//	cout << "Please enter card's current smile stat: " << endl;
//	cin >> smile;
//	assert(smile > 0);
//	cout << "Please enter card's current pure stat: " << endl;
//	cin >> pure;
//	assert(pure > 0);
//	cout << "Please enter card's current cool stat: " << endl;
//	cin >> cool;
//	assert(cool > 0);
//	cout << "Please enter the level you want to estimate the card's stats at: " << endl;
//	cin >> findL;
//	assert(findL > 0);
//
//	Ldiff = findL - currentL; 
//
//	if(rarity == "R"){//+13 each level
//		smileE = smile + Ldiff*13;
//		pureE = pure + Ldiff*13;
//		coolE = cool + Ldiff*13;
//		if (findL == 60){
//			smileE += 3;
//			pureE += 3;
//			coolE += 3;
//		}
//	}
//	else if (rarity == "SR"){//+14 each level
//		smileE = smile + Ldiff*14;
//		pureE = pure + Ldiff*14;
//		coolE = cool + Ldiff*14;
//		if (findL == 80){
//			smileE += 4;
//			pureE += 4;
//			coolE += 4;
//		}
//	}
//	else if (rarity == "UR"){//+15 each level
//		smileE = smile + Ldiff*15;
//		pureE = pure + Ldiff*15;
//		coolE = cool + Ldiff*15;
//		if (findL == 100){
//			smileE += 5;
//			pureE += 5;
//			coolE += 5;
//		}
//	}
//	else
//	{
//		cout << "YOU DONE GOOFED";
//		return 1;
//	}
//
//	cout << "At level " << findL << " your card's stats are:" << endl;
//	cout << "Smile: " << smileE  << endl;
//	cout << "Pure: " << pureE  << endl;
//	cout << "Cool: " << coolE  << endl;
//
//	system("PAUSE");
//
//	return 0;
//}