// This is the main function for LLSIF-Helper.
// Created Date: 2016-07-01, Happy Canada Day!

#include <iostream>
#include <fstream>
#include <cctype>
#include "LLSIFTokenCollection.h"
#include "LLSIFMedleyFestival.h"
#include "LLSIFScoreMatch.h"

int main(int argc, char *argv[])
{
	/*
		Command Line Definition:
		X:\>LLSIFHelper <-t> <EventType> OR <--type> <EventType>
	*/

	//variable definitions
	const string scorematch = "scorematch";
	const string tokencollection = "tokencollection";

	//welcome message
	std::cout << "Welcome to the Love Live School Idol Festival Helper!\n\n";
	std::cout << "This Program will aid you in your Love Live events by helping you calculate\n";
	std::cout << "various stats that will help you optimize the amount of points you can in an event, provide organization and event history.\n\n";
	std::cout << "#############################################\n\n\n\n";

	//go through all error checks making sure the user has provided the correct inputs to execute the program
	if (argc != 0)
	{
		if (string(argv[1]) != "-t" && string(argv[1]) != "--type")
		{
			std::cout << "Incorrect input, exiting program.";
			return -1;
		}
	}

	else
	{
		"No input provided.";
		return -1;
	}
	
	//default the strings to lowercase
	const string eventType = string(argv[2]);

	//get user input to setup the event execution
	if (eventType == scorematch)
	{
		std::cout << "\n\nTime for a Score Match!\n\n";

		//instantiating the object
		LLSIFScoreMatch *scoreMatchObj = new LLSIFScoreMatch(0, 65000, 0);
	}

	else if (eventType == tokencollection)
	{
		std::cout << "\n\nTime for some Token Collection!\n\n";

		//instantiating the object
		LLSIFtokenCollection *tokenCollectionMatchObj = new LLSIFtokenCollection(0, 15, 375, 40000);
	}

	else
	{
		std::cout << "\n\nNo such event type exists, please enter a valid event!\n\n";
		return -1;
	}
	//Most likely won't use this section, will test via command line

	//defining a type for testing different event implementations, will use these for testing
	//enum eventType {ScoreMatch = 1, TokenCollection = 2, MedleyFestival = 3 };

	return 0;
}