#include<iostream>
#include<iomanip>
using namespace std;

// Function to calculate speed without acceleration
double calculateSpeed(double distance, double Time){
    double speed = distance / Time;
    cout << fixed << setprecision(2) << speed << endl;
    return speed;
}

// Function to calculate speed with acceleration
double calculateSpeed(double distance, double Time, double acceleration){
    double Speed = (distance / Time) + acceleration * Time;
    cout << fixed << setprecision(2) << Speed << endl;
    return Speed;
}

int main(){
    double distance, Time, accT, accP;
    cin >> distance;
    cin >> Time;
    cin >> accT;
    cin >> accP;
    
    // Call functions with appropriate arguments
    calculateSpeed(distance, Time);                 // Without acceleration
    calculateSpeed(distance, Time, accT);           // With acceleration of Train(accT)
    calculateSpeed(distance, Time, accP);           // With acceleration of Plane(accP)
    return 0;
}