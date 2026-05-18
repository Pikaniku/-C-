// 4. Write a C++ function int getRand(int m, int n) to generate a random number in the range of [m,n] and then in the main function, generate 10 random integers in the range of [1,100] using the getRand function and calculate the average value of these 10 numbers.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRand(int m, int n) {
    return m + rand() % (n - m + 1);
}

int main() {
    srand(time(0));
    
    int sum = 0;
    int count = 10;
    
    cout << "Generating " << count << " random numbers in range [" << 1 << "," << 100 << "]: " << endl;
    
    for (int i = 1; i <= count; i++) {
        int number = getRand(1, 100);
        cout << number << " ";
        sum = sum + number;
    }
    
    double average = sum / static_cast<double>(count);
    
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}