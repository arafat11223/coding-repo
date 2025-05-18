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
        
        int i=s.size()-1;
        //cout<<i<<endl;
        long long cnt=0;
        //cout<<s[i]<<endl;
        while(s[i]=='0')
        {
            cnt++;
            i--;

        }
        //cout<<i<<endl;
        for(int j=0;j<i;j++)
        {
            if(s[j]>'0')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}