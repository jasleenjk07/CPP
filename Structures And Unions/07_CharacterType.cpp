#include<iostream>
using namespace std;

// Enumeration to classify characters as VOWEL, CONSONANT, or INVALID
enum CharType{
    VOWEL,          // Represents vowels (a, e, i, o, u)
    CONSONANT,      // Represents consonants (alphabetic characters excluding vowels)
    INVALID         // Represents non-alphabetic characters
};

// Function to classify a character as VOWEL, CONSONANT, or INVALID
CharType classifyChar(char ch){
    if(isalpha(ch)){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return VOWEL;
        }
        return CONSONANT;
    }
    return INVALID;
}

int main(){
    char ch;
    cin >> ch;

    // Classify the input character
    CharType result = classifyChar(ch);
    
    // Use a switch-case to print the classification result
    switch(result){
        case VOWEL:
            cout << "vowel";
            break;
        case CONSONANT:
            cout << "consonant";
            break;
        default:
            cout << "Invalid input";
            break;
    }
    return 0;
}