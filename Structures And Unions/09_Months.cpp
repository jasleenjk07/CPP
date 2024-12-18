#include<iostream>
using namespace std;

// Enumeration to represent months of the year
enum Month{
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main(){
    int num;
    cin >> num;

    
    // Use a switch-case to determine the month name based on the input
    switch(num){
        case 1:
            cout << "Month: JANUARY";
            break;
        case 2:
            cout << "Month: FEBRUARY";
            break;
        case 3:
            cout << "Month: MARCH";
            break;
        case 4:
            cout << "Month: APRIL";
            break;
        case 5:
            cout << "Month: MAY";
            break;
        case 6:
            cout << "Month: JUNE";
            break;
        case 7:
            cout << "Month: JULY";
            break;
        case 8:
            cout << "Month: AUGUST";
            break;
        case 9:
            cout << "Month: SEPTEMBER";
            break;
        case 10:
            cout << "Month: OCTOBER";
            break;
        case 11:
            cout << "Month: NOVEMBER";
            break;
        case 12:
            cout << "Month: DECEMBER";
            break;
        default:
            cout << "Invalid month input";
            break;
    }
    return 0;
}