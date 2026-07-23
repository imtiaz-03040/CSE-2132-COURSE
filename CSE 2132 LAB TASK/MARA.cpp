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
    node->next = nullptr;

    node->next = head;
    head = node;
    top = node;
}
void pop()
{
    if (head == nullptr)
    {
        cout << "The Stack is Empty!" << endl;
    }
    else
    {
        head = head->next;
        top = head;
    }
}
int peek()
{
    return top->data;
}
int main()
{
    int a[9] = {12, 9, 14, 4, 11, 8, 13, 3, 4};
    int result;

    // Traverse from RIGHT to LEFT
    for (int i = 8; i >= 0; i--)
    {
        if (a[i] < 10)
        {
            push(a[i]);
        }
        else
        {
            int left = peek(); pop();
            int right = peek(); pop();

            if (a[i] == 11)       push(left + right);
            else if (a[i] == 12)  push(left - right);
            else if (a[i] == 13)  push(left * right);
            else if (a[i] == 14)  push(left / right);
        }
    }

    result = peek();
    cout << "Final Result: " << result << endl;

    return 0;
}

