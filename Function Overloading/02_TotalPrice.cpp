#include<iostream>
#include<iomanip>
#include<math.h>            // Use cmath for modern C++ compatibility
using namespace std;

class Bill{
public:
    double calculateTotalPrice(double price){
        return price;
    }
    
    double calculateTotalPrice(double price, int quantity){
        double totalPrice = price * quantity;
        return totalPrice;
    }
    
    double calculateTotalPrice(double price, int quantity, double discountPercentage){
        double discountedPrice = price * (1-(discountPercentage/100));
        double totalPrice = discountedPrice * quantity;
        return totalPrice;
    }
};
int main(){
    Bill b;
    int choice;
    
    while(true){
        cin >> choice;
        
        if(choice == 1){
            // Single item price
            double price;
            cin >> price;
            
            cout << fixed << setprecision(2) << b.calculateTotalPrice(price) << endl;
            
        } else if (choice == 2){
            // Multiple items without discount
            double price;
            int quantity;
            
            cin >> price >> quantity;
            cout << fixed << setprecision(2) << b.calculateTotalPrice(price,quantity) << endl;
            
        } else if (choice == 3){
            // Multiple items with discount
            double price, discountPercentage;
            int quantity;
            
            cin >> price >> quantity >> discountPercentage;
            
            cout << fixed << setprecision(2) << b.calculateTotalPrice(price,quantity,discountPercentage) << endl;
            
        } else if (choice == 4){
            // Exit condition
            break;
        } else {
            // Invalid choice
            cout << "Invalid";
        }
    }
    return 0;
}