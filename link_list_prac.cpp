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
        struct node *P;
        P=create_node(val);
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

    insert_end(int val)
    {
        struct node *temp,*P;
        temp=start;
        P=create_node(val);
        if(start==NULL)
        {
            start=P;
            P->next=NULL;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=P;
            P->next=NULL;
        }
    }


    insert_bef(int val,int val2)
    {
        struct node *P,*temp,*ptr;
        P=create_node(val);
        temp=start;
        while((temp->data!=val2)&&(temp->next!=NULL))
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=P;
        P->next=temp;
    }

    insert_after(int val,int val2)
    {
        struct node *P,*temp,*ptr;
        temp=start;
        P=create_node(val);

        while((temp->data!=val2)&&(temp->next!=NULL))
        {
            temp=temp->next;
        }
        ptr=temp->next;
        temp->next=P;
        P->next=ptr;
    }

    insert_specific(int val,int loc)
    {
        struct node *temp,*P,*ptr;
        P=create_node(val);
        temp=start;
        if(temp==NULL)
        {
            insert_end(val);
        }
        else
        {
            for(int i=1;i<loc-1;i++)
            {
                temp=temp->next;
            }
            P->next=temp->next;
            temp->next=P;
        }

    }
    printList()
    {
        struct node *temp;
        temp=start;

        while(temp->next!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data;
    }



int main()
{
    start=NULL;

    int val;

    cout<<"Enter values into linked list : ";

    cin>>val;
    while(val!=0)
    {
        insert_end(val);
        cin>>val;
    }
    cout<<endl;
     printList();
    int val1,val2;

    cout<<"Enter value to be  inserted : ";
    cin>>val1;
    cout<<"Enter location  : ";
    cin>>val2;
    insert_specific8(val1,val2);
    //
    cout<<endl;
    printList();
}
