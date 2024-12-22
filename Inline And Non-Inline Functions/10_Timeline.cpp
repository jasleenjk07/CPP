#include<iostream>
using namespace std;

// Class representing a timeline with date and time
class Timeline{
public:
    // Function to set and display the timeline details
    void set(int hours, int minutes, int date, int months, int years){
        // Check if the input stream encountered an error
        if(cin.fail()){
            cout << "Invalid";
        } else {
            cout << "Date: " << date << "-" << months << "-" << years << endl;
            cout << "Time: " << hours << "hrs" << minutes << "mins" << endl;
            hours = hours * 60 + minutes;
            cout << "Total mins: " << hours;
        }
    }
};

int main(){
    Timeline t;     // Create an object of the Timeline class
    int hours, minutes, date, months, years;

    cin >> hours >> minutes >> date >> months >> years;
    
    t.set(hours,minutes,date,months,years);
    return 0;
}