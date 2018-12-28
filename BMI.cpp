// BMI.cpp the contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main()
{
	string name;
	int age;
	int weight;
	int height;

	cout << "Welcome to FitBitLike!\n" << "To find out your BMI,please enter your:\n";
	cout << "name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	cout << "weight: "; 
	cin >> weight;
	cout << "height: ";
	cin >> height;

	person person_1(name, age, weight, height);
	cout << person_1.BMI();;
	

	return 0;
}

