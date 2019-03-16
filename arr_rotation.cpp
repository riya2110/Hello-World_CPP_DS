#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout<<"Enter array : \n";

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    int el,ar1[5],ar2[5];
    cout<<"Enter the no. to rotate array by n elements : \n";
    cin>>el;

    for(int i=0;i<el;i++)
    {
       int temp=arr[0],j;
      for( j=0;j<4;j++)
      {
          arr[j]=arr[j+1];
      }
      arr[j]=temp;

    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}
