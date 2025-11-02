#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,h,m;
        cin>>n>>h>>m;
        int minh=INT_MAX;
        int minute;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a,b;
            if(a<h)
            {
                a+=24;
            }
            minh=min(minh,a);
            minute=m-b;

            
        }
    }
}