#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Output the number with a total width of 9 characters, filling empty spaces with '0'
    cout << setfill('0') << setw(9) << n;
    return 0;
}