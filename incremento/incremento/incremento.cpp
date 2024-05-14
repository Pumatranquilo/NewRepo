#include <iostream>
using namespace std;

int main()
{
	cout << "Incremente types\n";
	int a = 10;
	int b = ++a * 2;
	cout << b << " " << a;
	a = 10;
	b = a++ * 2;
	cout << "\n" << b << " " << a;
}