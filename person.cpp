/**Person class implementation*/
#include "pch.h"
#include "person.h"



using namespace std;


person::person(){
		newAge = 0;
		newWeight = 0;
		newHeight = 0;
	}

person::person(string name, int age, int weight, int height){
		newName = name;
		newAge = age;
		newWeight = weight;
		newHeight = height;
	}
person::~person() {}

string person::getName()const {
	return newName;
}
int person::getAge() const { 
	return newAge;
}
int person::getWeight() const { 
	return newWeight; }

int person::getHeight() const { 
	return newHeight; }

double person::BMI() {
	double BMI = (newWeight / (newHeight * newHeight)) * 10000;

	if (BMI < 20)
		cout << "Your BMI is lower than recomended!";
	else if (BMI >= 20 && BMI <= 25)
		cout << "Your BMI is within the healthy range";
	else
		cout << "Your BMI is higher than advised!";

	return BMI;
}

