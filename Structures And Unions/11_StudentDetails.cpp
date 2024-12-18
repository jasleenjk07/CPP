#include<iostream>
#include<string.h>
using namespace std;

// Structure to represent a student's information
struct student{
    string name;
    int rollNo;
    float marks[5];
    int total = 0;
    float avg;
};

int main(){
    student st;
    getline(cin,st.name);
    cin >> st.rollNo;

    for(int i = 0; i < 5; i++){
        cin >> st.marks[i];
    }
    
    // Output the student's details
    cout << "NAME: " << st.name << endl;
    cout << "ROLL NO: " << st.rollNo << endl;
    int count = 0;

    // Calculate the total marks and count subjects with marks >= 50
    for(int i = 0; i < 5; i++){
        st.total += st.marks[i];
        if(st.marks[i] >= 50){
            count++;
        }
    }

    // Calculate the average marks
    st.avg = (float)st.total / 5.0;

    // Determine and display the result based on the number of passing subjects
    if(count == 4 || count == 5){
        cout << "RESULT: Pass" << endl;
    } else {
        cout << "RESULT: Fail" << endl;
    }

    // Classify and display the student's performance based on the average marks
    if(st.avg >= 75){
        cout << "Distinction";
    } else if (st.avg >= 60 && st.avg <= 74){
        cout << "First Class";
    } else if (st.avg >= 50 && st.avg <= 59){
        cout << "Second Class";
    }
    return 0;
}