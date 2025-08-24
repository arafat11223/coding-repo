#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>d;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        d.push_back(n);
    }
    // while(cin>>n)
    // {
    //     if(n==0)
    //     {
    //         break;
    //     }
    //     d.push_back(n);
    // }
    cout<<"vector c size: "<<d.size()<<endl;
    for(auto ele: d)
    {
        cout<<ele<<" ";

    }
}