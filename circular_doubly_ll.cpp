// Program to create circular doubly linked list

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*start;

node * create_node(int val)
{
    node *temp;
    temp = new(struct node);
    temp->data=val;
    temp->prev=NULL;
    temp->next=NULL;
    start=temp;
    return temp;
}

void insert_beg(int val)
{
    node *temp,*ptr,*p;
    p=create_node(val);

    temp=start;
    ptr=start;

    if(start==NULL)
    {
        start=p;
        p->prev=p;
        p->next=p;
    }

    else
    {

        if(temp->next==start)
        {
            p->next=temp;
            p->prev=temp;
            temp->next=p;
            temp->prev=p;
            start=p;
        }

        else
        {
            while(ptr->next!=start)
            {
                ptr=ptr->next;
            }
            temp->prev=p;
            p->next=temp;
            ptr->next=p;
            p->prev=ptr;
            start=p;
            //start->prev=ptr;
       }

    }
}

void traverse(int n)
{
    node *temp,*ptr;

    temp=start;
    while(n>0)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
        n--;
    }
    cout<<temp->data;
}

int main()
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;

    int num;
    for(int i=0;i<size;i++)
    {
        cin>>num;
        insert_beg(num);
    }

    cout<<endl;
    traverse(size);
}
