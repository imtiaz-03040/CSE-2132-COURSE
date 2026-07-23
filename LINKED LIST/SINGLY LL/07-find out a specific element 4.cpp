#include <iostream>
using namespace std;

class Node{ public:int data; Node* next; };

int main()
{
    Node *head,*n1,*n2,*n3,*n4,*n5,*n6;

    n1=new Node(); n1->data=7;
    n2=new Node(); n2->data=3;
    n3=new Node(); n3->data=2;
    n4=new Node(); n4->data=4;
    n5=new Node(); n5->data=9;
    n6=new Node(); n6->data=1;

    head=n1;
    n1->next=n2; n2->next=n3; n3->next=n4; n4->next=n5; n5->next=n6; n6->next=NULL;

    for(Node* p=head;p!=NULL;p=p->next) cout<<p->data<<" ";
    cout<<endl;

    Node* p=head;
    int pos=1,found=0;

    while(p!=NULL)
    {
        if(p->data==4)
        {
            cout<<"Found at position "<<pos;
            found=1;
            break;
        }
        p=p->next;
        pos++;
    }

    if(!found) cout<<"Not found";

    return 0;
}
