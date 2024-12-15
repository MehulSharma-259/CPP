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

class Solution
{
public:

// Thinking:

// Assume recursion gives us flattened right ll.

// Now root->right = head of flattened right ll.
// If head exists then head->left = root.
// Update head = root.
// Now head points to root which is attached to right flattened ll.

// Call recursively for left ll.

void* flattenBST(Node* root, Node* &head) {
    // Base case: if the root is null, return null
    if (root == NULL) 
        return NULL;

    flattenBST(root->right, head);

    root->right = head;

    if(head)
        head->left = root;

    head = root;

    flattenBST(root->left, head);

}


};

int main() {
    
    return 0;
}