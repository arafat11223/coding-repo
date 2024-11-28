#include<iostream>
using namespace std;
int main()
{
    int n,i;
    //long long a,rem;
    //long long a,result=0,rem;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        long long a,rem;
        cin>>a;
        long long c=a;
        while(c!=0)
        {
            rem=c%10;
            //result=(result*10)+rem;
            c=c/10;
            cout<<rem<<" ";

        }
        cout<<endl;
        
    }
    return 0;
}