#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>>s;
    s.insert({2,3});
    s.insert({2,1});
    s.insert({1,3});
    s.insert({3,1});
    s.insert({3,2});
    s.insert({1,2});
    s.insert({2,3});
    s.insert({1,2});
    s.insert({3,2});
    cout<<"size: "<<s.size()<<endl;
    for(auto ele:s)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    cout<<"---use iterator--"<<endl;
    set<pair<int,int>>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
