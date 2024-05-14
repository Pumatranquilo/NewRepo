// finicky counter

#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	while (true)
	{
		count += 1;

		//end loop if count is greater than 10
		if (count > 10)
		{
			break;
		}

		//skip the number 5
		if (count == 5)
		{
			continue; // continue is same of skip (it return to top of the loop)
		}

		cout << count << endl;
	}

	cout << "Thanks for using the program.\n";
	system("pause");
	return 0;
}