#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*front,*rear;

node * create_node(int n)
{
    node *temp;
    temp = new node;
    temp->data=n;
    return temp;
}

void insert(int n)
{
    node *p,*temp;
    p=create_node(n);
    if(front==NULL)
    {
        front=p;
        p->next=front;

    }
    else
    {
        temp=front;
        while(temp->next!=front)
        {
            temp=temp->next;
        }
        p->next=temp->next;
        temp->next=p;

    }
}

int traverse()
{
    node *temp;
    temp=front;
    int count =0;
    while(temp->next!=front)
    {
        count++;
        temp=temp->next;
    }
    return count+1;

}
void del(int d)
{
    node *temp,*ptr;
    temp=front;
    //int count = traverse();
    while(traverse()>1)
    {

        for(int i=1;i<d;i++)
        {
            ptr=temp;
            temp=temp->next;
        }

        if(temp==front)
        {
             ptr->next=temp->next;
             front=ptr->next;
        }
        else
        {
            ptr->next=temp->next;
        }

        //cout<<"data "<<temp->data<<endl;
        temp=ptr->next;

        //cout<<traverse()<<endl;

    }
}
void display()
{
    node *temp;
    temp=front;

    while(temp->next!=front)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";
}

int main()
{
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        insert(num);
    }

    display();
    cout<<endl;

    int d;
    cin>>d;
    //traverse();
    del(d);
    display();
}
