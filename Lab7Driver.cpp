// Justin Blakeman
// Lab7MyStack.cpp
//  10/21/18

//This file is used to test all functions created in Lab7MyStack.h and Lab7MyStack.cpp

#include "pch.h"
#include "Lab7MyStack.h"


// main() tests Lab7MyStack.cpp/h
int main()
{

	string str1;
	cout << "Enter a string for Reversal: " << endl;
	cin >> str1;
	cout << "The reverse of that is " << stringReversal1(str1) << endl << endl;

	string str2;
	cout << "Enter a 2nd string for Reversal: " << endl;
	cin >> str2;
	cout << "The reverse of that is " << stringReversal1(str2) << endl << endl;

	string str3;
	cout << "Enter a 3rd string for Reversal: " << endl;
	cin >> str3;
	cout << "The reverse of that is " << stringReversal1(str3) << endl << endl;

	string str4;
	cout << "Enter a string 4th for Reversal: " << endl;
	cin >> str4;
	cout << "The reverse of that is " << stringReversal1(str4) << endl << endl;

	system("pause");
	return 0;
}