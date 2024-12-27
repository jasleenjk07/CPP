#include<iostream>
using namespace std;

// Overloaded function to handle integers
void add(int a, int b, int c){
    cout << a << endl;
    cout << a + b<< endl;
    cout << a + b + c<< endl;
}

// Overloaded function to handle strings
void add(string a, string b, string c){
    cout << a << endl;
    cout << a + b<< endl;
    cout << a + b + c<< endl;
}
int main(){
    string int_type;
    cin >> int_type;
    
    if(int_type == "int"){
        // Handle integer inputs
        int a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        
        add(a,b,c);
    } else if (int_type == "str"){
        // Handle string inputs
        string a,b,c;
        cin >> a;
        cin >> b;
        cin >> c;
        
        add(a,b,c);
    } else {
        cout << "Invalid input type";
    }
    return 0;
}