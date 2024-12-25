#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    // Display the number in decimal format (default format for integers)
    cout << "Decimal format: " << n << endl;

    // Display the number in octal format using the 'oct' manipulator
    cout << "Octal format: " << oct << n << endl;

    // Display the number in hexadecimal format using the 'hex' manipulator
    cout << "Hexadecimal format: " << hex << n << endl;
    return 0;
}