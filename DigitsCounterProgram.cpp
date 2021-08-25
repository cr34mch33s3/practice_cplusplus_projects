//Program will count the number of digits a user inputs

#include <iostream>

using namespace std;

int main() {

	int num;//integer variable for number
	int counter = 0;//variable for counter

	cout << "Please enter a number: ";//user input a number
	cin >> num;//system stores the number

	if (num == 0)//if user inputs 0
		cout << "You have entered 0.\n";//code will output this message
	else {//if user outputs anything greater than 0, it will execute the following code

		if (num < 0) //if an input is a negative number
			num *= -1;//the code will mulitply the number by -1 to make it postive

		while (num > 0) {//while the number is greater than 0
			num /= 10;//the number inputted will be divided by 10
			counter++;//this will increase the counter each time the number is put through the loop
		}// the code will put the number after being divided by 10, back through the loop to see if it's bigger than 0 then do the process agaian

	}
	cout << "The number you have entered has " << counter << " digits.\n";//outputs the number of digits is in the number inputted


	system("pause>0");
}