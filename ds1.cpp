#include<iostream>
using namespace std;

int main()
{
    int ar[5];
    int item;

    cout<<"Enter Array\n";
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }

    cout<<"Enter item to be searhed : ";
    cin>>item;

    int flag=0;

    for(int i=0;i<5;i++)
    {
        if(ar[i]==item)
        {
            flag=0;
            cout<<"Item Found !! ";
            break;
        }
        else
            flag=1;
    }

    if(flag==1)
    {
        cout<<"Item not found !!";
    }

}
