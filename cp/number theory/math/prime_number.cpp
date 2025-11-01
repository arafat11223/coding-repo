#include<bits/stdc++.h>
using namespace std;
int main()
{
    // if no of divisor is exactly 2 then it is prime number
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cnt++;
            if(n/i!=i)
            {
                cnt++;
            }
        }
        if(cnt>2)
        {
            cout<<"Not Prime"<<endl;
            return 0;
        }

    }
    if(cnt==2)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    
}