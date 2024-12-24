#include<iostream>
using namespace std;

// Inline function to check if a year is a leap year
inline void isLeapYear(int year){
    if((year % 100 != 0 && year % 4 == 0) || year % 400 == 0){
        cout << year << " is a leap year";
    } else {
        cout << year << " is not a leap year";
    }
}

int main(){
    int year;
    cin >> year;
    isLeapYear(year);       // Calls the inline function to check if it's a leap year
    return 0;
}