#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int n,el,pos;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter array : \n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter Element to be searched : ";
    cin>>el;

    int flag=0,j;

    for( j=0;j<n;j++)
    {
        if(arr[j]==el)
        {
            pos=j;
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        cout<<"Element found at position "<<pos+1<<" !! \n";
    }

    else
    cout<<"Element not found !! ";

}
