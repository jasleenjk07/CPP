#include <iostream>    
using namespace std;    

class Box   {    
    private:    
        int length;    
    public:    
        // Constructor to initialize length to 0
        Box(){
            length = 0;
        }
        
        // Member function to get the length of the box from the user
        void get(){
            cin >> length;
        }

        // Friend function to calculate and return the volume of the box
        friend int printVolume(Box); 
};    

// Definition of the friend function to calculate the volume
int printVolume(Box b) {    
    return b.length * b.length * b.length;
}    

int main()  {    
    Box b;    
    b.get();
    cout<< printVolume(b)<<endl;    
    return 0;    
}    