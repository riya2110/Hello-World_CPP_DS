//Program to  create circular linked list
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*start;

node * create_node(int val)
{
    struct node *temp;
    temp = new(struct node);
    temp->data=val;
    temp->next=NULL;
    return temp;
}

void create_list(int val)
{
    node *temp,*p,*ptr;
    p=create_node(val);
    if(start==NULL)
    {
        p->next=p;
        start=p;
    }
    else
    {
       ptr=start;
       while(ptr->next!=start)
       {
           ptr=ptr->next;
       }
       ptr->next=p;
       p->next=start;
    }
}

void insert_beg(int val)
{
    node *temp,*ptr,*p;
    p=create_node(val);
    temp=start;
    if(start==NULL)
    {
        start=p;
        p->next=start;
    }
    else
    {
        p->next=start;
        start=p;
    }
}

void insert_end(int val)
{
    node *temp,*p;
    p=create_node(val);
    temp=start;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=p;
    p->next=start;
}
void del_beg()
{
    node *temp,*ptr;

    temp=start;
    ptr=start;
    while(ptr->next!=start)
    {
        ptr=ptr->next;
    }

    ptr->next=start->next;
    start=ptr->next;
    delete(temp);

}

void del_end()
{
    node *temp,*ptr;

    temp=start;
    while(temp->next!=start)
    {
        ptr=temp;
        temp=temp->next;
    }
    ptr->next=start;
    delete(temp);
}

void del_specific(int num)
{
    node *temp,*ptr;
    temp=start;

    if(num==1)
    {
        del_beg();
    }
    else
    {
       for(int i=1;i<num;i++)
        {
            ptr=temp;
            temp=temp->next;
        }
        if(temp->next==start)
        {
            del_end();
        }
        else
        {
            ptr->next=temp->next;
        }
    }
        delete(temp);

}


void traverse()
{
    node *ptr;
    ptr=start;
    do
    {
        cout<<ptr->data<<"\t";
        ptr=ptr->next;
    }while(ptr!=start);
}

int main()
{
    int n;
    cin>>n;
    int num;
    //cin>>num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        create_list(num);

    }
    cout<<endl;

    traverse();
    del_beg();

    cout<<endl;
    traverse();

    del_end();

    cout<<endl;
    traverse();

    cout<<"Enter specific position to del a node : ";
    int no;
    cin>>no;

    del_specific(no);

    cout<<endl;
    traverse();

    insert_end(11);


    cout<<endl;
    traverse();

}
