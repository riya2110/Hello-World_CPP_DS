// Program to convert infix expression to postfix expression

#include<iostream>
#include<string.h>
using namespace std;

class stack
{
    char *arr;
    int top,size;

public:
        stack()
        {

        }
        stack(int n)
        {
            size=n;
            top=-1;
            arr = new char[size];
        }
        void push(char item)
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

        char pop()
        {
            char temp;
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

        char peep()
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

        int precedence(char ch)
        {
           if(top==-1||ch=='(')
            {
                return 1;
            }

           if((ch=='*')&&((peep()=='/')||(peep()=='+')||(peep()=='-')||(peep()=='(')))
           {
                return 1;
           }
           if((ch=='/')&&(peep()=='*'))
              {
                  return 0;
              }
           if((ch=='/')&&((peep()=='+')||(peep()=='-')||(peep()=='(')))
            {
                return 1;
            }
           if((ch=='+')&&((peep()=='/')||(peep()=='*')))
           {
               return 0;
           }
           if((ch=='+')&&(peep()=='-')||(peep()=='('))
           {
               return 1;
           }
           if((ch=='-')||(peep()=='('))
           {
               return 1;
           }
        }

        void convert(char in[],char post[],int size)
        {
           int j=0;
            for(int i=0;i<size;i++)
            {
                if((in[i]>='A'&&in[i]<='Z')||(in[i]>='a'&&in[i]<='z'))
                {
                    post[j]=in[i];
                    //cout<<post[j];
                    j++;
                }
                else if(in[i]=='(')
                {
                    push(in[i]);
                }
                else if(in[i]==')')
                {
                    while(peep()!='(')
                    {
                        post[j]=pop();
                      //  cout<<post[j];
                        j++;
                    }
                    pop();
                }
                else
                {
                    while(precedence(in[i])!=1)
                    {
                        post[j]=pop();
                        //cout<<post[j];
                        j++;
                    }
                    push(in[i]);
                }
            }

            for(int i=0;i<j-2;i++)
            {
                cout<<post[i];
            }

        }

};

int main()
{
    int size;
    char in[]={'A','*','(','B','+','C',')','/','D'};

    size=strlen(in);

    stack s(size);
    char post[size];


    s.convert(in,post,size);

        return 0;

}
