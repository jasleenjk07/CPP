#include<iostream>
using namespace std;

class Student{
private:
    static int count;           // Static data member to keep track of the total number of students
    int marks[5];               // Array to store marks of a student in 5 subjects

public:
    // Constructor to increment the count when a new Student object is created
    Student(){
        count++;
    }

    // Static member function to return the total number of students
    static int getCount(){
        return count;
    }

    // Member function to set the marks of a student
    void setMarks(int m[]){
        for(int i = 0; i < 5; i++){
            marks[i] = m[i];
        }
    }

    // Member function to retrieve the marks of a student
    void getMarks(){
        for(int i = 0; i < 5; i++){
            cout << marks[i] << " ";
        }
    }
};

// Initialize the static data member
int Student::count = 0;

int main(){
    int n;
    cin >> n;

    Student students[n];

    // Input marks for each student
    for(int i = 0; i < n; i++){
        int m[5];
        for(int j = 0; j < 5; j++){
            cin >> m[j];
        }
        students[i].setMarks(m);
    }

    cout << "Total number of students: " << Student::getCount() << endl;

    for(int i = 0; i < n; i++){
        cout << "Marks of student " << i + 1 << ": ";
        students[i].getMarks();
        cout << endl;
    }
    return 0;
}