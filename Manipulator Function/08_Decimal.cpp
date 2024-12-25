#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Check for valid input
    if(n <= 1 || n >= 100){
        cout << "Invalid";
        return 1;
    }

    // Output: Display decimal numbers from 0.1 to n with specific formatting
    for(int i = 1; i <= n; ++i){
        cout << setw(3) << fixed << setprecision(1) << (0.1 * i);
        
        // Print spaces after each number except the last one
        if(i < n){
            cout << " ";
        }
    }
    return 0;
}