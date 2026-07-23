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
    int result;
    int a[9]= {9,3,4,13,8,11,4,14,12};
    for (int i = 0; i < 9; i++)
    {
        if(a[i]<10)
        {
            push(a[i]);
        }

        else if (a[i]==11)
        {
            int right= peek();
            pop();
            int left= peek();
            pop();
            push(left+right);
        }
        else if(a[i]==12)
        {
            int right= peek();
            pop();
            int left= peek();
            pop();
            push(left-right);
        }
        else if(a[i]==13)
        {
            int right= peek();
            pop();
            int left= peek();
            pop();
            push(left*right);
        }
        else if(a[i]==14)
        {
            int right = peek();
            pop();
            int left = peek();
            pop();
            push(left/right);
        }

    }
    result=peek();
    cout<<result<<endl;

    return 0;
}
