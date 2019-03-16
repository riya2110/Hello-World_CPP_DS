66// Program to implement stack usng linklist

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start;

node * create_node(int val)
{
    node *temp;
    temp = new(struct node);
    temp->data=val;
    temp->next=NULL;
    return temp;
}

void push(int val)
{
    node *temp,*p;
    p=create_node(val);

    if(start==NULL)
    {
        start=p;
    }
    else
    {
        p->next=start;
        start=p;
    }
}

void pop()
{
    node *temp,*ptr;
    temp=start;

    start=temp->next;
}
void traverse()
{
    node *temp;
    temp=start;
    do
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }while(temp!=NULL);
}

int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;

    int num;
    for(int i=0;i<size;i++)
    {
        cin>>num;
        push(num);
    }

    cout<<endl;
    traverse();

    pop();

     cout<<endl;
    traverse();

    pop();

     cout<<endl;
    traverse();

    pop();

     cout<<endl;
    traverse();

    pop();

     cout<<endl;
    traverse();
}
