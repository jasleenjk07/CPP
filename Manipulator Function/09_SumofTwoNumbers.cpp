#include<iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int sum = a + b;

    // Determine if the sum is odd or even and display result in boolean format
    cout << boolalpha << (sum % 2 != 0) << endl;
    return 0;
}