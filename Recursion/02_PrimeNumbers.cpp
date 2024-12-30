#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

// Function to generate primes in the given range
void generatePrimesInRange(int start, int end){
    // Loop through the range and check for prime numbers
    for(int i = start; i <= end; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

int main(){
    int start, end;
    cin >> start >> end;
    generatePrimesInRange(start,end);           // Call the function to generate primes within the range
    return 0;
}