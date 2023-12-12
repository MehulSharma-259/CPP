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

void deleteAlternateNodes(Node* head) {
    Node* current_node = head;
    while(current_node != NULL && current_node->next != NULL) {
        Node* temp = current_node->next;
        current_node->next = current_node->next->next;
        free(temp);
        current_node = current_node->next;
    }
}

int main() {

    LinkedList ll;
    int terms, count = 1;
    cout << "Enter number of terms: ";
    cin >> terms;

    while(count <= terms) {
        ll.insertAtTail(count);
        count++;
    }
    ll.display();

    deleteAlternateNodes(ll.head);
    ll.display();


    return 0;
}

// void insertAtHead(Node* &head, int value) {
//     Node* new_node = new Node(value);
//     new_node->next = head;
//     head = new_node;
// }

// void deleteAtPosition(Node* head, int position) {
//     Node* temp = head;
//     int count = 0;
//     while(count != position - 1) {
//         temp = temp->next;
//         count++;
//     }
//     Node* temp2 = temp->next;
//     temp->next = temp->next->next;
//     free(temp2);
// }

// void deleteAtLast(Node* head) {
//     Node* temp = head;
//     while(temp->next->next != NULL) {
//         temp = temp -> next;
//     }
//     Node* temp2 = temp->next;
//     temp->next = NULL;
//     free(temp2);
// }

// void deleteAlternate(Node* head, int length) {

//     int deletion = 0;
//     for(int i = 1 ; i < length ; i = i + 2) {

//         if(i == (length - 1))
//             deleteAtLast(head);

//         else
//             deleteAtPosition(head, (i - deletion));

//         deletion++;
//     }
// }

// void display(Node* head) {
//     Node* temp = head;
//     while(temp->next != NULL) {
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// void deleteAlternateOptimised(Node* head) {

//     Node* temp = head;
//     Node* deletion_node = temp->next;
//     while(true) {


//         if(deletion_node->next == NULL) {  // for last element of even list.
//             temp->next = NULL;
//             Node* to_free = deletion_node;
//             free(to_free);
//             break;
//         }

//         else {
//             Node* to_free = deletion_node;
//             temp->next = temp->next->next;

//             if(deletion_node->next->next == NULL) { // for last element of odd list.
//                 free(to_free);
//                 break;
//             }

//             else{ // not for last deletion.
//                 temp = temp->next;
//                 deletion_node = deletion_node->next->next;
//                 free(to_free);
//             } 
//         }    
//     }
// }

// int main() {
//     Node* head = NULL;
//     int terms;
    
//     cout << "Enter the number of terms: ";
//     cin >> terms;

//     int n = terms;
//     while(terms >= 0) {
//         insertAtHead(head, terms+1);
//         terms--;
//     }
//     display(head);
//     deleteAlternateOptimised(head);
//     display(head);
//     return 0;
// }