#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev,*next;
};

int main()
{
    Node *head,*n1,*n2,*n3,*n4,*n5,*n9,*p;

    n1=new Node();
    n1->data=7;
    n2=new Node();
    n2->data=2;
    n3=new Node();
    n3->data=3;
    n4=new Node();
    n4->data=6;
    n5=new Node();
    n5->data=5;

    head=n1;
    n1->prev=NULL;
    n1->next=n2;
    n2->prev=n1;
    n2->next=n3;
    n3->prev=n2;
    n3->next=n4;
    n4->prev=n3;
    n4->next=n5;
    n5->prev=n4;
    n5->next=NULL;

    for(p=head; p!=NULL; p=p->next) cout<<p->data<<" ";
    cout<<endl;

    p=head;
    while(p->data!=3) p=p->next;

    n9=new Node();
    n9->data=9;
    n9->prev=p->prev;
    n9->next=p;
    p->prev->next=n9;
    p->prev=n9;

    for(p=head; p!=NULL; p=p->next) cout<<p->data<<" ";
}
