#include<iostream>
using namespace std;

class Calculator{           // Class to perform basic arithmetic operations
    int a, b;
public:
    void input(){           // Method to input two integers from the user
        cin >> a >> b;
    }
    
    void display(){        // Method to display the results of various arithmetic operations
        cout << "Addition of two numbers: " << a + b << endl;
        cout << "Difference of two numbers: " << a - b << endl;
        cout << "Product of two numbers: " << a * b << endl;
        // Division of the two numbers, handling division by zero
        if(b == 0){
            cout << "Division by zero not possible" << endl;
        } else {
            cout << "Division of two numbers: " << a / b << endl;
        }
        // Modulus operation, handling division by zero
        if(b == 0){
            cout << "Division by zero not possible" << endl;
        } else {
            cout << "Modulus of two numbers: " << a % b << endl;
        }
    }
};

int main(){
    Calculator calc;      // Create an object of the Calculator class
    calc.input();
    calc.display();
    return 0;
}