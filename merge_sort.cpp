// Program to implement merge_sort

#include<iostream>
using namespace std;

void combine(int arr[],int low,int high,int mid)
{

}
void merge_sort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        combine(arr,low,high,mid);
    }
}

int main()
{
     int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,arr[0],arr[n-1]);
}
