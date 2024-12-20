#include<iostream>
using namespace std;

// Define a class to perform integer manipulations
class IntegerManipulator{
public: 
    int count = 0;
    int oddCount = 0;

    // Method to compute the number of digits and count the odd digits
    void result(int n){
        while(n > 0){
            int value;
            value = n % 10;
            count++;
            n /= 10;
            
            // Check if the digit is odd
            if(value % 2 != 0){
                oddCount++;
            }
        }

        // Display the results
        cout << "Number of digits: " << count << endl;
        cout << "Number of odd digits: " << oddCount;
    }
};

int main(){
    IntegerManipulator in;          // Create an instance of the IntegerManipulator class
    int n;
    cin >> n;
    in.result(n);
    return 0;
}