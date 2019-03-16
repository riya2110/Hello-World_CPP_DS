// program to create priority queue

#include<iostream>
using namespace std;

struct node
{
    int data;
    int priority;
    node * next;
};

node *start,*start1;

node * create_node(int val,int p)
{
    node *temp;
    temp=new node;
    temp->data=val;
    temp->priority=p;
    temp->next=NULL;
    return temp;
}

insert_beg(int val,int p)
{
    node *temp,*nn;
    nn=create_node(val,p);
    if(start==NULL)
    {
        start=nn;
    }
    else
    {
        nn->next=start;
        start=nn;
    }
}

insert_sortorder(int val,int p)
    {
        struct node *temp,*ptr,*P;
        P=create_node(val,p);
        //temp=start;
        if(start==NULL||p<(start->priority))
        {
            P->next=start;
            start=P;
        }
        else
        {
            while((temp->next!=NULL)&&(temp->next->priority<=p))
            {
                ptr=temp;
                temp=temp->next;
            }

            P->next=temp->next;
            temp->next=P;
        }



    }

void traverse()
{
    node *temp;
    start=temp;

    while(temp!=NULL)
    {
        cout<<"DATA : "<<temp->data<<" PRIORITY : "<<temp->priority<<"\n";
        temp=temp->next;
    }
}


int main()
{
    int n;
    cin>>n;

    int num;
    int p;
    for(int i=0;i<n;i++)
    {
       cin>>num;
       cin>>p;
       insert_sortorder(num,p);
    }


    traverse();

}

