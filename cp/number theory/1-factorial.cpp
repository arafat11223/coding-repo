#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long fact=1; //overflow for large n like 21
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}