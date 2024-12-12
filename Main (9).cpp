// You are using GCC
#include<iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* createNode(int data, int priority){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = nullptr;
    return newNode;
}

static Node* head = nullptr;

void insert(int data, int priority){
    Node* newNode = createNode(data,priority);
    if(head == nullptr){
        head = newNode;
        return;
    } else {
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(){
    if(head == nullptr){
        cout << "Queue is empty";
    } else {
        Node* temp = head;
        while(temp != nullptr){
            if(temp->priority == 1) {
                cout << temp->data << " ";
            }
            temp = temp->next;
        }
    }
}

int main() {
    while(1){
        int n;
        cin >> n;
        if(n == 1){
            int element,priority;
            cin >> element >> priority;
            insert(element,priority);
        } else if (n == 2){
            
        } else if (n == 3){
            display();
        } else {
            break;
        }
    }
    return 0;
}