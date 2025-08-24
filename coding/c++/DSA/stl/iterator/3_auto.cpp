#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5,6,8};
    
    vector<int>::iterator it;
    
    for( it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //auto
    vector<int>ve={4,5,3,2,54,6};
    
    //vector<int>::iterator it;
    
    for(auto it=ve.begin();it!=ve.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}