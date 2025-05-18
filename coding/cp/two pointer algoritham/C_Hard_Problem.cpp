#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long m,a,b,c;
        cin>>m>>a>>b>>c;
        long long r1,r2,s1,s2;
        if(m>=a)
        {
            r1=a;
            s1=m-a;
        }
        else
        {
            r1=m;
            s1=0;
        }

        if(m>=b)
        {
            r2=b;
            s2=m-b;
        }
        else
        {
            r2=m;
            s2=0;
        }
        long long s3=s1+s2;
        if(s3>=c)
        {
            cout<<r1+r2+c<<endl;

        }
        else{
            cout<<r1+r2+s3<<endl;
        }

    }
}