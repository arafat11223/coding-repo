#include<iostream>
using namespace std;
int main()
{
    int max,i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i==0)
        {
            max=a;
        }
        if(max<a)
        {
            max=a;
        }
    }
    cout<<max<<endl;
    return 0;
}
