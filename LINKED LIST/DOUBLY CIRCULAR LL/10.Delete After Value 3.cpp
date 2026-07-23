#include <iostream>
using namespace std;

class Node{ public:int data; Node *prev,*next; };

int main(){
Node *head,*n1,*n2,*n3,*n4,*n5,*ptr,*ptr2;

n1=new Node(); n1->data=7;
n2=new Node(); n2->data=2;
n3=new Node(); n3->data=3;
n4=new Node(); n4->data=6;
n5=new Node(); n5->data=5;

head=n1;
n1->next=n2; n1->prev=n5;
n2->next=n3; n2->prev=n1;
n3->next=n4; n3->prev=n2;
n4->next=n5; n4->prev=n3;
n5->next=head; n5->prev=n4;

ptr=head; do{ cout<<ptr->data<<" "; ptr=ptr->next; }while(ptr!=head);
cout<<endl;


while(ptr->data!=3)
{ptr=ptr->next;
ptr2=ptr->next;}

ptr->next=ptr2->next;
ptr2->next->prev=ptr;

ptr=head; do{ cout<<ptr->data<<" "; ptr=ptr->next; }while(ptr!=head);
}
