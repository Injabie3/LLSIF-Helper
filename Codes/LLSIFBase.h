#ifndef LLSIFBASE_H
#define LLSIFBASE_H

class LLSIFBase
{
public:
	//Default Constructor
	LLSIFBase();
	
	
	LLSIFBase(int EXP, int rank, int points);

	void setEXP(int EXP) { this.EXP = EXP; };
	void setRank(int rank);
	void setCurrentLP();
	void setPoints();
	int getEXP();
	int getRank();
	int getCurrentLP();
	int getMaxLP();
	int getCurrentPoints() = 0;
	virtual int calculateEstimatedPoints() = 0;
	virtual int getEstimatedPoints() = 0;
	

private:
	int EXP;	//EXP of the player
	int rank;	//The player's rank
	int LP_max; //The player's maximum LP
	int LP_current;	//The player's current LP
	int currentPoints;	//The player's total points for the event.
};



#endif //LLSIFBASE_H