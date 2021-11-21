#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}*head;

void deletenode(int v)
{
	if(head==NULL)
	{
		cout<<"List is empty...";
		return;
	}
	node *t,*p1=NULL,*p2;
	t=head;//1->2->3->NULL
	//v=1
	while(t->data!=v) //false
	{
		p1=t; 
		t=t->next; 
	}
	p2=t->next; //p2=2
	if(p1!=NULL)
	{
		p1->next=p2; 
	}
	else //p1=NULL
	{
		head=p2; //head=2
		//2->3->NULL
	}
	delete t;
	cout<<"\n"<<v<<" deleted.\n";
}

void traverse()
{
	if(head==NULL)
	{
		cout<<"List is empty...";
		return;
	}
	node *t;
	t=head;
	while(t!=NULL)
	{
		cout<<t->data<<"->";
		t=t->next;
	}
	cout<<"NULL";
}

int main()
{
	head=new node();
	node *a,*b;
	a=new node();
	b=new node();
	
	head->data=1;
	a->data=2;
	b->data=3;
	
	head->next=a;
	a->next=b;
	b->next=NULL;
	
	cout<<"List values are:\n";
	traverse();
	cout<<"\nEnter the node to be deleted\n";
	int n;
	cin>>n;
	deletenode(n);
	cout<<"Linked list values after deleting given node:\n";
	traverse();
    system("pause");
	return 0;
}
