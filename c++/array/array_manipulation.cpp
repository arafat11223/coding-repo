//find the unique number in  a given array where all
//element are being repeted twice with one value being unique
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,2,4,3,1};
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=a[j]=-1;
            }
        }
    }
    for(i=0;i<7;i++)
    {
        if(a[i]>0)
        {
            cout<<a[i];
        }
    }
}