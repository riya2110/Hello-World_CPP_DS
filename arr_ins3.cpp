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

    cout<<"Enter Element to be inserted : ";
    cin>>el;

    cout<<"Enter position to be inserted : ";
    cin>>pos;
    int temp=pos;

     for(int i=n;i>pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
     arr[temp-1]=el;
     for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
