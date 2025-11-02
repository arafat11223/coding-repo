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
            arr[j]=abs(arr[j]);
        }
        long long sum=accumulate(arr,arr+n,0);
        cout<<sum<<endl;
    }
}