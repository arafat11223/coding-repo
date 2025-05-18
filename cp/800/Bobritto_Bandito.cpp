#include<bits/stdc++.h>
using namespace std;
void find(int n,int m,int l,int r)
{
    int st=l;
    int end=r;
    int a,b;
    
    while(st<=end && st<=0 && st>=l &&end<=r &&end>=0)
    {
        int ans=end-st;
        if(ans==m)
        {
            a=st;
            b=end;
            break;

            //cout<<st<<" "<<end<<endl;
        }
        else if(ans<m)
        {
            st++;
        }
        else 
        {
            end--;
        }
        
    }
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        find(n,m,l,r);
    }
}