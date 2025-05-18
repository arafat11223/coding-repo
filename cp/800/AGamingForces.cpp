#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                ans++;
            }
        }
        int x=ans/2;
        cout<<n-x<<endl;
        
    }
}