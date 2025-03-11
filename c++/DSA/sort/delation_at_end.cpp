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
    int ins_value;
    cin>>ins_value;
    for(int i=n;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    n++;
    arr[0]=ins_value;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}