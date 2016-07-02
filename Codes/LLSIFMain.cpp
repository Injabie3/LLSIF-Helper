// This is the main function for LLSIF-Helper.
// Created Date: 2016-07-01, Happy Canada Day!

#include <iostream>
#include <fstream>
#include "LLSIFBase.h";
#include "LLSIFTokenCollection.h";
#include "LLSIFMedleyFestival.h";
#include "LLSIFScoreMatch.h";

using namespace std;

int main()
{
	cout << "Welcome to the Love Live School Idol Festival Helper!\n\n";
	cout << "This Program will aid you in your Love Live events by helping you calculate\n";
	cout << "various stats that will help you optimize the amount of points you can in an event, provide organization and event history.\n\n";
	cout << "#############################################\n";
	cout << "#############################################\n";
	cout << "#############################################\n";

	//cout << "Which event are you wanting to play";

	//defining a type for testing different event implementations, will use these for testing
	enum eventType {ScoreMatch = 1, TokenCollection = 2, MedleyFestival = 3 };

	eventType event = ScoreMatch;
	//eventType event = TokenCollection;
	//eventType event = MedleyFestival;

	//code for running a score match
	if (event == ScoreMatch)
	{
		//instantiating the object
		LLSIFScoreMatch * scoreMatchObj = new LLSIFScoreMatch(0,65000,0);
	}

	//code for running a token collection
	else if (event == TokenCollection)
	{
		//instantiating the object
		LLSIFtokenCollection * tokenCollectionMatchObj = new LLSIFtokenCollection(0,15,375,40000);
	}

	//code for running medley festival
	else if (event == MedleyFestival)
	{
		//nothing for now
	}
	
	return 0;
}