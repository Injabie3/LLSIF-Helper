//GitHub:	https://github.com/Injabie3/LLSIF-Helper/
//
//LLSIFBase - The base class for all events on Love Live school idol festival.
//File:		LLSIFBase.cpp - The implementation file.
//Version:	beta
//Note:		This is an abstract class, and as such, no objects can be instantiated of class LLSIFBase.

#include <cmath>
#include <ctype.h>
#include <ctime>
#include "LLSIFBase.h"

using namespace std;

LLSIFBase::LLSIFBase()
//Default Constructor
{
	EXP_current = 0;
	rank = 1;
	rank_up = 0;

}

//Copy Constructor

//Assignment Operator

LLSIFBase::LLSIFBase(int EXP, int rank, int currentPoints, int targetPoints)
//Precondition:		EXP is the current EXP of the player, expressed as an int, >0.
//					rank is the current player's rank, expressed as an int, >0.
//					currentPoints is the current number of points the player has, expressed as an int, >=0.
//					targetPoints is the number of points the player is aiming for, >= currentPoints.
//Postcondition:	If valid inputs are given, the object is instantiated with these values.
//					If ANY of the inputs are invalid, the object is instantiated with the default constructor.
{
	//Fix implementation to reflect the postcondition correctly.
	this->EXP_current = EXP;
	this->rank = rank;
	this->points_current = currentPoints;
	this->points_target = targetPoints;
}

int LLSIFBase::setEXP(int EXP)
//Precondition:		EXP is the current EXP of the player, expressed as an int, >=0 but less than the max EXP for the rank.
//Postcondition:	Returns one of the following values:
//					0 		OK (valid input is given => sets the current EXP of the player).
//					-1		Error (Invalid input is given => nothing is set).
{
	if (EXP < 0 || EXP >= EXP_max)	//Invalid input: return -1 error.
	{
		return -1;
	}
	else
	{
		this->EXP_current = EXP;	//Valid input and set data, return 0 OK..
		return 0;	//valid input, data OK
	}

}

int LLSIFBase::setRank(int rank)
//Precondition:		rank is the current player's rank, expressed as an int, and greater than 0.
//Postcondition:	Returns one of the following values:
//					0		OK (Valid input is given => sets the current rank of the player, sets the EXP required for that rank, and sets the maximum LP at that rank)
//					-1		Error (Invalid input is given => nothing is set).
{
	if (rank <= 0)	//Invalid input.
		return -1;
	else
	{
		this->rank = rank;	//Valid input and set data.
		setMaxEXP();	//Call helper function to set max EXP, which uses rank to calculate.
		setMaxLP();		//Call helper function to set max LP, which uses rank to calculate
		return 0;	//valid input, data OK
	}
}

int LLSIFBase::setCurrentLP(int currentLP)
//Precondition:		currentLP is the current LP that the player has, expressed as an int.  Requires setRank() or a constructor that initializes the rank to be called beforehand.
//Postcondition:	Returns one of the following values:
//					0		OK (Valid input is given => sets the current LP).
//					-1		Error (Invalid input is given => sets LP to the maximum).
{
	if (currentLP < 0) //Invalid input, return -1 for error.
		return -1;
	else
	{
		LP_current = currentLP;
		return 0;	//valid input, data OK
	}
}

int LLSIFBase::setCurrentPoints(int currentPoints)
{
	if (currentPoints < 0) //Invalid input, return -1 for error.
		return -1;
	else
	{
		points_current = currentPoints;
		return 0;	//valid input, data OK
	}

}

void LLSIFBase::setMaxEXP()
//Helper function that is used to calculate the EXP required to go to the next rank based on the current rank.
{
	//Use the following to calculate the EXP from the current rank.
	//y = 34.4512x - 585.5878
	EXP_max = abs(34.4512*rank - 585.5878);
}

void LLSIFBase::setMaxLP()
//Helper function that is used to calculate the maximum LP a player can have at their current rank.
{
	LP_max = 25 + floor((int)fmin(rank, 300) / 2) + floor((int)fmax(rank - 300, 0) / 3);
}

int LLSIFBase::setEventTimeRemaining(string dateAndTime)
//Precondition:		Independant to object instantiation, can access at anytime of program execution
//Postcondition:	Parses the specified format in "eventTimeRemaining" and returns the amount of time left in hours precise to 10^-2
{
	/*
	if ()
	return -1;	//Invalid input.
	*/
	for (int i = 0; i < dateAndTime.length(); i++)
	{
		if ((dateAndTime.length() % 2) == 0)	//parsing different time units every 2 characters
		{

		}

		//(double)stoi

	}

	return 0;	//valid input, data OK
}