#include<iostream>
#include<iomanip>           // For fixed and setprecision
using namespace std;

class Item{
    int itemNumber;
    float cost;

public:
    // Inline method to set item details
    inline void setDetails(int number, float itemCost){
        itemNumber = number;
        cost = itemCost;
    }

    // Inline method to calculate total cost
    inline float calculateTotalCost(int quantity){
        return cost * quantity;
    }
};

int main(){
    Item item;              // Create an object of the Item class
    int number, quantity;
    float cost;
    
    cin >> number;
    cin >> cost;
    cin >> quantity;

    item.setDetails(number,cost);
    
    float totalCost = item.calculateTotalCost(quantity);

    cout << fixed << setprecision(2) << "Total cost: " << totalCost << endl; 
    return 0;
}
