
#pragma once
//class definition

#ifndef PERSON_H
#define PERSON_H


#include<iostream>
#include <string>

class person{
private:
	std::string newName;
	int newAge;
	double newWeight;
	int newHeight;
public:
	//default constructor
	person();
	// overload constructor
	person(std::string, int, int, int);
	//destructor
	~person();
	//Body Mass Index
	double BMI();
	//accesors and modifiers 
	string getName()const;
	int getAge() const;
	int getWeight() const;
	int getHeight() const;
	


};

#endif
