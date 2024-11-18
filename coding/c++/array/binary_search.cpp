#include<iostream>
using namespace std;
int binary(int a[],int x,int key)
{
    int st=0;
    int end=x;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(a[mid]==key)
        {
            return mid;

        }
        else if(a[mid]>key)
        {
            end=mid-1;

        }
        else{
            st=mid+1;
        }
    }
    return -1;

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
    int key;
    cin>>key;
    cout<<binary(arr,n,key);

}