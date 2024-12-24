#include<iostream>
using namespace std;

// Inline function to count even digits in the square of a given number
inline int countEvenNumbers(int n){
    int s = n * n;          // Calculate the square of the input number
    int count = 0;          // Variable to keep track of the count of even digits
    
    // Loop to process each digit of the square
    while(s > 0){
        int digit = s % 10;
        if(digit % 2 == 0){
            count++;
        }
        s /= 10;
    }
    cout << count;
}

int main(){
    int n;
    cin >> n;
    countEvenNumbers(n);    // Call the function to count even digits in the square
    return 0;
}