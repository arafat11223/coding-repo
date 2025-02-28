#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5,6,8};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    it=v.begin();
    for( it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;

    }

    
    vector<pair<int,int>>ve={{1,2},{3,4},{4,5}};
    vector<pair<int,int>>::iterator ita;
    for(ita=ve.begin();ita!=ve.end();ita++)
    {
        cout<<(*ita).first<<" "<<(*ita).second<<endl;
    }

}