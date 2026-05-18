// Q.1. 1.Write a C++ program to input a positive integer and determine whether it is a prime number or not.

#include <iostream>
using namespace std;

int main() {
    int number;
    bool prime = true;

    cout << "Input a number: ";
    cin >> number;

    if (number <= 1) {
        cout << "Not a prime number";
    } else {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << "Prime number";
        else
            cout << "Not a prime number";
    }

    return 0;
}