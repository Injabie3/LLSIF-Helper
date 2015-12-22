#include <cmath>
#include "LLSIFBase.h"

using namespace std;



LLSIFBase::LLSIFBase()
//Default Constructor
{
	EXP_current = 0;
	rank = 1;
	rank_up = 0;

}

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

void LLSIFBase::setEXP(int EXP)
//Precondition:		EXP is the current EXP of the player, expressed as an int, and greater than 0, but less than the max EXP for the rank.
//Postcondition:	Sets the current EXP of the player if valid input is given, else nothing is set.
{
	if (EXP < 0 || EXP >= EXP_max)	//Invalid input.
		return;
	else
		this->EXP_current = EXP;	//Valid input and set data.
}

void LLSIFBase::setRank(int rank)
//Precondition:		rank is the current player's rank, expressed as an int, and greater than 0.
//Postcondition:	If valid input is given, the function ets the current rank of the player, sets the EXP required for that rank, and sets the maximum LP at that rank, else nothing is set.
{
	if (rank <= 0)	//Invalid input.
		return;
	else
	{
		this->rank = rank;	//Valid input and set data.
		setMaxEXP();	//Call helper function to set max EXP, which uses rank to calculate.
		setMaxLP();		//Call helper function to set max LP, which uses rank to calculate
	}
}

void LLSIFBase::setCurrentLP(int currentLP)
//Precondition:		currentLP is the current LP that the player has, expressed as an int.  Requires setRank() or a constructor that initializes the rank to be called beforehand.
//Postcondition:	Sets the current LP if valid input is given, else sets LP to the maximum.
{

}

void LLSIFBase::setMaxEXP()
//Helper function that is used to calculate the EXP required to go to the next rank based on the current rank.
{
	//Use the following to calculate the EXP from the current rank.
	//y = 34.4512x - 585.5878
	EXP_max = 34.4512*rank - 585.5878;
}

void LLSIFBase::setMaxLP()
//Helper function that is used to calculate the maximum LP a player can have at their current rank.
{
	LP_max = 25 + floor((int)fmin(rank, 300) / 2) + floor((int)fmax(rank - 300, 0) / 3);
}
