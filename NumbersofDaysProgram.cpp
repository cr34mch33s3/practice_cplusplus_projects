#include <iostream>

using namespace std;

int main() {

	//(year % 4 ==0 && year%100!=0|| year % 400 == 0)

	int year, month;//year and month integer variables

	cout << "Please enter the month and year: ";//user inputs month and year
	cin >> month >> year; //system stores month and year


	switch (month)
	{
	case 1: 
		cout << "There are 31 days.";//if user inputs 1 (January), code will output 31 days
		break;

	case 2: 
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//if users inputs a leap year and 2 (February)
			cout << "There are 29 days.";//If leap year, code will output 29 days.
		else
			cout << "There are 28 days.";//if not, code will output 28 days.
		break;
	case 3: 
		cout << "There are 31 days."; //if user inputs 3 (March), code will output 31 days.
		break;//stop execution
	case 4:
		cout << "There are 30 days.";//if user inputs 4 (April), code will output 30 days.
		break;//stop execution
	case 5:
		cout << "There are 31 days.";//if user inputs 5 (May), code will output 31 days.
		break;//stop execution
	case 6:
		cout << "There are 30 days.";//if user inputs 6(june), code will output 30 days.
		break;//stop execution
	case 7: 
		cout << "There are 31 days.";//if user inputs 7(july), code will output 31 days.
		break;//stop execution
	case 8: 
		cout << "There are 31 days.";//if user inputs 8(august), code will output 31 days.
		break;//stop execution
	case 9:
		cout << "There are 30 days.";//if user inputs 9(september), code will output 30 days.
		break;//stop execution
	case 10: 
		cout << "There are 31 days.";//if user inputs 10 (October), code will output 31 days.
		break;//stop execution
	case 11:
		cout << "There are 30 days.";//if user inputs 11 (Novemember), code will output 30 days.
		break;//stop execution
	case 12: 
		cout << "There are 31 days.";//if user inputs 12 (December), code will output 31 days.
		break;//stop execution
	default: cout << "This is not a valid month! Please try again.";

	}
	system("pause>0");
}