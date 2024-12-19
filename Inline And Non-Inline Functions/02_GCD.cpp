#include<iostream>
using namespace std;

// Inline function to calculate the GCD of two numbers
inline int gcd(int x, int y){
    // The function uses the Euclidean algorithm to compute GCD
    while(y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;       // Return the greatest common divisor
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0;
}