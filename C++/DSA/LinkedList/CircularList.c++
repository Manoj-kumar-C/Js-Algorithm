#include <iostream>

// Node class for circular linked list
class Node {
public:
    int value;
    Node* next;
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

    // Connect nodes for circular linked list
    one->next = two;
    two->next = three;
    three->next = one;

    // Print the circular linked list values
    head = one;
    for (int i = 0; i < 10; ++i) {
        std::cout << head->value << " ";
        head = head->next;
    }

    return 0;
}
