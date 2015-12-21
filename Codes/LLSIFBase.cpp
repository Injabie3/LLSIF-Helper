#include "LLSIFBase.h"

//Default Constructor
LLSIFBase::LLSIFBase()
{
	EXP = 0;
	rank = 1;
	rank_up = 0;

}

//Other constructor
LLSIFBase::LLSIFBase(int EXP, int rank, int currentPoints, int targetPoints)
{
	this->EXP = EXP;
	this->rank = rank;
	this->points_current = currentPoints;
	this->points_target = targetPoints;
}
void LLSIFBase::setMaxLP()
{
	
}

//Use the following to calculate the EXP from the current rank.
//y = 34.4512x - 585.5878