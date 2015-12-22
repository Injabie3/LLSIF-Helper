#ifndef LLSIFBASE_H
#define LLSIFBASE_H

using namespace std;

class LLSIFBase
{
public:
	//Default Constructor
	LLSIFBase();
	
	
	LLSIFBase(int EXP, int rank, int currentPoints, int targetPoints);
	//Precondition:		EXP is the current EXP of the player, expressed as an int, >0.
	//					rank is the current player's rank, expressed as an int, >0.
	//					currentPoints is the current number of points the player has, expressed as an int, >=0.
	//					targetPoints is the number of points the player is aiming for, >= currentPoints.
	//Postcondition:	If valid inputs are given, the object is instantiated with these values.
	//					If ANY of the inputs are invalid, the object is instantiated with the default constructor.

	void setEXP(int EXP);
	//Precondition:		EXP is the current EXP of the player, expressed as an int, >=0 but less than the max EXP for the rank.
	//Postcondition:	Sets the current EXP of the player if valid input is given, else nothing is set.
	
	void setRank(int rank);
	//Precondition:		rank is the current player's rank, expressed as an int, and greater than 0.
	//Postcondition:	If valid input is given, the function ets the current rank of the player, sets the EXP required for that rank, and sets the maximum LP at that rank, else nothing is set.

	void setCurrentLP(int currentLP);
	//Precondition:		currentLP is the current LP that the player has, expressed as an int.  Requires setRank() or a constructor that initializes the rank to be called beforehand.
	//Postcondition:	Sets the current LP if valid input is given, else sets LP to the maximum.

	void setCurrentPoints(int currentPoints);
	//Precondition:		currentPoints is the total number of points the user has, expressed as an int, and greater than or equal to 0.
	//Postcondition:	Sets the current points if valid input is given, else nothing is set.

	void setTargetPoints(int targetPoints);
	//Precondition:		A non-default constructor or setCurrentPointstargetPoints has been previously called, and targetPoints is the total number of points the user has, expressed as an int, and greater than or equal to currentPoints.
	//Postcondition:	Sets the target points if valid input is given, else nothing is set.

	int getEXP();
	//Precondition:		A non-default constructor or setEXP() member function has been previously called.
	//Postcondition:	Returns the current EXP of the player as an int.

	int getRank();
	//Precondition:		A non-default constructor or setRank() member function has been previously called.
	//Postcondition:	Returns the current rank of the player as an int.

	int getCurrentLP();
	//Precondition:		A non-default constructor or setCurrentLP() member function has been previously called.
	//Postcondition:	Returns the current LP the user has as an int.

	int getMaxLP();
	//Precondition:		A non-default constructor or setRank() member function has been previously called.
	//Postcondition:	Returns the maximum LP the user has as an int.

	int getCurrentPoints();
	//Precondition:		A non-default constructor or setCurrentPoints() member function has been previously called.
	//Postcondition:	Returns the current number of points the user has as an int.

	int getTargetPoints();
	//Precondition:		A non-default constructor or setTargetPoints() member function has been previously called.
	//Postcondition:	Returns the target points the user is aiming for as an int.

	virtual void calculateEstimatedPoints() = 0;
	//Virtual function to calculate the estimated points the user has.  To be defined in derived classes.

	virtual int getEstimatedPoints() = 0;
	//Virtual function to get the estimated points the user has.  To be defined in derived classes.
	

private:
	int EXP_current;	//EXP of the player. Must be >=0 and less than max EXP at the rank.
	int EXP_max;		//The maximum EXP for the current rank.
	int rank;			//The player's current rank.
	int rank_up;		//The number of times the player has ranked up during an event, if applicable.
	int LP_max;			//The player's maximum LP at the given rank
	int LP_current;		//The player's current LP
	int points_current;	//The player's total points for an event.
	int points_target;	//The number of points the player is aiming for in an event, if applicable.
	int LCS_current;	//The number of lovecas (LCS) or gems the user currently has.
	int LCS_used;		//The number of lovecas (LCS) or gems the user has used in an event, if applicable

	void setMaxEXP();
	void setMaxLP();
};



#endif //LLSIFBASE_H