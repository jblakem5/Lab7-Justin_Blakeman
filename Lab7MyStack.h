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

string stringReversal1(string input);//declaring function 

string stringReversal2(string input);//declaring function

string stringReversal3(string input);//declaring function


/*
This class is used to create objects that mirror the 
abilities of a stack from the Stack STL but use vectors and their 
STL functions to achieve this. 
*/
class MyStack 
{
	//vector<char> data;
	list<char> data; //uses lists, vectors can work as well

public:
	bool isEmpty() const; //declaring function
	void push(char& c); //declaring function
	char pull(); //declaring function
};

string stringReversal4(string input); //declaring function