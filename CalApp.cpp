#include <iostream>

using namespace std;

int main() {
	float num1, num2, answer;//floating point number variables
	char operation;//char operation variable
	
	cout << "** Megan's Calculator **\n";//My title

	cout << "Please enter the first value: ";//user enters first value
	cin >> num1;//system stores first value into num1

	cout << "Please enter the second value: ";//user enters second value
	cin >> num2;//system stores second value into num2

	cout << "Please enter the operation: ";//user enters operation type
	cin >> operation;//system stores the selected operation into operation

	cout << num1 <<" " << operation << " " << num2 << endl;//prints out num1, operation and num 2

	if (operation == '*') { //if operation is multiplication
		answer = num1 * num2; //the code will muliply the first and second value
		cout << "Your answer is " << answer; //outputs the final answer
	}
	else if (operation == '+') {//if operation is addition
		answer = num1 + num2; //the code will add the first and second value
		cout << "Your answer is " << answer; //outputs the final answer
	}
	else if (operation == '/') {//if the operation is division
		answer = num1 / num2; // the code will divide the first and second value
		cout << "Your answer is " << answer;//outputs the final answer
	}
	else {// if operation is subtraction
		answer = num1 - num2;//the code will subtract the first and second value
		cout << "Your answer is " << answer;//outputs the final answer
	}

	system("pause>0");
}