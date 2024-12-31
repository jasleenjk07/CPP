#include<iostream>
using namespace std;

// Function to calculate the total sum of divisors of numbers from 1 to n
int divisorSum(int n){
    int totalSum = 0;

    // Iterate over each number from 1 to n
    for(int i = 1; i <= n; i++){
        int sumOfDivisors = 0;

        // Find divisors of the current number
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                sumOfDivisors += j;
            }
        }
        totalSum += sumOfDivisors;
    }
    return totalSum;
}

int main(){
    int n;
    cin >> n;

    cout << divisorSum(n) << endl;
    return 0;
}