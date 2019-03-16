//Program to create doubly linked list

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
}*start;

node * create_node(int val)
{
    node *temp;
    temp = new(struct node);
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}

void insert_beg(int val)
{
    node *temp,*p;
    p=create_node(val);
    temp=start;

    if(start==NULL)
    {
        start=p;
    }
    else
    {
        temp->prev=p;
        p->next=temp;
        start=p;
    }
}

void insert_end(int val)
{
    node *temp,*p;
    p=create_node(val);
    temp=start;
    if(start==NULL)
    {
        insert_beg(val);
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
        p->prev=temp;

    }
}

void insert_specific(int val)
{
    node *temp,*p;
    temp=start;
    p=create_node(val);

}
void del_beg()
{
    node *temp,*ptr;
    temp=start;

    start=temp->next;
    (temp->next)->prev=NULL;
}

void del_end()
{
    node *temp,*ptr;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    (temp->prev)->next=NULL;

}

void del_loc(int loc)
{
    node *temp,*ptr;
    temp=start;

    if(loc==1)
    {
        del_beg();
    }

    else
    {
        for(int i=0;i<loc-1;i++)
        {
            temp=temp->next;
        }

        if(temp->next==NULL)
        {
            del_end();
        }
        else
        {
            (temp->prev)->next=temp->next;
            (temp->next)->prev=temp->prev;
        }
            delete(temp);
    }

}

void del_specific(int num)
{
    node *temp,*ptr;
    temp=start;
    while(temp->data!=num)
    {
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        del_end();
    }
    else if(temp==start)
    {
        del_beg();
    }
    else
    {
        (temp->prev)->next=temp->next;
        (temp->next)->prev=temp->prev;
    }
}
void traverse()
{
    node *temp,*ptr;
    temp=start;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<temp->data;
}

int main()
{
    cout<<"Enter Size : ";

    int size;
    cin>>size;

    int num;
    for(int i=0;i<size;i++)
    {
        cin>>num;
        insert_beg(num);
    }

    traverse();

    insert_end(11);

    cout<<endl;
    traverse();

    del_beg();

    cout<<endl;
    traverse();

    del_end();

    cout<<endl;
    traverse();

    int loc;
    cout<<"\n Enter loc to del a node : ";
    cin>>loc;

    del_loc(loc);

    cout<<endl;
    traverse();

    int no;
    cout<<"\n Enter spcific node to del a node : ";
    cin>>no;

    del_specific(no);

    cout<<endl;
    traverse();


}
