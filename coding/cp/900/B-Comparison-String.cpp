#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int cnt=2;
        int maxx=2;
        for(int i=0;i<n-1;i++)
        {
            if(str[i]==str[i+1])
            {
                cnt++;
            }
            else
            {
                cnt=2;
            }
            maxx=max(cnt,maxx);
        }
        cout<<maxx<<endl;
    }
}