#include <iostream>
using namespace std;

// Definition of a doubly linked list node
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// Doubly Linked List Class
class DoublyLinkedList {
public:
    Node* head;

    // Constructor
    DoublyLinkedList() {
        head = NULL;
    }

    // Function to insert a node at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Function to delete a node at a given position
    Node* deleteNode(Node* head, int x) {
        if (head == NULL) return NULL; // If list is empty, return NULL

        Node* temp = head;

        // If deleting the first node
        if (x == 1) {
            head = head->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete temp;
            return head;
        }

        // Traverse to the node at position x
        int count = 1;
        while (count < x && temp != NULL) {
            temp = temp->next;
            count++;
        }

        // If position is out of bounds
        if (temp == NULL) {
            cout << "Position out of bounds" << endl;
            return head;
        }

        // If deleting a middle or last node
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }

        delete temp; // Free memory
        return head;
    }

    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Driver Code
int main() {
    DoublyLinkedList dll;
    dll.insert(1);
    dll.insert(2);
    dll.insert(3);
    dll.insert(4);
    dll.insert(5);

    cout << "Original List: ";
    dll.display();

    // Position to delete
    cout << "Deleting node at position " ;
    dll.head = dll.deleteNode(dll.head, 3);

    cout << "Updated List: ";
    dll.display();

    return 0;
}
