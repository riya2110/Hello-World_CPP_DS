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

    cout<<"Enter Element to be deleted : ";
    cin>>el;
    int j;
    for( j=0;j<n;j++)
    {
        if(arr[j]==el)
        {
            pos=j;
            break;
        }
    }
    //int temp=pos;

     for(int i=pos;i<n;i++)
    {

        arr[i]=arr[i+1];
    }
   //  arr[temp-1]=el;
     for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
