// Justin Blakeman
// Lab7MyStack.cpp
//  10/21/18

//  All functions are initialized in this file to be implemented in Lab7Driver.cpp
  

#include "Lab7MyStack.h"


This function is used to reverse the letters in a string using a stack data structure

string stringReversal1(string input)
{
	string newString;
	stack<char> data;
	if (data.empty()) 
	{
		for (int i(0);  i < input.size(); i++)
		{
			data.push(input.at(i)); //adds the character that is in the array string at i to the stack until all chars have been coppied into stack
		}
		while(!data.empty())
		{
			newString.push_back(data.top()); //copies all chars from stack to a new string in reverse order until stack is empty
			data.pop(); //removes the top char from the stack so that next element can be moved to the new string
		}
	}
	return newString;
}

string stringReversal2(string input)
{
	string newString; 
	vector<char> data;
	if (data.empty())
	{
		for (int i(0); i < input.size(); i++)
		{
			data.push_back(input.at(i));//adds character to the vector from the array string while i is less than the size of the array string
		}
		while (!data.empty())
		{
			newString.push_back(data.back()); //adds the char from the back of the vector to the new string while the vector is not empty
			data.pop_back(); //removes the last char in the vector so that the next char can be added to the new string
		}
	}
	return newString;
}

string stringReversal3(string input)
{
	string newString;
	list<char> data;
	if (data.empty())
	{
		for (int i(0); i < input.size(); i++)
		{
			data.push_back(input.at(i)); //adds character to the list from the array string while i is less than the size of the array string
		}
		while (!data.empty())
		{
			newString.push_back(data.back());//adds the char from the back of the list to the new string while the vector is not empty
			data.pop_back(); //removes the last char in the list so that the next char can be added to the new string
		}
	}
	return newString;
}

//Defines function for MyStack class
bool MyStack::isEmpty() const //This function checks to see if a MyStack object is empty
{
	if (data.empty()) //data is a vector or a list so the same STL functions can be called
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Defines function for MyStack Class
void MyStack::push(char& c) //This Function adds a character to the MyStack Object
{
	data.push_back(c); //Again uses vector/list functions to add char to the MyStack object
}

//Defines function for MyStack Class
char MyStack::pull() //This function returns the char at the top of the list and then removes that char
{
	char b = data.back();//initializing char b to the element at the back of the vector to act as top of MyStack object
	data.pop_back();//removes char from the back of the vector to continue to the next value
	return b;
}

string stringReversal4(string input)
{
	string newString;
	MyStack data;
	if (data.isEmpty())
	{
		for (int i(0); i < input.size(); i++)
		{
			data.push(input.at(i)); //Adds char at i in array string to data, which is a MyStack data structure until i is no longer less than the size of the string
		}
		while (!data.isEmpty())
		{
			newString.push_back(data.pull());//adds the top char from MyStack data to the new string and moves on to next char until data is empty
		}
	}
	return newString;
}