#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next; //Node *next;: This line declares a member variable named next in the Node class. The type of next is a pointer to a Node object. This pointer is used to link nodes in a linked list.
    
    Node(int data) {
        val = data;
        next = NULL;
    }
};

int main() {

    Node* n = new Node(10); //This line creates a new Node object with a value of 10 and dynamically allocates memory for it on the heap. The variable n is a pointer that holds the memory address (location) of this newly allocated Node object.

    //So, n is pointing to the memory location where the Node object with a value of 10 is stored. The memory address stored in the pointer n represents the starting address of the dynamically allocated memory for the Node object.

    cout << n->val << endl << n->next;

    return 0;
}