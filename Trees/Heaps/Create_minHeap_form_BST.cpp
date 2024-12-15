#include<bits/stdc++.h>
using namespace std;
//User function Template for C++

/* Node of the binary search tree  */
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inOrder(Node* root, vector<int>& in) {
    if(root == NULL)
        return;

    inOrder(root->left, in);
    in.push_back(root->data);
    inOrder(root->right, in);
}

void buildHeap(Node* root, vector<int>&in, int& idx) {
    if(root == NULL)
        return;

    root->data = in[idx++];
    buildHeap(root->left, in, idx);
    buildHeap(root->right, in, idx);
}

void preOrderPrint(Node* root) {
    if(root == NULL)
        return;

    cout << root->data << " ";
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}

int main() {

    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    vector<int> in;

    inOrder(root, in);
    int idx = 0;
    buildHeap(root, in, idx);

    preOrderPrint(root);



    return 0;
}