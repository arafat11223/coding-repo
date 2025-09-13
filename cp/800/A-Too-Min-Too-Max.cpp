#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        long long sum=abs(arr[n-1]-arr[0])+abs(arr[0]-arr[n-2])+abs(arr[n-2]-arr[1])+abs(arr[1]-arr[n-1]);
        cout<<sum<<endl;
    }
}