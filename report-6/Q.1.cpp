//1. Design a complex number class Complex that contains two private member variables, the real part and the imaginary part. The following functions are required to be implemented:
//Overload the + operator to implement the addition of two complex numbers.
//Overload the << operator to output the information of a complex number.
//Design a friend function multiply to calculate the product of two complex numbers.
//Answer :

#include <iostream>
using namespace std;

class Complex {
    double real, imag;
public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    double getReal() const { return real; }
    double getImag() const { return imag; }

    friend const Complex operator+(const Complex& a, const Complex& b);
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
    friend Complex multiply(const Complex& a, const Complex& b);
};

const Complex operator+(const Complex& a, const Complex& b) {
    return Complex(a.getReal() + b.getReal(), a.getImag() + b.getImag());
}

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0) out << " + " << c.imag << "i";
    else out << " - " << -c.imag << "i";
    return out;
}

istream& operator>>(istream& in, Complex& c) {
    in >> c.real >> c.imag;
    return in;
}

Complex multiply(const Complex& a, const Complex& b) {
    double r = a.real * b.real - a.imag * b.imag;
    double i = a.real * b.imag + a.imag * b.real;
    return Complex(r, i);
}

int main() {
    Complex c1, c2;

    cout << "Enter real and imaginary parts for c1: ";
    cin >> c1;

    cout << "Enter real and imaginary parts for c2: ";
    cin >> c2;

    cout << "\nc1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c1 + c2 << endl;
    cout << "c1 * c2 = " << multiply(c1, c2) << endl;

    return 0;
}