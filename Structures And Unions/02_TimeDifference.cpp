// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

// Structure to represent time
struct Time{                
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two times
Time calculateDifference(Time t1, Time t2){
    Time diff;
    
    // Convert both times to total seconds
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    // Calculate the difference in seconds
    int diffSeconds = totalSeconds1 - totalSeconds2;
    
    // Convert the difference back to hours, minutes, and seconds
    diff.hours = diffSeconds/3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;
    
    return diff;
}

int main(){
    Time t1,t2;

    // Input the first time (T1)
    char colon; // To discard the ':' character
    cin >> t1.hours >> colon >> t1.minutes >> colon >> t1.seconds;

    // Input the second time (T2)
    cin >> t2.hours >> colon >> t2.minutes >> colon >> t2.seconds;
    
    Time diff = calculateDifference(t1,t2);
    
    cout << setw(2) << setfill('0') << diff.hours << ":" << setw(2) << setfill('0') << diff.minutes << ":" << setw(2) << setfill('0') << diff.seconds;
    return 0;
}