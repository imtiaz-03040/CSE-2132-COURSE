#include <iostream>
using namespace std;

class Node{ public:int data; Node* next; };

int main(){
    Node *head,*n1,*n2,*n3,*n4,*n5,*p,*prev;

    n1=new Node(); n1->data=7;
    n2=new Node(); n2->data=2;
    n3=new Node(); n3->data=3;
    n4=new Node(); n4->data=6;
    n5=new Node(); n5->data=5;

    head=n1;
    n1->next=n2; n2->next=n3; n3->next=n4; n4->next=n5; n5->next=head;

    p=head; do{ cout<<p->data<<" "; p=p->next;}while(p!=head);
    cout<<endl;

 
    for(int i=1;i<2;i++){ prev=p; p=p->next; }

    prev->next=p->next;

    p=head; do{ cout<<p->data<<" "; p=p->next;}while(p!=head);
}
