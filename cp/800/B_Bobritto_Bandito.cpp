#include<bits/stdc++.h>
using namespace std;
void find(int n,int m,int l,int r)
{
    int ll=abs(l);
    int al=m-ll;
    int ar=m-r;
    int c,d;
    
    if(n==m)
    {
        c=l;
        d=r;
    }
    else if(al<=ar)
    {
        c=-(m-r);
        d=r;

    }
    else
    {
        c=l;
        d=m-l;
    }
    cout<<c<<" "<<d<<endl;

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