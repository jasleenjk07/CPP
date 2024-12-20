#include<iostream>
#include<iomanip>
using namespace std;

// Define a class named Total
class Total{
public:
    // Static method to calculate the total sales
    static double total(int n, double sales[]){
        double total = 0;
        for(int i = 0; i < n; i++){
            total += sales[i];
        }
        return total;
    }
};

int main(){
    Total t;            // Create an object of the Total class
    int n;
    cin >> n;
    
    double sales[n];

    for(int i = 0; i < n; i++){
        cin >> sales[i];
    }

    // Call the static method `total` to calculate total sales and display it
    cout << fixed << setprecision(2) << "Total Sales: " << t.total(n,sales);
    return 0;
}