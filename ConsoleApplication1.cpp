//User enters side lengths of triangle (a, b, c)
//Program will write out if triangle is equilateral, isosceles, or scalene

#include <iostream>

using namespace std;

int main() {

	float a, b, c;
	cout << "Please enter a, b, and c values: ";
	cin >> a >> b >> c;

	if (a == b && b == c) 
		cout << "Your triangle is an equalateral triangle.";
	
	else {
		if (a != b && b != c && a != c) 
			cout << "Your triangle is a scalence triangle.";
		
		else 
			cout << "Your triangle is an isosceles triangle.";
		
	}


	system("pause>0");
}