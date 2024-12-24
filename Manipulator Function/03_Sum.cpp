#include<iostream>
using namespace std;

// Inline function to calculate the sum of squares of the first 'n' even numbers
inline int sumOfSquaresEven(int n){
    int evenSum = 0;
    for(int i = 1; i <= n; i++){
        int even = 2 * i;           // Calculate the i-th even number (2, 4, 6, ...)
        evenSum += even * even;
    }
    cout << evenSum << endl;
}

// Inline function to calculate the sum of squares of the first 'n' odd numbers
inline int sumOfSquaresOdd(int n){
    int oddSum = 0;
    for(int i = 1; i <= n; i++){
        int odd = 2 * i - 1;        // Calculate the i-th odd number (1, 3, 5, ...)
        oddSum += odd * odd;
    }
    cout << oddSum;
}

int main(){
    int n;
    cin >> n;
    sumOfSquaresEven(n);            // Calculate and display the sum of squares of even numbers
    sumOfSquaresOdd(n);             // Calculate and display the sum of squares of odd numbers
    return 0;
}