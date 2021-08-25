//Program will tell you what day of the week it is based on the number a user inputs

#include <iostream>

using namespace std;

int main() {

	int dayOfTheWeek;//dayOfTheWeek is an integer variable

	cout << "Please input a week number(1-7): ";//user inputs a number
	cin >> dayOfTheWeek;//system stores this number

	switch (dayOfTheWeek)
	{
	case 1: cout << "This day is Monday.";//if user inputs 1, it outputs Monday.
		break;
	case 2: cout << "This day is Tuesday.";//if user inputs 2, it outputs Tuesday.
		break;
	case 3: cout << "This day is Wednesday.";//if user inputs 3, it outputs Wednesday.
		break;
	case 4: cout << "This day is Thursday.";//if user inputs 4, it outputs Thursday.
		break;
	case 5: cout << "This day is Friday.";//if user inputs 5, it outputs Friday.
		break;
	case 6: cout << "This day is Saturday.";//if user inputs 6, it outputs Saturday.
		break;
	case 7: cout << "This day is Sunday.";//if user inputs 7, it outputs Sunday.
		break;
	default: cout << "This value is not a valid day of the week. Please try again.";//If user inputs anything else, it will output this

	}

	system("pause>0");
}