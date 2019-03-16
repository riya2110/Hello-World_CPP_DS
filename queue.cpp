// Program to implement queues

#include<iostream>
using namespace std;

class queue
{
    int arr[20];
    int front, rear,size;

public:
        queue()
        {
            front=-1;
            rear=-1;
            //cin>>size;
        }
        void enqueue(int val)
        {
            if(rear==size-1)
                cout<<"OVERFLOW";
            else if(front==-1 && rear==-1)
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

        void dequeue()
        {
            if(front==-1||front>rear)
                cout<<"UNDERFLOW";
                else
                front++;
        }

        void display()
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<"\t";
            }
        }
};


int main()
{
    queue q;
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        q.enqueue(num);
    }
    q.display();

    q.dequeue();
    cout<<endl;
    q.display();
}
