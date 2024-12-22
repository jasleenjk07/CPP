#include<iostream>
using namespace std;

class Employee{
private:
    // Private static data member to track the number of Employee objects created
    static int count;

    // Private data member to store the salary of an employee
    int salary;

public: 
    // Constructor to increment the count when an object is created
    Employee(){
        count++;
    }

    // Static member function to get the total count of Employee objects
    static int getcount(){
        return count;
    }

    // Member function to set the salary of an employee
    void setSalary(int s){
        salary = s;
    }

    // Member function to get the salary of an employee
    int getSalary() const{
        return salary;
    }
};

// Initialize the static data member
int Employee::count = 0;

int main(){
    int n;
    
    cin >> n;

    Employee employees[n];
      
    for(int i = 0; i < n; i++){
        int salary;
        cin >> salary;
        employees[i].setSalary(salary);
    }

    cout << "Total number of employees: " << Employee::getcount() << endl;

    for(int i = 0; i < n; i++){
        cout << "Salary for employee " << i + 1 << ": " << employees[i].getSalary() << endl;
    }
    return 0;
}