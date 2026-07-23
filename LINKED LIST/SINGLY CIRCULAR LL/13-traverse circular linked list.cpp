#include <iostream>
using namespace std;

class Node{ public:int data; Node* next; };

int main()
{
    Node *head,*n1,*n2,*n3,*n4;

    n1=new Node(); n1->data=1;
    n2=new Node(); n2->data=2;
    n3=new Node(); n3->data=3;
    n4=new Node(); n4->data=4;

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=head;

    Node* p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }
    while(p!=head);

    return 0;
}
