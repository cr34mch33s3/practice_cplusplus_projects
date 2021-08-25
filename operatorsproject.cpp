#include <iostream>
 
using namespace std;

int main() {

	//+,-,*,/,%

	cout << 5 + 2 << endl;//7
	cout << 5 / 2 << endl;//2
	cout << 5 % 2 << endl;//1

	//++,--
	int counter = 7;
	counter++;
	cout << counter << endl;//8
	counter--;
	cout << counter << endl;//7
	
	int counter2 = 7;
	cout << ++counter2 << endl;//8
	cout << counter2-- << endl;//8
	cout << counter2 << endl;//7

	system("cls");

	//<,>,<=,>=,==,!=

	int a = 5, b = 8;

	cout << (a != b) << endl;

	system("cls");
	
	//&&,||,!

	//cout << !(a == 5 || b == 5);
	cout << (a == 5 && b == 5 + 3);

	system("cls");

	//=,+=,-=,*=,/=,%=

	int x = 5;
	x += 7;// means x = x + 7
	cout << x << endl;
	system("pause>0");
}