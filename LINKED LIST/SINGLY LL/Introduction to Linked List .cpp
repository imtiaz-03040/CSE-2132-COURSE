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
    Node* s1 = new Node(); s1->data = 1; s1->next = nullptr;
    Node* s2 = new Node(); s2->data = 2; s2->next = nullptr;
    Node* s3 = new Node(); s3->data = 3; s3->next = nullptr;
    Node* s4 = new Node(); s4->data = 4; s4->next = nullptr;
    Node* s5 = new Node(); s5->data = 5; s5->next = nullptr;
    Node* s6 = new Node(); s6->data = 6; s6->next = nullptr;
    Node* s7 = new Node(); s7->data = 7; s7->next = nullptr;

    head = s1;
    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
    s5->next = s6;
    s6->next = s7;

    // Print original list
    for (Node* ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->data << " ";
    cout << endl;

    // Delete node with value 4
    for (Node* ptr = head; ptr->next != nullptr; ptr = ptr->next)
    {
        if (ptr->next->data == 4)
        {
            ptr->next = ptr->next->next;
            break;
        }
    }

    // Print after deleting 4
    for (Node* ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->data << " ";

    return 0;
}
