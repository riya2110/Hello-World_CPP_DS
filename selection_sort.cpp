 //Program to implement Selection Sort

 #include<iostream>
 using namespace std;


 int min_el(int arr[],int n,int in)
 {
    int min=arr[in];
    for(int i=in;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
 void Selection_sort(int arr[],int n)
 {
    for(int i=0;i<n;i++)
    {
        if(min_el())}}
