#include <iostream>

using namespace std;

int main() {

	int hostUserNum, guestUserNum;

	cout << "Host, please enter a whole number: ";//host enters number
	cin >> hostUserNum; //system stores number
	system("cls"); //system is cleared

	cout << "Guest, please guess the number: ";
	cin >> guestUserNum;
	
	(hostUserNum == guestUserNum)? cout << "Congrats! You guessed it right!" << endl : cout << "Please try again."<<endl;
	/*if (hostUserNum == guestUserNum)
		cout << "Congrats! You guessed it right!" << endl;
	else
		cout << "Please try again.";*/


	system("pause>0");
}