#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"---set intiger---"<<endl;
    set<int,greater<int>>s;
    s.insert(4);
    s.insert(9);
    s.insert(0);
    s.insert(6);
    s.insert(4);
    s.insert(2);
    cout<<"size: "<<s.size()<<endl;
    for(auto ele:s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;


    cout<<"---set string---"<<endl;
    set<string,greater<string>>se;
    se.insert("arafat");
    se.insert("tamim");
    se.insert("tanim");
    se.insert("tanvir");
    se.insert("sifat");
    se.insert("arnab");
    cout<<"size: "<<se.size()<<endl;

    for(auto ele:se)
    {
        cout<<ele<<" ";
    }
    cout<<endl;


    cout<<"---set pair---"<<endl;
    set<pair<int,int>,greater<pair<int,int>>>sett;
    sett.insert({2,3});
    sett.insert({2,1});
    sett.insert({1,3});
    sett.insert({3,1});
    sett.insert({3,2});
    sett.insert({1,2});
    sett.insert({2,3});
    sett.insert({1,2});
    sett.insert({3,2});
    cout<<"size: "<<sett.size()<<endl;
    for(auto ele:sett)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    

    cout<<"---use iterator--"<<endl;
    set<pair<int,int>,greater<pair<int,int>>>::iterator it;
    for(it=sett.begin();it!=sett.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
