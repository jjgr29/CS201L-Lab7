// CS201L-Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Functions.h"

int main()
{
    ifstream inFile;
    ofstream outFile, errFile;

    inFile.open("PPShelter.csv");
    outFile.open("report.txt");
    errFile.open("error.txt");

    if (!inFile.good() || !outFile.good() || !errFile.good()) {
        cout << "Error opening files\n";
        return -1;
    }

    vector<Pet> allPets;
    readFile(inFile, errFile, allPets);

    char choice;
    choice = displayMenu();
    while (choice != 'q') {
        switch (choice) {
        case 'a':
            petsAvailable(outFile, allPets);
            break;
        case 'b':
            findPet(outFile, allPets);
            break;
        case 'c':
            listAdoption(outFile, allPets);
            break;
        }
        choice = displayMenu();
    }
    inFile.close();
    outFile.close();
    errFile.close();
}