#include<iostream>
using namespace std;

struct node
{
    int data;
    int prior;
    node *next;
}*front,*rear;

node * create_node(int n,int p)
{
    node *temp;
    temp=new node;
    temp->data=n;
    temp->prior=p;
    temp->next=NULL;
    return temp;
}

void insert(int n,int p)
{
    node *nn,*temp;

    nn=create_node(n,p);



    if(front==NULL||p<(front->prior))
    {
        nn->next=front;
        front=nn;
    }
    else
    {
         temp=front;
        while(temp->next!=NULL && temp->next->prior<=p)
        {
            temp=temp->next;
        }
        nn->next=temp->next;
        temp->next=nn;
    }
}

void del()
{
    node *temp;
    temp=front;
    if(front==NULL)
    {
        cout<<"Underflow";
    }
    else
    front=temp->next;
}

void traverse()
{
    node *temp;
    temp=front;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    int no;
    cin>>no;

    int num,p;
    for(int i=0;i<no;i++)
    {
        cin>>num;
        cin>>p;
        insert(num,p);
    }

    traverse();
    del();
    cout<<endl;
    traverse();
}
