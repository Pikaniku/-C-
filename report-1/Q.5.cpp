//Q.5. Write a multiway if-else statement that classifies the value of a variable n into one of the following categories and writes out an appropriate message. n < 0 or 0 ... n ... 1 or n > 1

#include <iostream>
using namespace std;

int main() {
double n;
cout<<"please input any number from -infinity to +infinity number : ";
    cin >> n;

    if (n < 0.0) {
        cout << "The number is less than 0." << endl;
    }
    else if (n <= 1.0) {
        cout << "The number is between 0 and 1." << endl;
    }
    else {
        cout << "The number is greater than 1." << endl;
    }

    return 0;
}