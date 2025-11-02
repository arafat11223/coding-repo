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
        int cnt0=0;
        int cnt1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                cnt0++;

            }
            else
            {
                cnt1++;
            }
        }
        int ans=min(cnt0,cnt1);
        if(ans%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
    }
    
}