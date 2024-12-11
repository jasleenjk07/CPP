#include <iostream>
using namespace std;

// Enum to classify character types
enum CharacterType {
    VOWEL,
    CONSONANT,
    INVALID
};

// Function to classify a character
CharacterType classifyCharacter(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase for simplicity
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            return VOWEL;
        } else {
            return CONSONANT;
        }
    }
    return INVALID;
}

int main() {
    char inputChar;
    cin >> inputChar;

    // Get the classification
    CharacterType type = classifyCharacter(inputChar);

    // Print the output based on the classification
    switch (type) {
        case VOWEL:
            cout << "vowel" << endl;
            break;
        case CONSONANT:
            cout << "consonant" << endl;
            break;
        case INVALID:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
