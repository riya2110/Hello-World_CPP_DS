#include<iostream>
using namespace std;

class queue
{
    int size=20;
    int front,rear;
    int arr[20];

public:
        queue()
        {
            front=-1;
            rear=-1;
        }


        void enqueue(int val)
        {
            //size=20;
            if(rear==size-1)
            {
                cout<<"Ovrflow";
            }
            else if(front==-1&&rear==-1)
            {
                front=0;
                rear=0;
                arr[rear]=val;
            }
            else
            {
                rear++;
                arr[rear]=val;
            }
        }

        int dequeue()
        {
            if(front==-1||front>size)
            {
                cout<<"Underflow!!";
                return 0;
            }
            else
            {
                int temp=arr[front];
                front++;
                return temp;
            }
        }

        void display()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
};

class stack
{
    int stk[10];
    int size=10;
    int top;

public:
        stack()
        {
            top=-1;
            //stk = new int[10];
        }

        void push(int val)
        {
            if(top>=size)
                cout<<"Overflow";
            else
            {
                top++;
                stk[top]=val;
            }
        }

        int pop()
        {
            if(top==-1)
            {
                cout<<"Underflow";
                return 0;
            }
            else
            {
                int temp=stk[top];
                top--;
                return temp;
            }
        }
};

int main()
{
    stack s;
    int no;
    cin>>no;
    queue q;

    int num;

    for(int i=0;i<no;i++)
    {
        cin>>num;
        q.enqueue(num);
    }

    int k;
    cin>>k;

    int arr[k];
    for(int i=0;i<k;i++)
    {
        arr[k]=q.dequeue();
        s.push(arr[k]);
    }

    cout<<endl<<endl;
    for(int i=0;i<k;i++)
    {
        arr[k]=s.pop();
        q.enqueue(arr[k]);
    }
    int j=no-k;

    for(int i=0;i<j;i++)
    {
        arr[j]=q.dequeue();
        q.enqueue(arr[j]);
    }

    q.display();

}
