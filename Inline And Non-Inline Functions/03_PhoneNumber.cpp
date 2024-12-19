#include<iostream>
#include<string>        // Include the library to work with string data type
using namespace std;

// Class to handle phone number validation
class phone_number{
public:
    // Method to check the validity of the phone number
    void check(string str){
        // Check if the length of the input string is 10 and all characters are digits
        if(str.length() == 10 && isAllDigits(str)){
            cout << "Your entered number is: " << str;
        } else {
            cout << "Entered Phone number is wrong";
        }
    }
private:
    // Helper function to check if the string contains only digits
    bool isAllDigits(string str){
        for(char c : str){
            if(!isdigit(c)){
                return false;
            }
        }
        return true;
    }
};

int main(){
    phone_number p;     // Create an object of the phone_number class
    string str;
    cin >> str;
    p.check(str);
    return 0;
}