#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,2,3,4,4,8,9,1};
    sort(v.begin(),v.end());
    unique(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}