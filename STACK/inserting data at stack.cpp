#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head = nullptr;
Node *top = nullptr;

void push(int value)
{
    Node *node = new Node();
    node->data = value;
    node->next = head;
    head = node;
    top = node;
    cout << value  << endl;
}
void display()
{
    if (head == nullptr)
    {
        cout << "Stack is Empty!" << endl;
    }

    Node *temp = head;

    cout << "Stack Elements: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    return 0;
}
