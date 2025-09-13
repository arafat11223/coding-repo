#include<bits/stdc++.h>
using namespace std;
int cnt[1000];
int main()
{
    vector<int>v={1,2,4,2,4,5,6,7,2,4,6};
    for(auto ele:v)
    {
        cnt[ele]++;
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cnt[v[i]]++;
    // }
    for(int i=0;i<5;i++)
    {
        cout<<cnt[i];
    }
}