#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int x;
        cin>>x;
        string s=to_string(x);
        char ch='9';
        for(int j=0;j<s.size();j++)
        {
            if(s[j]<ch)
            {
                ch=s[j];
            }
        }
        cout<<ch<<endl;
    }
}