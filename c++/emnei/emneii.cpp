#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string a;
    cin>> a;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<sum;
}