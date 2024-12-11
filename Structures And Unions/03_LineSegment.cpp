#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

// Define a structure to represent a point in 2D space
struct Point{
    float x;    // x-coordinate of the point
    float y;    // y-coordinate of the point
};

// Function to calculate the distance between two points
float calculateDistance(Point p1, Point p2){
    // Use the distance formula: √((x2 - x1)^2 + (y2 - y1)^2)
    return sqrt(pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2));
}

// Function to calculate the midpoint of a line segment between two points
Point calculateMidPoint(Point p1, Point p2){
    Point mid;  // Define a Point structure to store the midpoint
    
    // Midpoint formula: ((x1 + x2) / 2, (y1 + y2) / 2)
    mid.x = (p1.x + p2.x) / 2.0;
    mid.y = (p1.y + p2.y) / 2.0;
    
    return mid; // Return the calculated midpoint
}
int main(){
    Point p1,p2;    // Define two points to represent the endpoints of the line segment
    
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;
    
    float distance = calculateDistance(p1,p2);
    
    Point midPoint = calculateMidPoint(p1,p2);
    
    cout << fixed << setprecision(2) << "Distance: " << distance << endl;
    cout << fixed << setprecision(2) << "Midpoint: " << midPoint.x << " " << midPoint.y << endl;
    
    return 0;
}