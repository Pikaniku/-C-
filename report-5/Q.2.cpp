//2. Design a Student class that should include the ID (int type), gender (represented by "M" for male and "F" for female), birthday (you need define Date first), and C++ grade (double type). Define the constructors of this Student class (one with no parameters and one with parameters), and define an output function to display the student's information. 
//In the main function, define three students and display the information of the student with the highest C++ grade.

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display() {
        cout << day << "/" << month << "/" << year;
    }
};

class Student {
private:
    int id;
    char gender;
    Date birthday;
    double cppGrade;

public:
    Student() {
        id = 5040150;
        gender = 'M';
        cppGrade = 0.0;
    }

    Student(int i, char g, int d, int m, int y, double grade) {
        id = i;
        gender = g;
        birthday = Date(d, m, y);
        cppGrade = grade;
    }

    double getCppGrade() {
        return cppGrade;
    }

    void displayInfo() {
        cout << "ID: " << id << endl;
        cout << "Gender: " << gender << endl;
        cout << "Birthday: ";
        birthday.display();
        cout << endl;
        cout << "C++ Grade: " << cppGrade << endl;
    }
};

int main() {
    Student student1;
    Student student2(5040151, 'M', 15, 3, 2000, 85.5);
    Student student3(504052, 'F', 22, 7, 2001, 92.0);

    cout << "Student 1 Information:" << endl;
    student1.displayInfo();
    cout << endl;

    cout << "Student 2 Information:" << endl;
    student2.displayInfo();
    cout << endl;

    cout << "Student 3 Information:" << endl;
    student3.displayInfo();
    cout << endl;

    Student highest = student1;

    if (student2.getCppGrade() > highest.getCppGrade()) {
        highest = student2;
    }

    if (student3.getCppGrade() > highest.getCppGrade()) {
        highest = student3;
    }

    cout << "Student with Highest C++ Grade:" << endl;
    highest.displayInfo();

    return 0;
}