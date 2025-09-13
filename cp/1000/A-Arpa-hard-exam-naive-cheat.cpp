#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int base=1378;
    long long power=n;
    long long result=1;
    while(power!=0)
    {
        if(power%2==0)
        {
            base=(base*base)%10;
            power=power/2;

        }
        else
        {
            result=(result*base)%10;
            power=power-1;
        }
    }
    //string str=to_string(result);
    // cout<<str[str.size()-1]<<endl;
    cout<<result<<endl;
}