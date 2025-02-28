#include<iostream>
using namespace std;
int main()
{
    int i;
    while(1)
    {
        int m,n;
        long long sum=0;
        cin>>m>>n;
        int max,min;
        if(m<=0 || n<=0)
        {
            return 0;
        }
        if(m>n)
        {
            max=m;
            min=n;
        }
        else
        {
            max=n;
            min=m;
        }
        for(i=min;i<=max;i++)
        {
            sum=sum+i;
            cout<<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;
        

    }
    //cout<<sum;
}