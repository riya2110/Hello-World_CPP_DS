#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
    {
        int data;
        struct node *next;
    }*start;

    node * create_node(int val)
    {
        struct node * temp;
        temp = new node;
        temp->data = val;
        temp->next = NULL;
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

    insert_end(int val)
    {
        struct node *P,*temp;
        P=create_node(val);
        temp=start;
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

    printList()
    {
        struct node *temp;
        temp=start;
        cout<<endl;
         while(temp->next!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data;
    }

     insert_bef_unsort(int val)
    {
        struct node *temp,*ptr,*P;
        P=create_node(val);
        temp=start;
        while((temp->data!=val)&&(temp->next!=NULL))
        {
            ptr=temp;
            temp=temp->next;
        }

        ptr->next=P;
        P->next=temp;
    }


     insert_aft_unsort(int a,int b)
    {
        struct node *temp,*ptr,*P;
        P=create_node(a);
        temp=start;
        while((temp->data!=b)&&(temp->next!=NULL))
        {

            temp=temp->next;
        }
        ptr=temp->next;
        temp->next=P;
        P->next=ptr;
    }


    insert_sortorder(int val)
    {
        struct node *temp,*ptr,*P;
        P=create_node(val);
        temp=start;
        while((temp->data<val)&&(temp->next!=NULL))
        {
            ptr=temp;
            temp=temp->next;
        }
        if(temp->next==NULL)
        {
            temp->next=P;
            P->next=NULL;
        }
        else if(temp=start)
        {
            start=P;
            P->next=temp;
        }
        else
        {
            ptr->next=P;
            P->next=temp;
        }

    }

    delete_beg()
    {
        struct node *temp;
        if(start==NULL)
        {
            cout<<"NO LINKED LIST PRESENT !!";
        }
        else
        {
            temp=start;
          start=start->next;
        }
        free(temp);
    }

    delete_end()
    {
        struct node *temp,*ptr;
        temp=start;
        if(start==NULL)
        {
            cout<<"NO LINKED LIST PRESENT !!";
        }
        else
        {
            while(temp->next!=NULL)
            {
                ptr=temp;
                temp=temp->next;
            }
            ptr->next=NULL;
        }
        free(temp);
    }

    delete_specific(int val)
    {
        struct node *temp,*ptr1,*ptr2;
        temp=start;
        while(temp->data!=val)
        {
            ptr1=temp;
            temp=temp->next;
            ptr2=temp->next;
        }
        ptr1->next=ptr2;
        free(temp);
    }

    delete_before(int val)
    {
        struct node *temp,*ptr1,*ptr2;
        temp=start;
        while((ptr2->data!=val)&&(temp->next!=NULL)&&(ptr2->next!=NULL))
        {
            ptr1=temp;
            temp=temp->next;
            ptr2=temp->next;
        }
        if(temp==start)
        {
            cout<<"No node present before this node . ";
        }
        else if(ptr1==start)
        {
            start=temp;
        }
        else //if(ptr2->data==val)
        {
            ptr1->next=temp->next;
        }

    }
    int main()
    {
        start = NULL;

        int val,val2;
        cin>>val;
        while(val!=0)
        {
            insert_beg(val);
            cin>>val;
        }

        printList();

        cout<<"\n\nEnter the value to  be inserted in a list : ";
        cin>>val2;

        insert_sortorder(val2);
        printList();

        cout<<endl;

        /*delete_beg();
        printList();

        cout<<endl;

        delete_end();
        printList();*/

        int x;
        cout<<"\n Enter node to delete the previous node : ";
        cin>>x;

        delete_before(x);
        printList();


        return 0;

    }



