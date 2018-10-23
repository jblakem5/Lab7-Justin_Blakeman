// Justin Blakeman
// Lab7MyStack.cpp
//  10/21/18

//This file is used to test all functions created in Lab7MyStack.h and Lab7MyStack.cpp

#include "pch.h"
#include "Lab7MyStack.h"


// main() tests Lab7MyStack.cpp/h
int main()
{
	
	string test1;
	cout << "Enter a string for Test 1: " << endl;
	cin >> test1;
	cout << "The results of Test 1 are: " << stringReversal1(test1) << endl << endl;

	string test2;
	cout << "Enter a string for Test 2: " << endl;
	cin >> test2;
	cout << "The results of Test 2 are: " << stringReversal2(test2) << endl << endl;

	string test3;
	cout << "Enter a string for Test 3: " << endl;
	cin >> test3;
	cout << "The results of Test 3 are: " << stringReversal3(test3) << endl << endl;

	string test4;
	cout << "Enter a string for Test 4: " << endl;
	cin >> test4;
	cout << "The results of Test 4 are: " << stringReversal4(test4) << endl << endl;

	system("pause");
	return 0;
}