// Program to merge two linked list

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*start;

node * create_node(int num)
{
    node *temp;
    temp = new node;
    temp->data=num;
    temp->next=NULL;
    return temp;
}

insert_beg(int num)
{
    node *temp,*p;
    p=create_node(num);
    temp=start;
}
