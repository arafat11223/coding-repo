#include<iostream>
using namespace std;
int main()
{
    int i,j,n,sum,count=0;
    cin>>n>>sum;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            for(int k=0;k<=n;k++)
            {
                if((i+j+k)==sum)
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
}