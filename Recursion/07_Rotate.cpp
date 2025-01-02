#include <iostream>
using namespace std;

// Function to rotate the dimensions
void rotate(int& a, int& b, int& c) {
    int temp = a; // Store the value of a
    a = b;        // Rotate: a becomes b
    b = c;        // Rotate: b becomes c
    c = temp;     // Rotate: c becomes the original a
}

// Function to find the smallest value among a, b, and c
int& getSmallest(int& a, int& b, int& c) {
    if (a <= b && a <= c) return a;
    else if (b <= a && b <= c) return b;
    else return c;
}

int main() {
    int x, y, z;

    // Read input values for x, y, and z
    cin >> x >> y >> z;

    // Display values before rotation
    cout << "Before Rotation: x: " << x << " y: " << y << " z: " << z << endl;

    // Perform rotation
    rotate(x, y, z);

    // Display values after rotation
    cout << "After Rotation: x: " << x << " y: " << y << " z: " << z << endl;

    // Find and display the smallest value
    int& smallest = getSmallest(x, y, z);
    cout << "The smallest value among x, y, z: " << smallest << endl;

    return 0;
}
