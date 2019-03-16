// Program to implement queue using linked list;

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*front,*rear;

node * create_node(int val)
{
    node *temp;
    temp=new node();
    temp->data=val;
    temp->next=NULL;
    return temp;
}

void enqueue(int val)
{
    node *temp,*p;
    p=create_node(val);

    if(front==NULL)
    {
        front=p;
        rear=p;
    }
    else
    {
      //  front=p;
        rear->next=p;
        rear=rear->next;
    }
}

void dequeue()
{
    node *temp;
    if(front==NULL)
    {
        cout<<"Underflow!!";
    }
    else
    {
        front=front->next;
    }

}

void display()
{
    node *temp;
    temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

int main()
{
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        enqueue(num);
    }
    cout<<endl;
    display();

  dequeue();

    cout<<endl;
    display();
}
