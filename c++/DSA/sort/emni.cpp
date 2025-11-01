#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        if(a+b>c && b+c>a && a+c>b)
        {
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<"Wrong!!"<<endl;
        }
    }
}