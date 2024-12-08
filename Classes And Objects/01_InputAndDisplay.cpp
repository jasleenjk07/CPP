#include<iostream>
using namespace std;

class Input{
    string name;        //Stores a name
    int x;              //Stores a number
public:
    Input(){            //Constructor to take input
        cin >> name;
        cin >> x;
    }

    void display(){    //Displays the stored data
        cout << x << ": " << name;
    }
};

int main(){
    Input in;         //Create an Input object
    in.display();     //Display the input data
    return 0;
}
