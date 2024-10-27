#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(x==a[i][j])
            {
                found=1;
                break;

            }
        }
    }
    if(found==0)
    {
        cout<<"will take number"<<endl;
    }
    else
    {
        cout<<"will not take number"<<endl;
    }
}