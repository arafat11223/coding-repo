//https://codeforces.com/contest/1251/p...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        for(int i=str.size()-1;i>=0;i--)
        {
            for(int j=i-1;j<=i-1;j++)
            {
                if(str[i]==str[j])
                {
                    i--;
                    break;
                }
                else
                {
                    cout<<str[i];
                }
            }
        }
        cout<<endl;
    }
} b