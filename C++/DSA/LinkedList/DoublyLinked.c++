#include <iostream>

// Node class for doubly linked list
class Node {
public:
    int value;
    Node* next;
    Node* prev;
};

int main() {
    Node* head;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    // Allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes for doubly linked list
    one->prev = nullptr;
    one->next = two;
    two->prev = one;
    two->next = three;
    three->prev = two;
    three->next = nullptr;

    // Print the doubly linked list values
    head = one;
    while (head != nullptr) {
        std::cout << head->value << " ";
        head = head->next;
    }

    return 0;
}
