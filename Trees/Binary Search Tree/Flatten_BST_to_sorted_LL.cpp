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
    // Node *flattenBST(Node *root)
    // {
    //     if (root == nullptr) return nullptr;
        
    //     root->left = flattenBST(root->left);
    //     root->right = flattenBST(root->right);
        
    //     Node* l = root->left;
        
    //     if (l == nullptr) return root;
        
    //     Node *ptr = root->left;
    //     root->left = nullptr;
        
    //     while(ptr->right) {
    //         ptr = ptr->right;
    //     }
        
    //     ptr->right = root;
        
    //     return l;
    // }
   // Structure of a BST Node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
    
//     Node(int val) {
//         data = val;
//         left = right = nullptr;
//     }
// };

// Thinking:

// Assume recursion gives us flattened left ll and flattened right ll.
// Now there are two cases:
    // 1. Left ll exists.
        // we have to find the tail of left ll and attach it to root.
        // and root->right will be attached to head of right flattened ll.

    // 2. Left ll does'nt exists.
        // The root is the head of left ll (as left ll does'nt exits).
        // so only attach the root to the head of right flattened ll.

Node* flattenBST(Node* root) {
    // Base case: if the root is null, return null
    if (!root) return nullptr;

    // Recursively flatten the left and right subtrees
    // and return the head of flattened lists.
    Node* leftList = flattenBST(root->left);
    Node* rightList = flattenBST(root->right);

    // Set the current node's left pointer to null
    root->left = nullptr;

    // If there's a flattened left subtree, attach it to the current root
    if (leftList) {
        // Find the tail of the flattened left subtree
        Node* tail = leftList;
        while (tail->right) {
            tail = tail->right;
        }
        // Attach the tail of leftSubtree to the current root.
        tail->right = root;
        // Attach the right of current root to the head of flattened right list.
        root->right = rightList;

        // Return the left subtree since it is the new head of the flattened list.
        return leftList;
    }

    // If there's no left subtree, root is the head of the flattened list.
    root->right = rightList;
    return root;
}


};

int main() {
    
    return 0;
}