//2. Write a program using cstring that can obtain a string from the user, then count the number of English letters (case-insensitive), digits, and other characters in it, and output the statistical results.
//Answer :

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char str[200];

    cout << "Enter a string: ";
    cin.getline(str, 200);

    int letters = 0, digits = 0, others = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else {
            others++;
        }
    }

    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Others: " << others << endl;

    return 0;
}