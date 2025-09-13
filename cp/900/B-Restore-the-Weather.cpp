#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        long long k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        sort(b,b+n);
        int ans[n];
        for(int i=0;i<n;i++)
        {
            ans[v[i].second]=b[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}