#include<iostream>
using namespace std;

class Input{
    string name;
    int x;
public:
    Input(){
        cin >> name;
        cin >> x;
    }

    void display(){
        cout << x << ": " << name;
    }
};

int main(){
    Input in;
    in.display();    
    return 0;
}