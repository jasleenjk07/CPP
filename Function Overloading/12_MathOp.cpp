#include<iostream>
#include<iomanip>
using namespace std;

// Function to calculate the square of an integer
int calc(int x){
    return x * x;
}

// Function to calculate the modulus of two integers
int calc(int x, int y){
    return x % y;
}

// Function to perform division of two floating-point numbers
float calc(float x, float y){
    return x / y;
}

int main(){
    int int1, int2;
    float float1, float2;

    cin >> int1 >> int2 >> float1 >> float2;

    // Call the calc function and display the results
    cout << "Square of " << int1 << ": " << calc(int1) << endl;
    cout << "Modulus of " << int1 << ", " << int2 << ": " << calc(int1, int2) << endl;
    cout << fixed << setprecision(2) << "Quotient of " << float1 << ", " << float2 << ": " << calc(float1, float2) << endl;
    return 0;
}