#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,3,2,5,9,7,5,3,1};
    sort(v.begin(),v.end());
    int size= unique(v.begin(),v.end())- v.begin();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";

    }
    

}