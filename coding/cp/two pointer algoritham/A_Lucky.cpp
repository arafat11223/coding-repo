#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;   
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int ans1=s[0]-'0'+s[1]-'0'+s[2]-'0';
        int ans2=s[3]-'0'+s[4]-'0'+s[5]-'0';
        if(ans1==ans2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}