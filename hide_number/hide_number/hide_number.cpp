// hide number
// try find the number

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); //seed random number generator

	int secret_number = rand() % 100 + 1; //random number between 1 and 100
	int tries = 0;
	int try_number;

	cout << "\tWelcome to Hide Number\n\n";
	cout << "Please enter a number: ";
	cin >> try_number;
	++tries;

	if (try_number > secret_number)
	{
		cout << "Too high!\n\n";
	}
	else if (try_number < secret_number)
	{
		cout << "Too low!\n\n";
	}
	else
	{
		cout << "\nThat's it! You got it in " << tries << " attempts!\n";
	}


	do
	{
		cout << "Please enter other number: ";
		cin >> try_number;
		++tries;

		if (try_number > secret_number)
		{
			cout << "Too high!\n\n";
		}
		else if (try_number < secret_number)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " attempts!\n";
		}
	} while (try_number != secret_number);

	system("pause");
	return 0;
}