
// https://codeforces.com/contest/918/pr...
//B. Radio Station
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> ipname;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        ipname[ip]=name;
    }
    map<string,int>mp;
    for (int i = 0; i < m; i++)
    {
        string conf,ipp;
        cin>>conf>>ipp;
        ipp.pop_back();
        
        for(auto ele:ipname)
        {
            if(ipp==ele.first)
            {
                cout<<conf<<" "<<ipp<<"; #"<<ele.second<<endl;


            }
        }

    }
}