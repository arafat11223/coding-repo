#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int i,j,m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=k;i++)
    {
        for(j=n;j<n;j++)
        {
            cout<<a[j];
        }
        for( m=1;m<=j;m++)
        {
            cout<<a[m];
        }
        cout<<endl;
    }
}