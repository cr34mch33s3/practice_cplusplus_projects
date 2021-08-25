
//BMI Calculator
//weight(kg)/height*height(m)
//Underweight < 18.5
//Normal Weight 18.5-24.9
//Overweight > 25

#include <iostream>

using namespace std;

int main() {

	float weight, height, bmi;

	cout << "Please Enter your weight in kg: ";
	cin >> weight;// user inputs weight

	cout << "Please Enter your Height in m: ";
	cin >> height;//user inputs height

	bmi = weight / (height * height);//calculates bmi

	cout << "Your BMI is " << bmi << endl; // outputs bmi

	if (bmi < 18.5)// if bmi is less than 18.5
		cout << "You are underweight.";// outputs underweight

	else if (bmi > 18.5 && bmi < 25.0)// if bmi is between 18.5 and 25.0
			cout << "You are normal."; //outputs normal
	else
			cout << "You are overweight.";//outputs overweight

	system("pause>0");
}