#include<iostream>
using namespace std;


class stack
{
    int *arr,size,top;

    public:
            stack()
            {
                top=-1;
                cin>>size;
                arr=new int[size];
            }

            void push(int item)
            {
                if(top>=size)
                {
                    cout<<"Overflow !!";
                }
                else
                {
                    top++;
                    arr[top]=item;
                }
            }

            void pop()
            {
                if(top==-1)
                {
                    cout<<"Underflow !!";
                }
                else
                {
                    top--;
                }
            }

            void peep()
            {
                cout<<"\n\n"<<arr[top];
            }

            void traverse()
            {
                for(int i=top;i>=0;i--)
                {
                    cout<<endl<<arr[i];
                }
            }
        };
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<endl;
    s.traverse();
    cout<<endl;
    s.peep();
    s.pop();
    s.push(4);
    cout<<endl;
    s.traverse();
}
