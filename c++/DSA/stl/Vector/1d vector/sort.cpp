#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={4,2,5,73,67,10,1};
    //sort(v.begin(),v.end(),greater<int>());
    //sort(v.begin(),v.begin()+4,greater<int>());
    sort(v.rbegin(),v.rend());
    for(auto ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<v.back(); //last element

}