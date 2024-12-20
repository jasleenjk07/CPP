#include<iostream>
using namespace std;

// Define a class named Demo
class Demo{
public:
    // Method to display values of x and y (predefined values)
    void get(int x, int y){
        cout << "Value of X: " << x << endl;
        cout << "Value of Y: " << y << endl;
    }

    // Method to display values of a and b (user-input values)
    void getv(int a , int b){
        cout << "Value of X: " << a << endl;
        cout << "Value of Y: " << b << endl;
    }
};

int main(){
    Demo d;             // Create an object of the Demo class
    int x = 10;
    int y = 20;
    int a,b;

    // Input values for a and b from the user
    cin >> a;
    cin >> b;

    // Call the `get` method to display predefined values
    d.get(x,y);

    // Call the `getv` method to display user-input values
    d.getv(a,b);
    return 0;
}