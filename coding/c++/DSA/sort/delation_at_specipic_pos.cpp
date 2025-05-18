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
    int pos;
    cin>>pos;
    for(int i=pos;i<=n;i++)
    {
        arr[i-1]=arr[i];
    }
    n--;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}