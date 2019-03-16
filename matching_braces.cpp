#include<iostream>
using namespace std;

class stack
{
    char *arr;
    int size;
    int top;

    public:
            stack()
            {

            }
            stack(int n)
            {
                top=-1;
                size=n;
                arr=new char[size];
            }

            void push(char item)
            {
                if(top>=size)
                {
                    cout<<"Overflow!! ";
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
                    cout<<"Underflow!! ";
                }
                else
                {
                    top--;
                }
            }

            void traverse()
            {
                for(int i=top;i>=0;i--)
                {
                    cout<<endl<<arr[i];
                }
            }

            char peep()
            {
                return arr[top];
            }

            int matching_braces(int n,char ch[])
            {
                for(int i=0;i<size;i++)
                {
                    if((ch[i]=='(')||(ch[i]=='{')||(ch[i]=='['))
                        {
                            push(ch[i]);
                        }
                    else if((ch[i]-peep()==1)||(ch[i]-peep()==2))
                        {
                            pop();
                        }
                }
                if(top==-1)
                    return 1;
                else return 0;
            }
};

int main()
{

    int size;

    cout<<"Enter size";
    cin>>size;

    char ch[size];

    stack s(size);
    int count=0;

    cout<<"Enter the series of brackets : ";
    for(int i=0;i<size;i++)
    {
        cin>>ch[i];
    }
    if(s.matching_braces(size,ch))
    {
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}

