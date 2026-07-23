#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head = nullptr, *top = nullptr;

void push(int v)
{
    Node *n = new Node();
    n->data = v;
    n->next = head;
    head = top = n;
}

void pop()
{
    if (head != nullptr)
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
    // Infix: (9 + 3) * 4
    int a[5] = {9,11,3,13,4};

    push(a[0]); // 9

    for(int i=1;i<5;i+=2)
    {
        int op = a[i];
        int right = a[i+1];
        int left = peek();
        pop();

        if(op==11) push(left+right);
        else if(op==12) push(left-right);
        else if(op==13) push(left*right);
        else if(op==14) push(left/right);
    }

    cout << "Result = " << peek();

    return 0;
}