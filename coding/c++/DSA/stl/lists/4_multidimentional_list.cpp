#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<list<int>>l1={{2,3,4,7},{3,4,5},{6,7,8}};
    for(auto ele:l1)
    {
       
        for(auto el:ele)
        {
            cout<<el<<" ";
        }
        cout<<endl;
        
    }

}