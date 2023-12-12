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

void printInReverse(Node* head) {
    Node* temp = head;
    if(temp->next == NULL) {
        cout << temp->val << "->";
        return;
    }

    else {
        printInReverse(temp->next);
        cout << temp->val << "->";
    }
}

int main() {
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.display();
    printInReverse(ll.head);
    cout << "NULL" << endl; 
}