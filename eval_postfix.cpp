// Program to evaluate postfix expression

#include<iostream>
#include<string.h>
using namespace std;

class stack
{
    int *arr;
    int top,size;

public:
        stack()
        {

        }
        stack(int n)
        {
            size=n;
            top=-1;
            arr = new int[size];
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

        int pop()
        {
            int temp;
            if(top==-1)
            {
                return 0;
            }
            else
            {
                temp=arr[top];
                top--;
                return temp;
            }
        }

        int peep()
        {
            return arr[top];
        }

        void traverse()
        {
            for(int i=top;i>=0;i--)
            {
                cout<<endl<<arr[i];
            }
        }

        bool empty()
        {
            if(top=-1)
                return 1;
            return 0;
        }

        void evaluate(char post[])
        {
            int ans=0;
            int a,b;
            for(int i=0;i<size;i++)
            {
                if(isdigit(post[i]))
                {
                    push(post[i]-'0');
                }
                else if(post[i]=='+')
                {
                    b=pop();
                    a=pop();
                    ans=a+b;
                    cout<<endl<<ans;
                    push(ans);
                }
                else if(post[i]=='-')
                {
                    b=pop();
                    a=pop();
                    ans=a-b;
                    cout<<endl<<ans;
                    push(ans);
                }
                else if(post[i]=='*')
                {
                    b=pop();
                    a=pop();
                    ans=a*b;
                    cout<<endl<<ans;
                    push(ans);
                }
                else if(post[i]=='/')
                {
                    b=pop();
                    a=pop();
                    ans=a/b;
                    cout<<endl<<ans;
                    push(ans);
                }

            }
            cout<<"Answer is "<<ans;
        }

};



int main()
{
    int size;
    char post[]={'5','6','2','+','*','8','4','-','+'};

    size=strlen(post);

    stack s(size);

    s.evaluate(post);

    return 0;

}
