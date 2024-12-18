#include<iostream>
using namespace std;

// Structure to represent a patient's information
struct patient{
    int id;
    int gender;
    int age;
};

int main(){
    patient p;
    int n;
    cin >> n;

    int mcount = 0;
    int fcount = 0;
    int acount = 0;

    // Loop to process each patient's details
    for(int i = 0; i < n; i++){
        // Input patient's ID, gender, and age
        cin >> p.id >> p.gender >> p.age;

        // Count the number of males and females
        if(p.gender == 1){      // Gender 1 indicates male
            mcount++;
        } else {                // Gender 2 indicates female
            fcount++;
        }

        // Count the number of patients older than 40
        if(p.age > 40){
            acount++;
        }
    }

    cout << mcount << " " << fcount << endl;
    cout << acount;
    return 0;
}