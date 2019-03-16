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
        temp=new(struct node);
        temp->data=val;
        temp->next=NULL;
        return temp;
    }

    insert_beg(int val)
    {
        struct node *temp,*P;
        P=create_node(val);
        if(start==NULL)
        {
            start=P;
            P->next=NULL:
        }
        else
        {
            P->next=start;
            start=P;
        }
    }

    insert_end(int val)
    {
        struct node *temp,*P;
        P=create_node(val);
        while(temp->next)
    }
