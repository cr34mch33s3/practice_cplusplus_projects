#include <iostream>
#include <string>

using namespace std;

// Basic Program
int main() {
	//Output line containing "Hello World"
	cout << "Hello World" << endl;
	
	return 0;
}

--------------------------------------------------------------------

// User Input
int main() {
	string input;
	int value;
	
	//Prompt user to input string value and save
	cout << "Enter some text" << flush;
	cin >> input;
	
	cout << "You entered: " << input << endl;
	
	//Prompt user to input number value and save
	cout << "Enter a number" << flush;
	cin >> value;
	
	cout << "You entered: " << value << endl;
	
	//Exit
	return 0;
}

--------------------------------------------------------------------

// Menu with if-else handling and nested loops
int main() {
	int menuChoice, value;
	string input;
	
	//Create Menu Options
	cout << "1.\tEnter a string value" << endl;
	cout << "2.\tEnter a number value" << endl;
	cout << "3.\tView string value" << endl;
	cout << "4.\tView number value" << endl;
	cout << "5.\tQuit" << endl;
	cin >> menuChoice;
	
	//Handle String (Choice 1)
	if (menuChoice == 1) {
		cout << "Enter a string: " << flush;
		cin >> input;
	//Handle Number (Choice 2)
	} else if (menuChoice == 2) {
		cout << "Enter a number: " << flush;
		cin >> value;
	//Show String (Choice 3)
	} else if (menuChoice == 3) {
		//Check if value has been entered
		if (input == null) {
			cout << "No text has been entered." << endl;
		} else {
			cout << "You entered: " << input << endl;
		}
	//Show Number (Choice 4)
	} else if (menuChoice == 4) {
		//Check if value has been entered
		if (input == null) {
			cout << "No number has been entered." << endl;
		} else {
			cout << "You entered: " << value << endl;
		}
	//Quit Program
	} else if (menuChoice ==5) {
		cout << "Program Terminating..." << endl;
	} else {
		cout << "Invalid selection." << endl;
	}
		
	return 0;
}

--------------------------------------------------------------------

//while loops
int main() {
	int counter = 0;
	
	while (counter <= 10){
		cout << "Number " << counter << endl;
		counter++;
	}
	
	return 0;
}

--------------------------------------------------------------------

//do-while loops

int main() {
	int counter = 0;
	
	cout << "Let's count to 10!" << endl;
	do{
		cout << counter << endl;
		counter ++;
	} while (counter <= 10);
	cout << "You did it!" << endl;
	
	return 0;
}

--------------------------------------------------------------------

//Calling functions
int main() {
	
	// To only call functions
	numbers();
	sentence();
	aFunction();
	
	// To output the functions after calling them
	cout << numbersWithParms(27,3);
	cout << sentenceWithParms("Bob","Marley");
	return 0;
}

// Integer function (returns a numerical value)
int numbers() {
	int a = 5, b = 10, c;
	
	c = a + b;
	
	return c;
}

// Integer function with parameters/arguments
int numbersWithParms(int a, int b){
	return a/b;
}

// String function (returns a string value)
string sentence() {
	string input;
	
	input = "I am a sentence."
	
	return input;
}

// String function with parameters/arguments
string sentenceWithParms(string word1, string word2){
	return "Your words are " + word1 + " and " + word2;
}

// Does not return a value but can be called
void aFunction(){
	cout << "This function can be called to display the text here." << endl;
}