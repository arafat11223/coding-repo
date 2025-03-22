#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    int a=0,b=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                a=i;
                b=j;

            }
        }
    }
    int ans=0;
    if(a>=2 )
    {
        ans+=a-2;
    }
    else
    {
        ans+=2-a;
    }
    //cout<<ans<<endl;
    if(b>=2 )
    {
        ans+=b-2;
    }
    else
    {
        ans+=2-b;
    }
    cout<<ans<<endl;
}
