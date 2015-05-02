#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "tokenCollection.h"
using namespace std;
void tokenCollectionHelper();
void scoreMatchHelper();

int main()
{
	bool loop = true;
	int entry = 0;
	while (loop)
	{
		cout << "LLSIF Assistant (beta)" << endl;
		cout << "Select an option:" << endl;
		cout << "1. Token Collection" << endl;
		cout << "2. Score Match" << endl;
		cin >> entry;
		if (entry == 1)
			tokenCollectionHelper();
		else if (entry == 2)
			scoreMatchHelper();
		cin.sync();
		cin.clear();
	}

	system("PAUSE");
	return 0;



}
void tokenCollector()
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
}
void scoreMatchHelper()
{
	int difficulty = 0;
	string score = "";
	string rank = "";
	cout << "Score Match Helper" << endl;
	cout << "Easy (1) | Normal (2) | Hard (3) | Expert (4)" << endl;
	cout << "Enter song difficulty (number): ";
	cin >> difficulty;
	cout << "Enter estimated score rank: ";
	cin >> score;
	cout << "Enter estimated position rank: ";
	cin >> rank;

}