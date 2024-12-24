#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long int n;
    cin >> n;

    int digitCount[10] = {0};           // Array to count the occurrences of each digit (0-9), initialized to 0
    
    // Loop to extract and count each digit in the number
    while(n > 0){
        int digit = n % 10;
        digitCount[digit]++;
        n /= 10;
    }

    // Loop to display the count of each digit
    for(int i = 0; i < 10; i++){
        if(digitCount[i] > 0){
            cout << "Digit " << i << ": " << setw(2) << digitCount[i] << " times" << endl;
            // setw(2) ensures the output is formatted with a width of 2 characters for alignment
        }
    }
    return 0;
}