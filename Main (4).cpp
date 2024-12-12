#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == key){
            return mid;
        }
        
        if(arr[mid] < key){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int result = binarySearch(arr,n,key);
    if(result != -1){
        cout << result;
    } else {
        cout << "Not Found";
    }
    return 0;
}