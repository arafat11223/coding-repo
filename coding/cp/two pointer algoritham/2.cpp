//find the pair whose sum is equal to x
#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],int x,int n)
{
    int st=0;
    int end=n-1;

    while(st<end)
    {
        if(arr[end]+arr[st]==x)
        {
            return true;

        }
        if(arr[end]+arr[st]<x)
        {
            st++;
        }
        else
        {
            end--;
        }
    }
    return false;

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
    int x;
    cin>>x;
    sort(arr,arr+n);
    bool ans=solve(arr,x,n);
    if(ans==true)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
}