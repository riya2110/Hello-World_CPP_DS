// Program to delete middle element

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

    void del_mid(int size)
    {
        node *temp,*ptr;

        temp=start;
        if(size%2!=0)
        {
            int n=(size-1)/2;
            for(int i=0;i<n;i++)
            {
                ptr=temp;
                temp=temp->next;
            }
            ptr->next=temp->next;
        }
        else
        {
            int n=(size)/2;
            for(int i=0;i<n;i++)
            {
                ptr=temp;
                temp=temp->next;
            }
            ptr->next=temp->next;
        }
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

    del_mid(size);

    cout<<endl;
    traverse();
}
