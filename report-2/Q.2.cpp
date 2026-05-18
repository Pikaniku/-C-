// Q.2. 2. Write a C++ program to calculate the sum of the first 1000 terms using loop statements:

#include <iostream>
using namespace std;

int main() {
    double sum = 0;

    int a = 1, b = 2;
    int c = 2, d = 3;

    for (int i = 1; i <= 1000; i++) {
        double term;

        if (i == 1) {
            term = 2.0 / 1;
        } else if (i == 2) {
            term = 3.0 / 2;
        } else {
            int next_c = c + d;
            c = d;
            d = next_c;

            int next_a = a + b; 
            a = b;
            b = next_a;

            term = (double)d / b;
        }
        if (i % 2 == 1)
            sum = sum + term;
        else
            sum = sum - term;
    }

    cout << "Result = " << sum << endl;

    return 0;
}