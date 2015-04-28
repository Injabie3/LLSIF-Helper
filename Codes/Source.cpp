#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "tokenCollection.h"
using namespace std;

int main()
{
	//Defining variables.
	int points = 0;
	int tokens = 0;
	int difficulty = 0;
	int pointsPerSong = 0;


	tokenCollection tokenTracker;
	cout << "LLSIF Helper beta" << endl;
	//Token Collection Test
	cout << "Enter current points: ";
	cin >> points;
	cout << "Enter current tokens: ";
	cin >> tokens;
	do
	{
		cout << "1. Easy | 2. Normal | 3. Hard | 4. Expert" << endl;
		cout << "Enter difficulty: ";
		cin >> difficulty;
	} while (tokenTracker.setDifficulty(difficulty));
	cout << "Enter (average) points per event song: ";
	cin >> pointsPerSong;


	tokenTracker.setCurrentPoints(points);
	tokenTracker.setCurrentTokens(tokens);
	tokenTracker.setPointsPerSong(pointsPerSong);
	tokenTracker.calculateEstimatedPoints();
	cout << "Estimated total points: " << tokenTracker.getEstimatedPoints() << endl;

	system("PAUSE");
	return 0;



}