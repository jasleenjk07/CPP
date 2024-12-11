#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

// Define a constant value for PI
#define PI 3.14

// Define a structure to represent a circle
struct Circle{
    float radius;
};

int main(){
    Circle c;   // Declare a Circle object
    cin >> c.radius;
    
    // Calculate the circumference of the circle
    // Formula: Circumference = 2 * PI * radius
    float circumference = 2 * PI * c.radius; 

    // Calculate the area of the circle
    // Formula: Area = PI * radius^2
    float area = PI * pow(c.radius,2); 
    
    cout << fixed << setprecision(2) << circumference << endl;
    cout << fixed << setprecision(2) << area << endl;
    
    return 0;
}