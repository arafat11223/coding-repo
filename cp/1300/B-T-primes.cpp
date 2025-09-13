#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // vector<long long>arr(n);
    for(int i=0;i<n;i++)
    {
        // cin>>arr[i];
        long long x;
        cin>>x;
        int cnt=0;
        for(long long j=1;j<=sqrt(x);j++)
        {
            if(x%j==0)
            {
                cnt++;
                if(x/j!=j)
                {
                    cnt++;
                }
            }
            
        
            
        }
        if(cnt==3)
        {
            cout<<"YES"<<endl;
        
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}