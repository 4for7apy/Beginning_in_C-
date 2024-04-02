#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* Next;
};

Node* head, *temp;

int main() {
    int choice;
    head = NULL;
    temp = NULL; 

    while (true) { 
        cout << "Do you want to continue (0=no, 1=yes): ";
        cin >> choice;

        if (choice == 0) {
            break; 
        }

        Node* newnode = new Node();
        cout << "Enter data in the Node: ";
        cin >> newnode->data;
        newnode->Next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        }
        else {
            temp->Next = newnode;
            temp = newnode;
        }
    }

    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->Next;
    }

    
    temp = head;
    while (temp != NULL) {
        Node* toDelete = temp;
        temp = temp->Next;
        delete toDelete;
    }

    return 0;
}









z