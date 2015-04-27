#pragma once
class tokenCollection
{
public:
	tokenCollection();

	void setCurrentPoints();
	void getCurrentPoints();
	
	void setCurrentTokens();
	void getCurrentTokens();
	
	void setEstimatedPoints();
	void getEstimatedPoints();

	//Don't know what this is, but I'll leave it here for now.
	//~tokenCollection();
private:
	int currentPoints;
	int currentTokens;
	int estimatedPoints;
};

