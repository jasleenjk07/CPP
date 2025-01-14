// You are using GCC
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

union Employee{
    int ID;
    char name[21];              // Maximum length of 20 + 1 for null terminator
    char dob[11];               // Maximum length of 10 + 1 for null terminator
    char doj[11];
    float salary;
};

int main(){
    Employee emp;

    cin >> emp.ID;
    int empID = emp.ID;         // Store ID since the value in union will be overwritten later
    
    cin.ignore();               // Ignore leftover newline from previous input
    cin.getline(emp.name,21);
    char empName[21];
    strcpy(empName,emp.name);   // Copy to another variable to preserve data
    
    cin.getline(emp.dob,11);
    char empDOB[11];
    strcpy(empDOB,emp.dob);
    
    cin.getline(emp.doj,11);
    char empDOJ[11];
    strcpy(empDOJ,emp.doj);
    
    cin >> emp.salary;
    float empSalary = emp.salary;
    
    cout << "ID : " << empID << endl; 
    cout << "Name : " << empName << endl; 
    cout << "DOB : " << empDOB << endl; 
    cout << "DOJ : " << empDOJ << endl; 
    cout << fixed << setprecision(1) << "Salary : " << empSalary; 
    return 0;
}