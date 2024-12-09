#include<iostream>
using namespace std;

class dayOfWeek{                // Class to represent the day of the week
    int N;
public:
    void input(){               // Method to input the day number
        cin >> N;
    }
    
    void display(){            // Method to display the day of the week or appropriate message
        switch(N){
            case 1:
                cout << "Sunday";
                break;
            case 2:
                cout << "Monday";
                break;
            case 3:
                cout << "Tuesday";
                break;
            case 4:
                cout << "Wednesday";
                break;
            case 5:
                cout << "Thursday";
                break;
            case 6:
                cout << "Friday";
                break;
            case 7:
                cout << "Saturday";
                break;
            case 0:
                cout << "Weekend";
                break;
            default:
                cout << "Invalid";
                break;
        }
    }
};

int main(){
    dayOfWeek week;         // Create an object of the dayOfWeek class
    week.input();
    week.display();
    return 0;
}