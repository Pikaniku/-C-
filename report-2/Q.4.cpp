// Q.4. 4. Write a C++ program to output all prime numbers in the range of [2,1000] using loop statements.

#include <iostream>
using namespace std;

int main() {

    for (int i = 2; i <= 1000; i++) {
        bool Primenumber = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                Primenumber = false;
                break;
            }
        }

        if (Primenumber) {
            cout << i << " ";
        }
    }

    return 0;
}
