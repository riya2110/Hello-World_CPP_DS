#include<iostream>
using namespace std;

int main()
{
    char ar1[3][3],ar2[3][3];

    cout<<"Enter 1st 2 d array : \n";

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ar1[i][j];
        }
        cout<<"\n";
    }

    cout<<"Enter 2nd 2D array : \n";

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>ar2[i][j];
        }
        cout<<"\n";
    }

    cout<<"Concatenated Array : \n";

    char ar3[3][6];
    int j,k;

    for(int i=0;i<3;i++)
    {
        j=0;
        for(k=0;k<6;k++)
        {
            if(k%2!=0)
            {
                ar3[i][k]=ar2[i][j];
                j++;
            }
            else
            {
                ar3[i][k]=ar1[i][j];

            }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(k=0;k<6;k++)
        {
            cout<<ar3[i][k]<<" ";
        }
        cout<<"\n";
    }

    return 0;
    }
