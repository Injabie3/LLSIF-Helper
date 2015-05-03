#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include "tokenCollection.h"
#include "scoreMatch.h"
using namespace std;
void tokenCollectionHelper();
void scoreMatchHelperV1();
void scoreMatchHelperV2();

int main()
{
	bool loop = true;
	int entry = 0;
	while (loop)
	{
		system("CLS");
		cout << "LLSIF Assistant (beta)" << endl;
		cout << "Select an option:" << endl;
		cout << "1. Token Collection" << endl;
		cout << "2. Score Match" << endl;
		cout << "3. Score Match (calc v2)" << endl;
		cin >> entry;
		if (entry == 1)
			tokenCollectionHelper();
		else if (entry == 2)
			scoreMatchHelperV1();
		else if (entry == 3)
			scoreMatchHelperV2();
		cin.sync();
		cin.clear();
	}

	system("PAUSE");
	return 0;



}
void tokenCollectionHelper()
{
	//Defining variables.
	int currentPoints = 0;
	int tokens = 0;
	int difficulty = 0;
	int pointsPerSong = 0;
	tokenCollection tokenTracker;
	cout << "LLSIF Calculator beta" << endl;
	//Token Collection Test
	cout << "Enter current points: ";
	cin >> currentPoints;
	cout << "Enter number of tokens available: ";
	cin >> tokens;
	cout << "Easy (1) | Normal (2) | Hard (3) | Expert (4)" << endl;
	cout << "Song difficulty (number): ";
	cin >> difficulty;
	cout << "Enter (average) points per event song: ";
	cin >> pointsPerSong;

	tokenTracker.setData(currentPoints, tokens, difficulty, pointsPerSong);
	tokenTracker.calculateEstimatedPoints();
	cout << "Estimated total currentPoints: " << tokenTracker.getEstimatedPoints() << endl;
	system("PAUSE");
}
void scoreMatchHelperV1()
{
	int difficulty = 0;
	string score = "";
	int rank = 0;
	scoreMatch scoreTracker;
	cout << "Score Match Helper" << endl;
	cout << "Easy (1) | Normal (2) | Hard (3) | Expert (4)" << endl;
	cout << "Enter song difficulty (number): ";
	cin >> difficulty;
	cout << "Enter estimated score rank: ";
	cin >> score;
	cout << "Enter estimated position rank: ";
	cin >> rank;
	
	scoreTracker.setDataV1(difficulty, score, rank);
	scoreTracker.calculateFinalScore();
	cout << "Your estimated score is: " << scoreTracker.getFinalScore();
	system("PAUSE");

}

void scoreMatchHelperV2()
{
	int currentPoints = 0;
	int goalPoints = 0;
	double averageScore = 0;
	int LPCost = 0;
	scoreMatch Tracker;
	cout << "Enter current points: ";
	cin >> currentPoints;
	cout << "Enter target points: ";
	cin >> goalPoints;
	cout << "Enter LP cost: ";
	cin >> LPCost;
	cout << "Enter average score: ";
	cin >> averageScore;
	Tracker.setDataV2(currentPoints, goalPoints, averageScore, LPCost);
	Tracker.calculateLPNeeded();
	cout << "The LP required to reach your target is: " << Tracker.getLPNeeded() << endl;
	system("PAUSE");
}