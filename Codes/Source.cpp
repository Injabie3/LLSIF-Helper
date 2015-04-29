#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "tokenCollection.h"
using namespace std;

int main()
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
	do
	{
		cout << "Easy (1) | Normal (2) | Hard (3) | Expert (4)" << endl;
		cout << "Song difficulty (number): ";
		cin >> difficulty;
	} while (tokenTracker.setDifficulty(difficulty));
	cout << "Enter (average) points per event song: ";
	cin >> pointsPerSong;


	tokenTracker.setCurrentPoints(currentPoints);
	tokenTracker.setCurrentTokens(tokens);
	tokenTracker.setPointsPerSong(pointsPerSong);
	tokenTracker.calculateEstimatedPoints();
	cout << "Estimated total currentPoints: " << tokenTracker.getEstimatedPoints() << endl;

	system("PAUSE");
	return 0;



}