#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fName;
	string lName;

	cout << "Please enter your first name: ";
	cin >> fName;

	cout << "\nPlease enter your last name: ";
	cin >> lName;

	cout << "\nSo your name is " << fName << " " << lName;

	return 0;
}