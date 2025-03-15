#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    map<int,int>cnt;
    cnt[a]++;
    cnt[b]++;
    cnt[c]++;
    cnt[d]++;
    cout<<4-cnt.size()<<endl;
    


}