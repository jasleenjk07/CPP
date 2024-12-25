#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Outer loop: Controls the number of rows in the pattern
    for(int i = 1; i <= n; i++){
        // Inner loop: Prints '*' characters for the current row
        for(int j = 1; j <= i; j++){
            cout << setw(2) << "*";     // Prints '*' with a width of 2 for proper alignment
        }
        cout << endl;                   // Moves to the next line after printing all '*' for the current row
    }
    return 0;
}