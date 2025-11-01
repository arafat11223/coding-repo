#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"vector of pairs"<<endl;
    vector<pair<int,int>>v;
    v.push_back({6,5});
    v.push_back({4,5}); 
    v.push_back({1,6});
    v.push_back({6,1});
    v.push_back({3,8});
    sort(v.begin(),v.end());
    for(auto ele:v)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<"----------------------"<<endl; 


    cout<<"array of pairs"<<endl;
    pair<int,int>arr[]={ {6,5}, {4,5}, {1,6}, {6,1}, {3,8} };
    sort(arr,arr+5);
    for(auto ele:arr)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<"----------------------"<<endl;
}