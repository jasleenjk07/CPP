#include<iostream>
using namespace std;

// Function prototype for two integer
int fun1(int num1, int num2, int num3){
    return num1 * num2 * num3;
}

// Function prototype for three integers
int fun2(int num1, int num2){
    return num1 + num2;
}

int main(){
    int n;
    cin >> n;
    
    if(n == 2){
        int num1, num2;
        cin >> num1 >> num2;
        
        cout << fun2(num1,num2);
    } else if (n == 3){
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        
        cout << fun1(num1,num2,num3);
    } else {
        cout << "Invalid";
    }
    return 0;
}