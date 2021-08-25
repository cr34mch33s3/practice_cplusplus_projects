//program tells you if a letter is a vowel or cosonant

#include <iostream>

using namespace std;

int main() {

	char letter;//letter is a char variable

	cout << "Please enter a letter: "; //user inputs a character
	cin >> letter;//system stores the character


	switch (letter)
	{
	case 'a'://user inputs a
	case 'A'://user inputs A
	case 'e'://user inputs e
	case 'E'://user inputs E
	case 'i'://user inputs i
	case 'I'://user inputs I
	case 'o'://user inputs o
	case 'O'://user inputs O
	case 'U'://user inputs U
	case 'u': //user inputs u
		cout << "This is the letter you entered: " << letter << endl << "This letter is vowel.";//if letter is vowel, it will output the letter and tell user it's a vowel
		break;

	case 'b'://user inputs b
	case 'B'://user inputs B
	case 'c'://user inputs c
	case 'C'://user inputs C
	case 'd'://user inputs d
	case 'D'://user inputs D
	case 'f'://user inputs f
	case 'F'://user inputs F
	case 'g'://user inputs g
	case 'G'://user inputs G
	case 'h'://user inputs h
	case 'H'://user inputs H
	case 'j'://user inputs j
	case 'J'://user inputs J
	case 'k'://user inputs k
	case 'K'://user inputs K
	case 'l'://user inputs l
	case 'L'://user inputs L
	case 'm'://user inputs m
	case 'M'://user inputs M
	case 'n'://user inputs n
	case 'N'://user inputs N
	case 'p'://user inputs p
	case 'P'://user inputs P
	case 'q'://user inputs q
	case 'Q'://user inputs Q
	case 'r'://user inputs r
	case 'R'://user inputs R
	case 's'://user inputs s
	case 'S'://user inputs S
	case 't'://user inputs t
	case 'T'://user inputs T
	case 'v'://user inputs v
	case 'V'://user inputs V
	case 'w'://user inputs w
	case 'W'://user inputs W
	case 'x'://user inputs x
	case 'X'://user inputs X
	case 'y'://user inputs y
	case 'Y'://user inputs Y
	case 'Z'://user inputs Z
	case 'z'://user inputs z
		cout << "This is the letter you entered: " << letter << endl << "This letter is consonant."; //if letter is consonant, it will output the letter and tell user it's a consonant

		break;

	default: cout << letter << " is not a valid letter. Please try again.";//if user enters anything other than a letter, it will tell the user the character is not valid
	}


	system("pause>0");
}