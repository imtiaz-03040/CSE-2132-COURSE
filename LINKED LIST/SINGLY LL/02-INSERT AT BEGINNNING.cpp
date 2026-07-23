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
    Node *head,*n1,*n2,*n3,*n4,*n5,*n9;

    n1=new Node();
    n1->data=1;
    n2=new Node();
    n2->data=2;
    n3=new Node();
    n3->data=3;
    n4=new Node();
    n4->data=4;
    n5=new Node();
    n5->data=5;

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    for(Node* p=head; p!=NULL; p=p->next) cout<<p->data<<" ";
    cout<<endl;

    n9=new Node();
    n9->data=9;
    n9->next=head;
    head=n9;

    for(Node* p=head; p!=NULL; p=p->next)
        cout<<p->data<<" ";
}
