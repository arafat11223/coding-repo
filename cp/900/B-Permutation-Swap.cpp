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
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        
        for(int i=1;i<=n;i++)
        {
            ans=__gcd(ans,abs(arr[i]-i));
        }
        cout<<ans<<endl;
    }
}