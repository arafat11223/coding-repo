
// ------o(n)-------
    // int base,power; //2^5=32
    // cin>>base>>power;
    // int result=1;
    // for(int i=1;i<=power;i++)
    // {
    //     result*=base;
    // }
    // cout<<result;



    // -------o(log n)--------
    //-----concept of binary exponentiation------
    //if power is even then base*=base and power/=2
    //if power is odd then result*=base and power-=1
#include<bits/stdc++.h>
using namespace std;
int result(int base,int power)
{
    long long result=1;
    while(power!=0)
    {
        if(power%2==0)
        {
            base=base*base;
            power=power/2;

        }
        else
        {
            result=result*base;
            power=power-1;
        }
    }
    return result;
}
int main()
{
    int base,power;
    cin>>base>>power;
    cout<<result(base,power);
   
}