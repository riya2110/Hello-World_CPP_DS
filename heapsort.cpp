//tym complexity O(nlogn)
//steps: make max_heap from given array then swap first elemnt with last elemnt nd dec size the again reheap
#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void max_heap(int arr[],int size,int i)
{
	int l=2*i+1;
	int r=2*i+2;
	int large=i;
	if(l<size && arr[l]>arr[large])
		large=l;
	if(r<size && arr[r]>arr[large])
	        large=r;
	if(large!=i)
	{
		swap(arr[i],arr[large]);
		max_heap(arr,size,large);
	}

}
void heap_sort(int arr[],int size)
{

	for(int i=size/2-1;i>=0;i--)
	{
		max_heap(arr,size,i);
	}
	for(int i=size-1;i>=0;i--)
	{
		swap(arr[i],arr[0]);
		max_heap(arr,i,0);
	}
}
void print_arr(int arr[],int size)
{
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
}
int main(int argc,char *argv[])
{
	int size;//=argc-1;
	cin>>size;

	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];//=atoi(argv[i+1]);
	}
	cout<<"\nBefore sorting=";
	print_arr(arr,size);
	max_heap(arr,size,0);
	cout<<"\n after sorting=";
	print_arr(arr,size);
}
