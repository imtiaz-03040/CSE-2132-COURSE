#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node*next;
};
int main()
{
    Node*head,*n1,*n2,*n3,*n4,*n6,*n7,*n,*m;
    n1=new Node();
    n1->data=5;
    n2=new Node();
    n2->data=2;
    n3=new Node();
    n3->data=3;
    n4=new Node();
    n4->data=4;

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;

    for(Node*ptr=head; ptr!=NULL; ptr=ptr->next)
    {
        cout << ptr->data <<"  ";
    }
    cout<<endl;
    Node*ptr=head,*prev;
    while(ptr->data!=3)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=ptr->next;


    n6=new Node();
    n6->data=6;

    Node*p=head,*pre;
    while(p->data!=4)
    {
        pre=p;
        p=p->next;
    }
    n6->next=p;
    pre->next=n6;


    for(int i=1; i<3; i++)
    {
    n7=new Node();
    n7->data=7;
    Node*pt=head;
       while(pt->next!=NULL)
        {
            pt=pt->next;
        }
    pt->next=n7;
    }

    n=new Node();n->data=2;
    Node*temp=head;
    n->next=head;
    head=n;

     for(int i=1; i<4; i++)
     {
        m=new Node();m->data=1;
        Node*tem=head;
        m->next=head;
        head=m;
     }

    for(Node*ptr=head; ptr!=NULL; ptr=ptr->next)
    {
        cout << ptr->data <<"  ";
    }

}
