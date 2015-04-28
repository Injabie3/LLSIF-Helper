#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "tokenCollection.h"
using namespace std;

int main()
{
	//Defining variables.
	int points;
	int tokens;


	tokenCollection tokenTracker;
	cout << "LLSIF Helper beta" << endl;
	//Token Collection Test
	cout << "Enter current points: ";
	cin >> points;
	cout << "Enter current tokens: ";
	cin >> tokens;

	tokenTracker.setCurrentPoints(points);
	tokenTracker.setCurrentTokens(tokens);

	system("PAUSE");
	return 0;



}