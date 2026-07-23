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
    int n, value;

    cout << "How many elements to insert? "<< endl;
    cin >> n;
    cout << "Enter value: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        push(value);
    }

    display();

    return 0;
}
