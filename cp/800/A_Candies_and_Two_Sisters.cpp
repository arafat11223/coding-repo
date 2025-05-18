#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long ans=(n/2);
        if(n==1 ||n==2)
        {
            cout<<"0"<<endl;
        }
        else if(n%2==0)
        {
            cout<<ans-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        //cout << ans << endl;
    }
}