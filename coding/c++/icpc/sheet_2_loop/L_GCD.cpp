#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i,max;
    if(a>b)
    {
        for(i=1;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                max=i;
            }
        }
        cout<<max;
    } 
    else if(a<b)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                max=i;
            }
        }
        cout<<max;
    }    
    else if(a==b)
    {
        for(i=1;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                max=i;
            }
        }
        cout<<max;
    }       
}