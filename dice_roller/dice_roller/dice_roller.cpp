//dice roller
//generating random numbers

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator

	int random_number = rand(); //generate trandom number
	cout << random_number << endl;
	int dice = (random_number % 30) + 1; //get a number between 1 and 30
	cout << "You rolled a " << dice << endl;

	if (dice >= 20)
	{
		cout << "causou dano de " << (dice / 2) + 5 << ".\n";
	}
	else
	{
		cout << "Zero dano causado.\n";
	}
	system("pause");
	return 0;
}
