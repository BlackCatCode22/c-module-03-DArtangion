#include <iostream>

using namespace std;

// Define a Node struct
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insertNode(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node by value
void deleteNode(Node*& head, int value) {
    if (!head) return;
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != value) {
        temp = temp->next;
    }
    if (temp->next) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

// Function to display all nodes in the list
void displayList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);

    cout << "Linked List: ";
    displayList(head);

    deleteNode(head, 20);
    cout << "After deleting 20: ";
    displayList(head);

    return 0;
}
