#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next = nullptr;
};

Node* head = nullptr;

int main()
{
    Node* first = new Node();
    first->data = 1;
    first->next = nullptr;

    Node* sec = new Node();
    sec->data = 2;
    sec->next = nullptr;

    Node* thi = new Node();
    thi->data = 3;
    thi->next = nullptr;

    Node* four = new Node();
    four->data = 4;
    four->next = nullptr;

    Node* fiv = new Node();
    fiv->data = 5;
    fiv->next = nullptr;

    Node* six = new Node();
    six->data = 6;
    six->next = nullptr;

    Node* sev = new Node();
    sev->data = 7;
    sev->next = nullptr;

    head = first;
    first->next = sec;
    sec->next = thi;
    thi->next = four;
    four->next = fiv;
    fiv->next = six;
    six->next = sev;

    // Print original list
    for (Node* ptr = head; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
    cout << endl;

    // First modification
    for (Node* ptr = head, *prev1 = nullptr, *prev2 = nullptr;
         ptr != nullptr;
         prev2 = prev1, prev1 = ptr, ptr = ptr->next)
    {
        if (ptr->data == 4)
        {
            prev2->next = ptr;
        }
    }

    // Print after first modification
    for (Node* ptr = head; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }
    cout << endl;

    // Second modification
    for (Node* ptr = head, *prev = nullptr;
         ptr != nullptr;
         prev = ptr, ptr = ptr->next)
    {
        if (ptr->data == 5)
        {
            ptr->next = ptr->next->next;
        }
    }

    // Print after second modification
    for (Node* ptr = head; ptr != nullptr; ptr = ptr->next)
    {
        cout << ptr->data << " ";
    }

    return 0;
}
