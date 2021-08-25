//Program will write out all the numbers between 100 and 500 that divisible by 3 and 5

#include <iostream>

using namespace std;

int main() {

	int counter = 100;//setting counter to 100

	while (counter <= 500) { //while loop saying the values for this loop must stay between the intial counter value and 500

		if (counter % 3 == 0 && counter % 5 == 0) //if counter value is divisble by 3 and 5
			cout << counter << " is divisible.\n";//the code will print out the divisible value
		
		counter++;//this increases the number in the loop
	}


	system("pause>0");
}