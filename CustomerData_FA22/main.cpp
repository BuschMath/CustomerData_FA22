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

// Birthday data
string birthMonth;
string birthDay;
string birthYear;

// Customer age
int age;

// Precondition: Include iostream library
// Postcondition: Collected customer name data
void InputName();

// Precondition: Include iostream library
// Postcondition: Collected customer birthday data
void InputBirthDay();

// Precondition: InputBirthDay has called.
// Postcondition: Age is calculated and stored.
void CalculateAge();

int main()
{
	InputName();
	InputBirthDay();
	CalculateAge();

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

void CalculateAge()
{
	age = 2022 - stoi(birthYear);
}
