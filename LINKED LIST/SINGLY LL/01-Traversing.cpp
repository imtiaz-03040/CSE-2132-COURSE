#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

int main()
{
    Node *head, *n1, *n2, *n3, *n4, *n5, *n6, *n7;

    n1 = new Node();
     n1->data = 1;
    n2 = new Node();
    n2->data = 2;
    n3 = new Node();
    n3->data = 3;
    n4 = new Node();
    n4->data = 4;
    n5 = new Node();
    n5->data = 5;
    n6 = new Node();
    n6->data = 6;
    n7 = new Node();
    n7->data = 7;

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = NULL;

    Node* ptr = head;
    while(ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}
