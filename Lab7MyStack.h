// Justin Blakeman
// Lab7MyStack.h
// 10/21/18
// All functions are defined in this file to be initialized in Lab7MyStack.cpp


#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <list>

using namespace std;

string stringReversal1(string input);

string stringReversal2(string input);

string stringReversal3(string input);


/*
This class is used to create objects that mirror the
abilities of a stack from the Stack STL only
*/
class MyStack
{
	list<char> data;

public:
	bool isEmpty() const;
	void push(char& c); 
	char pull(); 
};

string stringReversal4(string input);