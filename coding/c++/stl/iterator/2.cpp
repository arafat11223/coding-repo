#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>ve={{1,2},{3,4},{4,5}};
    vector<pair<int,int>>::iterator ita;
    //for each loop
    // 
    for(pair<int,int>ele:ve)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    for(auto ele:ve)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}