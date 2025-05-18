#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int c,b;
        cin>>c>>b;
        if(c%b==0)
        {
            cout<<0<<endl;
        }

        else
        {
            cout<<(b-c%b)<<endl;
        }
    }
    return 0;
}