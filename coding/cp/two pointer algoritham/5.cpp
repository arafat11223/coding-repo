//find all triples such that sum of 2 equal to third element
#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
    for(int i=n-1;i>0;i--)
    {
        int x=arr[i];
        int st=0,end=i-1;
        while(st<end)
        {
            int sum=arr[st]+arr[end];
            if(sum==x)
            {
                cout<<x<<"="<<arr[st]<<"+"<<arr[end]<<endl;
                return;
            }
            else if(sum<x)
            {
                st++;
            }
            else
            {
                end--;
            }
        }
        
    }
    cout<<"no such triplates exists"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    solve(arr,n);
}