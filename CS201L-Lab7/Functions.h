#pragma once

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Pet.h"

using namespace std;

bool isDigits(string str);
void readFile(ifstream& inFile, ofstream& errFile, vector<Pet>& allPets);
char displayMenu();
void listAdoption(ofstream& outFile, vector<Pet> allPets);
void findPet(ofstream& outFile, vector<Pet> allPets);
void petsAvailable(ofstream& outFile, vector<Pet> allPets);