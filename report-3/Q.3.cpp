// 3. Write a C++ function int daySum(int year, int month=1, int day=1) with default parameters to print the sum of days according to the date provided in the parameter list. Test this function in the main function.

#include <iostream>
using namespace std;

int daySum(int year, int month = 1, int day = 1);

int main() {
    cout << "=== Testing daySum Function with Default Parameters ===\n\n";
    
    cout << "Test 1: daySum(2026, 5, 15)" << endl;
    cout << "Result: " << daySum(2026, 5, 15) << "\n\n";
    
    cout << "Test 2: daySum(2012, 5)" << endl;
    cout << "Result: " << daySum(2012, 5) << "\n\n";
    
    cout << "Test 3: daySum(2022)" << endl;
    cout << "Result: " << daySum(2022) << "\n\n";
    
    cout << "Test 4: daySum(2028, 12, 31)" << endl;
    cout << "Result: " << daySum(2028, 12, 31) << "\n\n";
    
    cout << "Test 5: daySum(1997, 1, 1)" << endl;
    cout << "Result: " << daySum(1997, 1, 1) << endl;
    
    return 0;
}

int daySum(int year, int month, int day) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[2] = 29;
    }
    
    int totalDays = 0;
    
    for (int i = 1; i < month; i++) {
        totalDays += daysInMonth[i];
    }
    
    totalDays += day;
    
    cout << "Date: " << day << "/" << month << "/" << year << endl;
    
    return totalDays;
}