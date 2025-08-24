#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>s={"rahim","lamim","momo","tanim","momo","momo"};
    map<string,int>m;
    for(auto ele:s)
    {
        m[ele]++;
    }
    for(auto ele:m)
    {
        cout<<ele.first<<" "<<ele.second<<endl;


    }
    cout<<"----find distinct value for vector----------"<<endl;
    vector<int>ve={2,2,1,3,1,1,5,4};
    map<int,bool>vis;
    for(auto ele:ve)
    {
        vis[ele]=1;
    }
    for(auto ele:vis)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    //input map
    cout<<"----input map----"<<endl;
    map<string,int>h;
    int n;
    cout<<"size of map: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int num;
        cin>>s>>num;
        h[s]=num;
    }
    for(auto ele:h)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }

}