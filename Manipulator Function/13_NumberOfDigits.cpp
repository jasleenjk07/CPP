#include <iostream>
using namespace std;

// Class Declaration
class IntegerManipulator {
private:
    int number; // To store the integer

public:
    // Member function to set the number
    void setNumber(int n);

    // Member function to count the number of digits
    int countDigits() const;

    // Member function to count the number of odd digits
    int countOddDigits() const;
};

// Definition of member functions
void IntegerManipulator::setNumber(int n) {
    number = n;
}

int IntegerManipulator::countDigits() const {
    int count = 0;
    int temp = number;
    while (temp > 0) {
        temp /= 10;
        ++count;
    }
    return count;
}

int IntegerManipulator::countOddDigits() const {
    int oddCount = 0;
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            ++oddCount;
        }
        temp /= 10;
    }
    return oddCount;
}

// Main Function
int main() {
    IntegerManipulator manipulator;

    // Input the number
    int n;
    cin >> n;

    // Set the number in the manipulator
    manipulator.setNumber(n);

    // Output the results
    cout << "Number of digits: " << manipulator.countDigits() << endl;
    cout << "Number of odd digits: " << manipulator.countOddDigits() << endl;

    return 0;
}
