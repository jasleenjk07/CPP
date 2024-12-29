#include <iostream>
#include <iomanip>
using namespace std;

class Car {
private:
    string brand;
    double fuelConsumption;

public:
    // Constructor to initialize the car object
    Car(string b, double fc) : brand(b), fuelConsumption(fc) {}

    // Friend function to calculate fuel cost
    friend double calculateFuelCost(Car& car, double distance, double fuelPrice);
};

// Friend function definition
double calculateFuelCost(Car& car, double distance, double fuelPrice) {
    // Calculate the total fuel cost
    double fuelNeeded = (car.fuelConsumption * distance) / 100;
    double totalFuelCost = fuelNeeded * fuelPrice;
    
    return totalFuelCost;
}

int main() {
    string brand;
    double fuelConsumption, distance, fuelPrice;
    
    // Input values
    cin >> brand;

    cin >> fuelConsumption;

    cin >> distance;

    cin >> fuelPrice;
    
    // Create the Car object
    Car car(brand, fuelConsumption);
    
    // Calculate the fuel cost using the friend function
    double totalCost = calculateFuelCost(car, distance, fuelPrice);
    
    // Output the result, rounded to two decimal places
    cout << fixed << setprecision(2) << totalCost << endl;
    
    return 0;
}
