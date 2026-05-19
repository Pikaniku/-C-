//Q.1. 1. Define two arrays for storing characters, copy the characters in the second array to the end of the first array.
//Answer :

#include <iostream>
#include <iomanip>
using namespace std;

void task1() {
    cout << "\n========================================" << endl;
    cout << "TASK 1: Array Concatenation" << endl;
    cout << "========================================" << endl;

    char arr1[100] = "Hello, ";
    char arr2[] = "World!";

    cout << "Original Array 1: " << arr1 << endl;
    cout << "Array 2: " << arr2 << endl;

    int len1 = 0;
    while (arr1[len1] != '\0') len1++;

    int len2 = 0;
    while (arr2[len2] != '\0') len2++;

    for (int i = 0; i <= len2; i++) {
        arr1[len1 + i] = arr2[i];
    }

    cout << "After concatenation: " << arr1 << endl;
}

int main() {
    task1();
    return 0;
}
