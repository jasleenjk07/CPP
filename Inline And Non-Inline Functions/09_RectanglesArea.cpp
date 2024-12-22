#include<iostream>
using namespace std;

class Rectangle{
private:
    static int count;           // Static data member to keep track of rectangle objects
    int length;
    int width;

public:
    // Constructor to increment count when a rectangle object is created
    Rectangle(){
        count++;
    }

    // Static member function to get the total count of rectangle objects
    static int getCount(){
        return count;
    }

    // Member function to set the dimensions of the rectangle
    void setDimensions(int l, int w){
        length = l;
        width = w;
    }

    // Member function to calculate and return the area of the rectangle
    int getArea() const{
        return length * width;
    }
};

// Initialize the static data member
int Rectangle::count = 0;

int main(){
    int n;
    cin >> n;

    Rectangle rectangles[n];        // Array of Rectangle objects

    // Input dimensions for each rectangle and set them
    for(int i = 0; i < n; i++){
        int length, width;
        cin >> length >> width;
        rectangles[i].setDimensions(length,width);
    }

    // Output the total number of rectangles
    cout << "Total number of rectangles: " << Rectangle::getCount() << endl;

    // Output the area of each rectangle
    for(int i = 0; i < n; i++){
        cout << "Area of rectangle " << i + 1 << ": " << rectangles[i].getArea() << endl;
    }

    return 0;
}