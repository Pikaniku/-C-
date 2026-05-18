//Q.6. Write a multiway switch statement that classifies the variable score of int type into following categories and writes out an appropriate message.
//A: score>=90
//B: 80<=score<90
//C: 70<=score<80
//D: 60<=score<70
//F: score<60

#include <iostream>
using namespace std;

int main() {
    int score;
    
    cout << "Enter your score: ";
    cin >> score;

    switch (score / 10) {
        case 10:
        case 9:
            cout << "Your grade is A." << endl;
            break;

        case 8:
            cout << "Your grade is B." << endl;
            break;

        case 7:
            cout << "Your grade is C." << endl;
            break;

        case 6:
            cout << "Your grade is D." << endl;
            break;

        default:
            cout << "Your grade is F." << endl;
    }

    return 0;
}
