#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            cout<<j;
            //count++;
        }
        
        for(j=1;j<=i-1;j++)
        {
            cout<<j;
        }
        cout<<"\n";
        //cout<<"\n";


    }
}