// 2. Write a C++ function getArea to calculate the area of a given shape. Note that the shape could be a square, circle, triangle and rectangle. Using the overloading mechanism and test all the overloaded getArea functions in the main function.

#include <iostream>
using namespace std;

double getArea(double side);
double getArea(double width, double length);
double getArea(float radius);
double getArea(float base, float height);

int main() {
    cout << "Square area: " << getArea(5.0) << endl;
    cout << "Rectangle area: " << getArea(8.0, 4.0) << endl;
    cout << "Circle area: " << getArea(3.0f) << endl;
    cout << "Triangle area: " << getArea(6.0f, 4.0f) << endl;
    return 0;
}

double getArea(double side) {
    return side * side;
}

double getArea(double width, double length) {
    return width * length;
}

double getArea(float radius) {
    return 3.14 * radius * radius;
}

double getArea(float base, float height) {
    return 0.5 * base * height;
}