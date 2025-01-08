#include "Pet.h"


// Function to parse a date string in the format mm/dd/yyyy
void parseDate(const std::string& date, int& month, int& day, int& year) {
    char delimiter;
    istringstream iss(date);
    iss >> month >> delimiter >> day >> delimiter >> year;
}

// Function to convert a date to Julian day number
int dateToJulian(int month, int day, int year) {
    if (month <= 2) {
        year--;
        month += 12;
    }
    int A = year / 100;
    int B = 2 - A + (A / 4);
    int JD = (365.25 * (year + 4716)) + (30.6001 * (month + 1)) + day + B - 1524.5;
    return static_cast<int>(JD);
}
/*

// This is sample code to calculate the current age

void Pet::setAgeCurrent() {
    int m1, d1, y1;
    int m2, d2, y2;

    parseDate(birthDate, m1, d1, y1);

    struct tm timeNow;
    time_t now = time(0);
    localtime_s(&timeNow, &now);

    y2 = timeNow.tm_year + 1900;
    m2 = timeNow.tm_mon + 1;
    d2 = timeNow.tm_mday;

    int jd1 = dateToJulian(m1, d1, y1);
    int jd2 = dateToJulian(m2, d2, y2);

    int daysDifference = jd2 - jd1;

    double yearsDifference = daysDifference / 365.25; // Convert days to years, accounting for leap years

    ageCurrent = yearsDifference;


}
*/