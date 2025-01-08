#pragma once 
#include <time.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace std;

class Pet {
private:
	string ID;
	string name;
	string dateTime;
	string birthDate;
	double ageAtDateTime;  //NOTE: this is calculated
	double ageCurrent;	   //NOTE: this is calculated
	string outcomeType;
	string type;
	string sex;
	string breed;

public:
	//getters & setters
};