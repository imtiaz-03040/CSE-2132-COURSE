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
}

void pop()
{
    if (head == nullptr)
    {
        cout << "Stack is Empty!" << endl;
    }
    else
    {
        Node *temp = head;

        cout << "Deleted Element: " << head->data << endl;

        head = head->next;
        top = head;

        delete temp;
    }
}

void display()
{
    Node *temp = head;

    cout << "Stack: ";

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

    pop();

    display();

    return 0;
}
