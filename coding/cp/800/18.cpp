#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    map<int,int>cnt;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        cnt[a]=i;
        


    }
    for(int i=1;i<=n;i++)
    {
        cout<<cnt[i]<<" ";
    }
    cout<<endl;
}