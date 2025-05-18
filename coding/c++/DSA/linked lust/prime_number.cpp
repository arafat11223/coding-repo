#include<bits/stdc++.h>
using namespace std;
bool prime(int x)
{
    if(x<2)
    {
        return false;
    }
    if(x%2==0)
    return false;
    if(x==2)
    return true;
    for(int i=3;i<=sqrt(x);i+=2)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x;
    cin>>x;
    if(prime(x)==true)
    {
        cout<<"prime number"<<endl;

    }
    else
    {
        cout<<"not prime"<<endl;
    }

}