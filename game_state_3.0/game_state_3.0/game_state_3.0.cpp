#include <iostream>
using namespace std;

int main()
{
	const int POINTS = 150;
	int enemies = 10;
	int score = enemies * POINTS;
	cout << "score: " << score << endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, LARGER_COST = 50};
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Larger will cost " << (LARGER_COST - myShipCost) <<
		" resource points.\n";

	return 0;
}