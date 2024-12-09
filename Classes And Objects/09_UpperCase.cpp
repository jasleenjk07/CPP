#include<iostream>
#include<algorithm>         // For the transform function
using namespace std;

class Person{               // Class to store and display information about a person
    string name, gender;
    int age;
public:
    void input(){           // Method to input the details of the person
        cin >> name;
        cin >> age;
        cin >> gender;
    }
    
    void display(){         // Method to display the details of the person
        transform(name.begin(),name.end(),name.begin(),::toupper);
        transform(gender.begin(),gender.end(),gender.begin(),::toupper);
        cout << name << " " << age << " " << gender;
    }
};

int main(){
    Person p;               // Create an object of the `Person` class
    p.input();
    p.display();
    return 0;
}