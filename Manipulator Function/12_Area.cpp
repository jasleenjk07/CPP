#include<iostream>
#include<iomanip>
using namespace std;

// Define the Area class
class Area{
public:
    // Inline function to calculate the area of a square
    inline int squareArea(int side){
        return side * side;
    }

    // Inline function to calculate the area of a rectangle
    inline int rectangleArea(int length, int breadth){
        return length * breadth;
    }

    // Inline function to calculate the area of a circle
    inline float circleArea(float radius){
        float PI = 3.14;
        return PI * radius * radius;
    }

    // Inline function to calculate the area of a parallelogram
    inline float parallelogramArea(float base, float height){
        return base * height;
    }
};

int main(){
    Area area;          // Create an object of the Area class


    int squareSide;
    cin >> squareSide;

    int rectLength, rectBreadth;
    cin >> rectLength >> rectBreadth;

    float circleRadius;
    cin >> circleRadius;

    float paraBase, paraHeight;
    cin >> paraBase >> paraHeight;

    cout << "Area of the square: " << area.squareArea(squareSide) << endl;
    cout << "Area of the rectangle: " << area.rectangleArea(rectLength,rectBreadth) << endl;
    cout << fixed << setprecision(2) << "Area of the circle: " << area.circleArea(circleRadius) << endl;
    cout << fixed << setprecision(2) <<"Area of the parallelogram: " << area.parallelogramArea(paraBase, paraHeight);
    return 0;
}