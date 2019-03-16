// Program to delete mid element using pointer

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

 insert_beg(int val)
    {
        struct node *P;
        P = create_node(val);
        if(start==NULL)
        {
            start=P;
            P->next=NULL;
        }

        else
        {
            P->next=start;
            start=P;
        }
    }


    void del_mid2()
    {
        node *temp,*ptr1,*ptr2;
        ptr1=start;
        ptr2=start;

        while(ptr2!=NULL&&ptr2->next!=NULL)
        {
            temp=ptr1;
            ptr2=ptr2->next->next;
            ptr1=ptr1->next;
        }
        temp->next=ptr1->next;

    }

    void traverse()
    {
        node *temp;
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
    int size;
    cin>>size;

    int num;
    for(int i=0;i<size;i++)
    {
        cin>>num;
        insert_beg(num);
    }

    cout<<endl;
    traverse();

    del_mid2();

    cout<<endl;
    traverse();
}

