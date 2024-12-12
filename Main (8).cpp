// You are using GCC
#include<iostream>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int data){
    TreeNode* newNode = new TreeNode();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

TreeNode* insert(TreeNode* root, int data){
    if(root == nullptr){
        return createNode(data);
    }
    if(data < root->data){
        root->left = insert(root->left,data);
    } else {
        root->right = insert(root->right,data);
    }
    return root;
}
int count = 0;
void inOrderTraversal(TreeNode* root){
    if(root == nullptr){
        return;
    }
    inOrderTraversal(root->right);
    count++;
    cout << root->data << " ";
    inOrderTraversal(root->left);
}

int main(){
    int n;
    cin >> n;
    static TreeNode* root = nullptr;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        root = insert(root,element);
    }
    inOrderTraversal(root);
    cout << endl << count;
    return 0;
}