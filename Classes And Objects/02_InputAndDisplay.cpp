#include<iostream>
#include<string>
using namespace std;

class Doctor{
    string name, address;           //Stores the doctor's name and address
    int ward_number;                //Stores the doctor's ward number
public:
    Doctor(){                       //Constructor to take input
        getline(cin,name);
        getline(cin,address);
        cin >> ward_number;
    }
    
    void display(){                 //Display the doctor's information
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Ward Number: " << ward_number;
    }
};
int main(){
    Doctor doc;                     //Create a Doctor object
    doc.display();                  //Display the doctor's details
    return 0;
}