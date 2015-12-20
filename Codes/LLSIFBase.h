#ifndef LLSIFBASE_H
#define LLSIFBASE_H

using namespace std;

class LLSIFBase
{
public:
	//Default Constructor
	LLSIFBase();
	
	
	LLSIFBase(int EXP, int rank, int points);

	void setEXP(int EXP) { this.EXP = EXP; };
	//Precondition:		EXP is the current EXP of the player, expressed as an int, and greater than 0.
	//Postcondition:	Sets the current EXP of the player if valid input is given, else nothing is set.
	
	void setRank(int rank);
	//Precondition:		rank is the current player's rank, expressed as an int, and greater than 0.
	//Postcondition:	Sets the current rank of the plyaer if valid input is given, else nothing is set.

	void setCurrentLP(int currentLP);
	//Precondition:		currentLP is the current LP that the player has, expressed as an int.  Requires setRank() or a constructor that initializes the rank to be called beforehand.
	//Postcondition:	Sets the current LP if valid input is given, else sets LP to the maximum.

	void setPoints(int currentPoints);
	//Precondition:		currentPoints is the total number of points the user has, expressed as an int, and greater than or equal to 0.
	//Postcondition:	Sets the current points if valid input is given, else nothing is set.

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
	virtual void calculateEstimatedPoints() = 0;
	//Virtual function to calculate the estimated points the user has.  To be defined in derived classes.

	virtual int getEstimatedPoints() = 0;
	

private:
	int EXP;			//EXP of the player
	int rank;			//The player's rank
	int rank_up;		//The number of times the player has ranked up.
	int LP_max;			//The player's maximum LP
	int LP_current;		//The player's current LP
	int points_current;	//The player's total points for the event.
	int LCS_current;
	int LCS_used;

	void setMaxLP;
};



#endif //LLSIFBASE_H