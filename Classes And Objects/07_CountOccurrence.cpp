#include<iostream>
#include<string>
using namespace std;

class Occurrence{               // Class to count the occurrences of a specific character in a string
    string str;
    char ch;
public:
    void input(){               // Method to input the string and character from the user
        getline(cin,str);
        cin >> ch;
    }
    
    void countOccurrence(){    // Method to count and display the occurrences of the character in the string
        int count =0;          // Initialize a counter to zero
        // Loop through each character in the string
        for(char c : str){
            if (c == ch){      // Check if the current character matches the input character
                count++;       // Increment the counter if there's a match
            }
        }
        cout << count;         // Output the total count of occurrences
    }
};

int main(){
    Occurrence occ;           // Create an object of the Occurrence class
    occ.input();
    occ.countOccurrence();
    return 0;
}