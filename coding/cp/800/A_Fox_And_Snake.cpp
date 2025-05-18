#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            for(int j=1;j<=m;j++)
            { 
                
                if(cnt % 2!=0 && j==1 )
                {
                    cout<<"#";
                }
                else if(cnt%2==0 && j==m)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }

            }
            cout<<endl;
            cnt++;
        }
        //cnt++;
       
    }
}