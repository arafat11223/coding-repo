#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    string s;
    cin>>s;
    string str="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(ch=='L')
    {
        for(int i=0;i<s.size();i++)
        {
            int index=str.find(s[i]);
            cout<<str[index+1];
        }

    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            int index=str.find(s[i]);
            cout<<str[index-1];
        }
    }
}