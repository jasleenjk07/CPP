#include<iostream>
using namespace std;

// Enumeration to represent directions
enum direction{
    North = 1, East, West, South
};

int main(){
    int num;
    cin >> num;

    // Use a switch-case to determine the direction based on the input
    switch(num){
        case 1:
            cout << "We are headed towards North";
            break;
        case 2:
            cout << "We are headed towards East";
            break;
        case 3:
            cout << "We are headed towards West";
            break;
        case 4:
            cout << "We are headed towards South";
            break;
        default:
            cout << "Invalid Input";    // Output for any input not in the range 1-4
            break;
    }
    return 0;
}