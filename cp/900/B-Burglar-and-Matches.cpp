#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>p;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        p.push_back({b,a});
    }
    sort(p.rbegin(),p.rend());

    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(n<=0)
        {
            break;
        }
        ans+=min(n,p[i].second)*p[i].first;
        n-=min(n,p[i].second);

    }

    cout<<ans<<endl;
}