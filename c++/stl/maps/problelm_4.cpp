#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>cnt;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        cnt[a]++;
        if(cnt[a]>ans)
        {
            ans=cnt[a];
        }
    }
    cout<<ans<<endl;
    
    
}