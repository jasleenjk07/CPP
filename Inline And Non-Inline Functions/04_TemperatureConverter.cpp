#include<iostream>
#include<iomanip>
using namespace std;

// Class to handle temperature conversion
class TemperatureConverter{
public:
    // Method to convert temperature from Celsius to Fahrenheit and Kelvin
    void convert(double T){
        cout << fixed << setprecision(2) << "Temperature in Fahrenheit: " << (9.0/5.0 * T) + 32 << endl;
        cout << fixed << setprecision(2) << "Temperature in Kelvin: " << T + 273.15;
    }
};

int main(){
    TemperatureConverter tc;        // Create an instance of the class
    double T;
    cin >> T;
    tc.convert(T);
    return 0;
}