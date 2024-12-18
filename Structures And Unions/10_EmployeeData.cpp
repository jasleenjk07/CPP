#include<iostream>
using namespace std;

// Structure to represent employee details
struct DEPT{
    string name;
    int ID;
    int years;
    int salary;
};

int main(){
    int n;              // Variable to store the number of employees
    cin >> n;           // Read the number of employees from the user

    DEPT dept[n];       // Array of structures to store employee details

    // Loop to input and process details for each employee
    for(int i = 0; i < n; i++){
        // Input employee details
        cin >> dept[i].name >> dept[i].ID >> dept[i].years >> dept[i].salary;

        // Display employee details
        cout << "Employee Name: " << dept[i].name << endl;
        cout << "Employee Id: " << dept[i].ID << endl;
        cout << "years of experience: " << dept[i].years << endl;

        // Calculate updated salary based on years of experience
        if(dept[i].years >= 1 && dept[i].years <= 4){
            // 2% salary increment for 1-4 years of experience
            dept[i].salary += 0.02 * dept[i].salary;
            cout << "salary: " << dept[i].salary << endl;
        } else if (dept[i].years >= 5 && dept[i].years <= 9){
            // 5% salary increment for 5-9 years of experience
            dept[i].salary += 0.05 * dept[i].salary;
            cout << "salary: " << dept[i].salary << endl;
        } else if (dept[i].years >= 10){
            // 10% salary increment for 10 or more years of experience
            dept[i].salary += 0.10 * dept[i].salary;
            cout << "salary: " << dept[i].salary << endl;
        } else {
            // Output "Invalid" if the years of experience is not valid
            cout << "Invalid";
        }
    }
    return 0;
}