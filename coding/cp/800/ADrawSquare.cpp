#include<bits/stdc++.h>
using namespace std;    
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if(l==r && r==d && d==u)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}    