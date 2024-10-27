#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n;i++)
    {
        int a,b,sum=0;
        cin>>a>>b;
        int max,min;
        if(a<=b)
        {
            max=b;
            min=a;
        }
        else
        {
            max=a;
            min=b;
        }
        for(int j=min+1;j<max;j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
                
            }
        }
        cout<<sum<<endl;
    }
}
