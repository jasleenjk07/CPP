#include<iostream>
#include<iomanip>
#include<math.h>            // For mathematical constants like M_PI
using namespace std;

class Icecream{
public:
    // Method to calculate the volume of a square container
    float Quantity(int r){
        return r * r * r;
    }

    // Method to calculate the volume of a cone container
    float Quantity(int r, int h){
        return 0.33 * M_PI * r * r * h;
    }
};

int main(){
    Icecream ic;
    int choice;

    cin >> choice;          // Input the choice (1 for square, 2 for cone)

    if(choice == 1){
        // For square container
        int side;
        cin >> side;

        if(side < 1 || side > 50){
            cout << "Invalid input";
            return 0;
        }

        float volume = ic.Quantity(side);
        cout << fixed << setprecision(2) << volume << endl;

    } else if (choice == 2){
        // For cone container
        int radius, height;
        cin >> radius >> height;

        if(radius < 1 || radius > 50 || height < 1 || height > 50){
            cout << "Invalid input";
            return 0;
        }

        float volume = ic.Quantity(radius,height);
        cout << fixed << setprecision(2) << volume;

    } else {
        // Invalid choice
        cout << "Invalid choice";
    }
    return 0;
}