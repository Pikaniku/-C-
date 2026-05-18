//2. Design a two-dimensional vector class Dot that contains two private member variables x and y. The following functionalities are required to be implemented:
//Overload the - operator to perform subtraction between two two-dimensional vectors.
//Overload the * operator to perform multiplication between a vector and a scalar.
//Design a friend function dotProduct to calculate the dot product of two two-dimensional vectors.

#include <iostream>
using namespace std;

class Dot {
    double x, y;
public:
    Dot(double a = 0, double b = 0) {
        x = a;
        y = b;
    }
    
    double getX() const {
        return x;
    }
    
    double getY() const {
        return y;
    }
    
    friend const Dot operator-(const Dot& a, const Dot& b);
    friend Dot operator*(const Dot& v, double k);
    friend ostream& operator<<(ostream& out, const Dot& d);
    friend istream& operator>>(istream& in, Dot& d);
    friend double dotProduct(const Dot& a, const Dot& b);
};

const Dot operator-(const Dot& a, const Dot& b) {
    return Dot(a.getX() - b.getX(), a.getY() - b.getY());
}

Dot operator*(const Dot& v, double k) {
    return Dot(v.getX() * k, v.getY() * k);
}

ostream& operator<<(ostream& out, const Dot& d) {
    out << "(" << d.x << ", " << d.y << ")";
    return out;
}

istream& operator>>(istream& in, Dot& d) {
    in >> d.x >> d.y;
    return in;
}

double dotProduct(const Dot& a, const Dot& b) {
    return a.x * b.x + a.y * b.y;
}

int main() {
    Dot v1, v2;
    double scalar;
    
    cout << "Enter x and y for vector v1: ";
    cin >> v1;
    
    cout << "Enter x and y for vector v2: ";
    cin >> v2;
    
    cout << "Enter scalar value: ";
    cin >> scalar;
    
    cout << "\nv1 = " << v1 << endl;
    cout << "v2 = " << v2 << endl;
    cout << "v1 - v2 = " << v1 - v2 << endl;
    cout << "v1 * " << scalar << " = " << v1 * scalar << endl;
    cout << "Dot product of v1 and v2 = " << dotProduct(v1, v2) << endl;
    
    return 0;
}

