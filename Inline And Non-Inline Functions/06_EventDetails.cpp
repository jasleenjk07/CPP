#include<iostream>
using namespace std;

// Define a class to handle Event-related operations
class Event{
public:
    // Method to display the total number of participants
    void total(int N){
        cout << "Total Participants: " << N;
    }
};

int main(){
    Event et;           // Create an object of the Event class
    int N;
    cin >> N;

    int id[N];          // Array to store participant IDs
    string name[N];     // Array to store participant names
    
    // Loop to input participant details
    for(int i = 0; i < N; i++){
        cin >> id[i];
        cin >> name[i];
    }
    
    et.total(N);
    return 0;
}