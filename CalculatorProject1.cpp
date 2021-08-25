#include <iostream>

using namespace std;

int main() {
	float num1, num2;//floating point first and second variable 
	char operation; //operation char variable

	cout << "**Megan's Calculator**\n";//title
	cout << "Enter your calculator info stuffs: ";//user inputs first value, operation then second value
	cin >> num1 >> operation >> num2; //system stores the first value, operation and second value

	switch (operation) {
	case '-': cout << num1 << operation << num2 << "=" << num1 - num2; //if operation is -, it does subtraction and prints answer
		break;//stops program if case is met
	case '+': cout << num1 << operation << num2 << "=" << num1 + num2;//if operation is +, it does addition and prints answer
		break;//stops program if case is met
	case '*': cout << num1 << operation << num2 << "=" << num1 * num2;//if operation is *, it does multiplication and prints answer
		break;//stops program if case is met
	case '/': cout << num1 << operation << num2 << "=" << num1 / num2;//if operation is /, it does division and prints answer
		break;//stops program is case is met
	case'%': 
		bool isNum1Int, isNum2Int;
		isNum1Int = ((int)num1 == num1);//5==5.0
		isNum2Int = ((int)num2 == num2);//5==5.0

		if (isNum1Int && isNum2Int)
			cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;//if operation is % and valid, it converts float to int, does module operation and prints answer
		else
			cout << "This is not something that can be done. Please try again."; //not a valid number response
		break;
	
	default: cout << "This isn't a valid operation! Please try agaian.\n";//user inputs a character that is not from the previous cases and outputs this

	}

		system("pause>0");
}