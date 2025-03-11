#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int x)
{
    int st=0;
    int end=n-1;
    

    while(st<=end)
    {
        int mid=(st+end)/2;
        if(arr[mid]==x)
        {

            return mid;
        }
        else if(arr[mid]<x)
        {
            st=mid+1;
        }
        else
        {
            end=mid-1;
        }
        return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x;
    cin>>x;
    int result=binary_search(arr,n,x);
    if(result==-1)
    {
        cout<<"value not found"<<endl;
    }
    else
    {
        cout<<"value found";
    }
}