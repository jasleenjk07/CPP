#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
};

static Node* head = nullptr;

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

void insert(int data){
    Node* newNode = createNode(data);
    if(head == nullptr){
        head = newNode;
        return ;
    } else {
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    }
}

void push(int data){
    Node* newNode = createNode(data);
    
    Node* temp = head;
    head = newNode;
    head->next = temp; 
}

void insertAt(int data,int pos){
    Node* newNode = createNode(data);
    
    if(pos == 1){
        head = newNode;
        return;
    }
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        if(count == pos - 1){
            temp = temp->next;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp = temp->next;
    }
}
void display(){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void display2(){
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->prev;
    }
}


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        insert(val);
    }
    display();
    cout << endl;
    display2();
    return 0;
}