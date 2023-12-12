#include <iostream>
using namespace std;

class Node {
public:

    int val;
    Node* next;

    Node(int value) {
        val = value;
        next = NULL;
    }
};

class LinkedList {
public:

    Node* head = NULL;

    void insertAtTail(int value) {
        Node* new_node = new Node(value);

        if(head == NULL) {
            head = new_node;
        }

        else {
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    void display() {
        Node* temp = head;
        while(temp) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
Node* reverse(Node* &head) {

    Node* current_ptr = head->next;
    Node* forward_ptr;
    Node* previous_ptr = head;
    head->next = NULL;

    while(current_ptr != NULL) {
        forward_ptr = current_ptr->next;
        current_ptr->next = previous_ptr;
        previous_ptr = current_ptr;
        current_ptr = forward_ptr;
    }

    head = previous_ptr;
    return head;
}

Node* reverseByRecursion(Node* head) {

    if(head == NULL || head->next == NULL)
        return head;

    Node* t1 = head;
    Node* t2 = head->next;

    if(t2->next == NULL) {
        t2->next = t1;
        return t2;
    }

    else {
        Node* new_head = reverseByRecursion(t2);
        t2->next = t1;
        t1->next = NULL;
        return new_head;
    }
} 

// Node* reverseByRecursion(Node* &head) {
//     // Base case: check if the list is empty or has only one node
//     if (head == nullptr || head->next == nullptr) {
//         return head;
//     }

//     Node* t1 = head;
//     Node* t2 = t1->next;

//     // Base case: check if it's the last pair of nodes
//     if (!t2->next) {
//         t2->next = t1;
//         head->next = nullptr;
//         return t2;
//     }

//     Node* new_head = reverseByRecursion(t2->next);
//     t2->next = t1;
//     head->next = nullptr;
//     return new_head;
// }


int main() {
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(8);
    ll.insertAtTail(99);
    ll.insertAtTail(545);
    ll.insertAtTail(41);
    ll.insertAtTail(01);
    ll.insertAtTail(35);
    ll.insertAtTail(99);
    ll.insertAtTail(78);
    ll.display();
    Node* temp = reverseByRecursion(ll.head);
    while(temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
    
}