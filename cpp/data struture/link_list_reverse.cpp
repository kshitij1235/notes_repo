#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
}*head;

void reverse()
{
    node*prev=NULL , *curr=head , *next=NULL;
    while (curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

void traverse()
{
    node*t;
    t=head;
    while (t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
}

int main()
{
    head=new node();
    node *a,*b;
    a=new node();
    b=new node();
    head->data=10;
    a->data=20;
    b->data=30;
    head->next=a;
    a->next=b;    
    b->next=NULL;

    cout<<"link list : \n";
    traverse();
    cout<<"reverse of link list : \n";
    reverse();
    traverse();    
    system("pause");
    return 0 ;
} 