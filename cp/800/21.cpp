#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int s=(a*3);
    int y=(b*2);
    for(int i=1;i<=10;i++)
    {
        if((s*i)>(y*i)) // এখানে সেমিকোলন ছিল, যা সরানো হয়েছে
        {
            cout<<i<<endl;
            break;
        }
    }
}