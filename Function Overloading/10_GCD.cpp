#include <iostream>
using namespace std;

// Fraction class to represent a fraction
class Fraction {
private:
    int numerator;   // Numerator of the fraction
    int denominator; // Denominator of the fraction
public:
    // Constructor to initialize the fraction
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {}

    // Function to simplify the fraction
    void simplify() {
        int gcd = __gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    // Friend function to add two fractions
    friend Fraction addMixedFraction(const Fraction& f1, const Fraction& f2);

    // Function to display the fraction
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
};

// Friend function to add two fractions
Fraction addMixedFraction(const Fraction& f1, const Fraction& f2) {
    int num1 = f1.numerator;
    int den1 = f1.denominator;
    int num2 = f2.numerator;
    int den2 = f2.denominator;

    // Calculate the numerator and denominator of the result
    int resultNumerator = num1 * den2 + num2 * den1;
    int resultDenominator = den1 * den2;

    // Create a new Fraction object
    Fraction result(resultNumerator, resultDenominator);
    result.simplify(); // Simplify the result
    return result;
}

int main() {
    int num1, den1, num2, den2;

    // Input first fraction
    cin >> num1 >> den1;
    Fraction f1(num1, den1);

    // Input second fraction
    cin >> num2 >> den2;
    Fraction f2(num2, den2);

    // Add the fractions
    Fraction result = addMixedFraction(f1, f2);

    // Display the result
    result.display();

    return 0;
}
