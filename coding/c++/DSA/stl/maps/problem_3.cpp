#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>cnt;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        cnt[a]++;

    }
    int ans=0;
    for(auto ele:cnt)
    {
        if(ele.first<=ele.second)
        {
            ans+=(ele.second-ele.first);

        }
        else
        {
            ans+=(ele.second);
        }
    }
    cout<<ans<<endl;
}