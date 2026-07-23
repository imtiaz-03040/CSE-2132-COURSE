#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

Node* head = nullptr;

int main()
{
    Node* first = new Node();
    first->data = 1;
    first->next = nullptr;

    Node* second = new Node();
    second->data = 2;
    second->next = nullptr;

    Node* third = new Node();
    third->data = 3;
    third->next = nullptr;

    // Link the nodes
    head = first;
    first->next = second;
    second->next = third;

    // Traverse the linked list
    for (Node* ptr = head; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }

    return 0;
}
