#include<iostream>
using namespace std;

class Date{                             // Class to represent and manage a date
    int day, month, year;
public:
    Date(){
        cin >> day >> month >> year;
    }
    
    void leapYear(){                   // Method to check if the year is a leap year and print the date in the required format
        cout << day << " " << month << " " << year << endl;
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            cout << year << " is a leap year";
        } else {
            cout << year << " is not a leap year";
        }
    }
};

int main(){
    Date d;                        // Create an object of the Date class
    d.leapYear();
    return 0;
}