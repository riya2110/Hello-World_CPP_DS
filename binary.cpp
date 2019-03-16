#include<iostream>
using namespace std;

int main()
{
    int begin,end,mid,el;

    int arr[7];
    cout<<"Enter array elements : \n";

    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }

    begin=0;
    end=6;
    mid=(begin+end)/2;

    cout<<"Enter element to be searched : ";
    cin>>el;

    int flag=0;

    for(int i=0;i<7;i++)
    {
             if(mid==el)
        {
            cout<<"Elemnt found !!";
            flag=1;
            break;
        }


        else if(mid<el)
        {
            begin=mid+1;
            mid=(begin+end)/2;
        }

        else
        {
            end=mid-1;
            mid=(begin+end)/2;
        }
    }

    if(flag==0)
    {
        cout<<"Element not found !!";
    }
}
