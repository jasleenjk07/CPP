#include <iostream>
#include <iomanip>
using namespace std;

class ComplexNumber {
private:
    double real;      // Real part of the complex number
    double imaginary; // Imaginary part of the complex number

public:
    // Constructor to initialize real and imaginary parts
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Friend function to multiply two ComplexNumber objects
    friend ComplexNumber multiply(const ComplexNumber& c1, const ComplexNumber& c2);

    // Function to display the complex number
    void display() const {
        cout << fixed << noshowpoint;
        if (real == (int)real) cout << (int)real; // Suppress decimal for integer values
        else cout << real;

        if (imaginary >= 0) {
            cout << " + ";
            if (imaginary == (int)imaginary) cout << (int)imaginary << "i";
            else cout << imaginary << "i";
        } else {
            cout << " - ";
            if (imaginary == (int)imaginary) cout << -(int)imaginary << "i";
            else cout << -imaginary << "i";
        }
        cout << endl;
    }
};

// Function to multiply two ComplexNumber objects
ComplexNumber multiply(const ComplexNumber& c1, const ComplexNumber& c2) {
    double realPart = c1.real * c2.real - c1.imaginary * c2.imaginary;
    double imaginaryPart = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return ComplexNumber(realPart, imaginaryPart);
}

int main() {
    double r1, i1, r2, i2;

    // Input the first complex number
    cin >> r1 >> i1;
    ComplexNumber c1(r1, i1);

    // Input the second complex number
    cin >> r2 >> i2;
    ComplexNumber c2(r2, i2);

    // Multiply the two complex numbers
    ComplexNumber result = multiply(c1, c2);

    // Display the result
    result.display();

    return 0;
}
