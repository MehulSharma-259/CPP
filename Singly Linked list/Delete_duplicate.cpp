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

    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtTail(int value) {
        Node* new_node = new Node(value);
        if(head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// My logic

// void deleteDuplicates(Node* head) { 
//     Node* current_node = head;
//     while(current_node != NULL && current_node->next != NULL) {

//         Node* temp = current_node->next;

//         while(current_node->next != NULL && current_node->val == temp->val) {
//             current_node->next = current_node->next->next;
//             Node* temp2 = temp;
//             temp = temp->next;
//             free(temp2);
//         } 
//         current_node = current_node->next;

//     }
// }

// Lecture logic

void deleteDuplicates(Node* head) {
    Node* current_node = head;
    while(current_node != NULL && current_node->next != NULL) {

        Node* temp = current_node->next;

        if(current_node->val == temp->val){
            current_node->next = current_node->next->next;

            free(temp);
        }
        else
            current_node = current_node->next;

    }
}
int main() {

    LinkedList ll;
    int terms, data, count = 1;
    cout << "Enter number of terms: ";
    cin >> terms;

    while(count <= terms) {
        cin >> data;
        ll.insertAtTail(data);
        count++;
    }

    ll.display();

    deleteDuplicates(ll.head);

    ll.display();


    return 0;
}