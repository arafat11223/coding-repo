#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        long long fact=1;
        for(int i=1;i<=a;i++)
        {
            fact*=i;
        }
        cout<<fact<<endl;
    }
    return 0;
}