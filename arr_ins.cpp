#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int el,n;

    cout<<"Enter size of an array : ";
    cin>>n;
    cout<<"Enter Array : \n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element to be inserted at the beginning : ";
    cin>>el;



    for(int i=n+1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=el;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
