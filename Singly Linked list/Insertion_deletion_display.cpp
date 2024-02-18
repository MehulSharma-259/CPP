# include <iostream>
using namespace std;

class Node {
public:

    int val;
    Node* next; // Node pointer named next which points to a next node.

    Node(int data) {
        val = data;
        next = NULL;
    }
};


void insertAtHead(Node* &head, int value) { // Node* &head here we want a node pointer and we are accessing its value by reference.

    Node* new_node = new Node(value); // creating a new_node pointer which points to the dynamically created object of above mentioned node class and has the data = value.

    new_node->next = head; // connect the new_node to the previously created first node and its address is stored in head.

    head = new_node; // pointing head to new_node basically making new_node the first node.

}

void insertAtTail(Node* head, int value) {
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    Node* new_node = new Node(value);
    temp->next = new_node;
    // new_node->next = NULL; it is not necessary as new_node->next will have NULL by default as we have done it in the constructor.
}

void insertAtPosition(Node* head, int value, int position) {
    Node* temp = head;
    Node* new_node = new Node(value);
    int count = 0;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next; // assign the address of next node to new_node->next.
    temp->next = new_node; // changes the value of temp->next to new_node means now temp->next will have the address of new_node.

}

void updationAtPosition(Node* head, int value, int position) {

    Node* temp = head;
    int count = 0;
    while(count < position){
        temp = temp->next;
        count++;
    }

    temp->val = value;

}

void deletionAtHead(Node* &head) {
    Node* temp = head;
    head = head->next;
    free(temp);
}

void deletionAtPosition(Node* head, int position) {

    int count = 0;
    Node* temp = head;
    while(count < position - 1) {
        temp = temp->next;
        count++;
    }
    Node* temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}

void deletionAtTail(Node* head) {
    Node* secondLast = head;
    while(secondLast->next->next != NULL) {
        secondLast = secondLast->next;
    }

    Node* temp = secondLast->next;
    secondLast->next = NULL;
    free(temp);
}

void display(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {

    Node* head = NULL; // head pointer pointing to null means that linked list is empty.
    // cout << head->val << endl;
    insertAtHead(head, 20);
    display(head);
    insertAtHead(head, 10);
    display(head);
    insertAtTail(head, 400);
    display(head);
    insertAtTail(head, 500); 
    display(head);
    insertAtPosition(head, 555, 3);
    display(head);
    updationAtPosition(head, 9, 3);
    display(head);
    // deletionAtHead(head);
    // display(head);
    // deletionAtTail(head);
    // display(head);
    deletionAtPosition(head, 2);
    display(head);

    return 0;

}