#include<iostream>
using namespace std;
void find(int a[],int n,int q)
{
    for(int k=0;k<q;k++)
    {
        int x;
        cin>>x;
        int st=0,end=n;
        int c=0;
        
        while(st<=end)
        {
            int mid=(st+end)/2;
            if(a[mid]==x)
            {
                // 
                c++;

                break;
            }
            else if(a[mid]>x)
            {
                end=mid-1;
            }
            else if(a[mid]<x)
            {
                st=mid+1;
            }
            // else{
            //     cout<<"notfound"<<endl;
            // }
            

        }
        // cout<<"not found"<<endl;
        if(c==1)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
}
int main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    find(arr,n,q);
}