/*
	Created by David Busch
	Sept. 2nd, 2022
	Customer Data Program Demo
*/

#include <iostream>
#include <string>

using namespace std;

// Customer names
string fName;
string lName;

string birthMonth;
string birthDay;
string birthYear;

// Precondition: Include iostream library
// Postcondition: Collected customer name data
void InputName();

// Precondition: Include iostream library
// Postcondition: Collected customer birthday data
void InputBirthDay();

int main()
{
	InputName();
	InputBirthDay();

	int age = 2022 - stoi(birthYear);

	cout << "\nYour age is " << age;

	return 0;
}

void InputName()
{
	cout << "Please enter your first name: ";
	cin >> fName;
	cout << "\nPlease enter your last name: ";
	cin >> lName;
}

void InputBirthDay()
{
	cout << "Please enter your birthday starting with month as a two digit number: ";
	cin >> birthMonth;
	cout << "\nPlease enter the day your were born as a two digit number: ";
	cin >> birthDay;
	cout << "\nPlease enter your birth year as a four digit number: ";
	cin >> birthYear;
}
