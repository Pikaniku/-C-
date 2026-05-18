//1. Use C-style strings (cstring) to implement the string reversal function. That is, the user inputs a string, and the program reverses and outputs the string.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[200];

    cout << "Enter a string: ";
    cin.getline(str, 200);

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}