#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fig=0;
    int st=0;
    vector<int>v={1,1};
    int end=v.size()-1;
    while(st<end)
    {
        if(v[st]!=v[end])
        {
            fig=1;
            break;
        } 
        st++;
        end--;  
    }
    if(fig=1)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;

}