#include<iostream>
using namespace std;

// Class to perform various mathematical operations
class Operation{
public:
    // Inline function to perform addition, subtraction, multiplication, division, and modulus operations
    inline int mathOperations(int a, int b){
        cout << "Addition of two numbers: " << a + b << endl;
        cout << "Difference of two numbers: " << a - b << endl;
        cout << "Product of two numbers: " << a * b << endl;
        cout << "Division of two numbers: " << a / b << endl;
        cout << "Modulus of two numbers: " << a % b << endl;
    }
};

int main(){
    Operation op;       // Create an instance of the Operation class
    int a, b;
    
    cin >> a >> b;

    // Call the mathOperations function to perform and display results
    op.mathOperations(a,b);
    return 0;
}