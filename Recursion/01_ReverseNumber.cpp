#include<iostream>
using namespace std;

// Function to reverse the number
void reverseNumber(int N){
    int reversed = 0;

    // Loop until the number becomes 0
    while(N > 0){
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N /= 10;
    }
    cout << reversed;
}

int main(){
    int N;
    cin >> N;
    reverseNumber(N);           // Call the reverseNumber function with the input number
    return 0;
}