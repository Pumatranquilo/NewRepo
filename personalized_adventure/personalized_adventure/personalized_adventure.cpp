// personalized adventure

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int GOLD_PIECES = 900;
	int adventures, fugiu, ficaram;
	string leader;

	//get the information
	cout << "Welcome to lost fortune\n\n";
	cout << "Please enter the following for you personalized adventure\n";

	cout << "Enter a number: ";
	cin >> adventures;

	cout << "Enter a number, smaller than the first: ";
	cin >> fugiu;

	ficaram = adventures - fugiu;
	cout << "Enter a name: ";
	cin >> leader;

	//tell the story
	cout << "\nA brave group of " << adventures << " set out on a quest ";
	cout << "-- in search of the lost treasure of the ancient dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";
	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventures, " << fugiu << " fugiram, ";
	cout << "leaving just " << ficaram << " in the group.\n";
	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the decease to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventures split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " held on to the extra " << (GOLD_PIECES % ficaram);
	cout << " pieces to keep things fair of course.\n";

	system("pause");
	return 0;
}