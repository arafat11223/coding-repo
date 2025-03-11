#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int idx;
    cout<<"enter the insertion location: ";
    cin>>idx;
    cout<<"value: ";
    int x;
    cin>>x;
    for(int i=n-1;i>=idx-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx-1]=x;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}