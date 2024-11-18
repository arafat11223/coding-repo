#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int st=0;st<n;st++)
        {
            for(int k=0;k<n;k++)
            {
                for(int x=k;x<=st+k;x++)
                {
                    cout<<a[x];
                }
                cout<<" ";

            }
        }
    }

}