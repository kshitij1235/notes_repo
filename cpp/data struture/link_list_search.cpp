#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;
}*head;

void search()
{
    if(head==NULL)
    {
        cout<<"empty";
        return;
    }
    int num;
    cout<<"NUMBER TO SEARCH : \n";
    cin>>num;
    node*t;
    t=head;
    while (t!=NULL)
    {
        if (t->data=num)
        {
            cout<<"number found";
        }
        t=t->next;
    }
    cout<<"number not found!";
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
    
    search();
    system("pause");
return 0;
}