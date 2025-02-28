#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            int sum=i+j;
            if(sum%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"2";
            }
        }
        cout<<"\n";
    }
}   

