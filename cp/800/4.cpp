#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    while(n--)
    {
        string str;
        cin>>str;
        if(str[0]=='+' || str[str.size()-1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x<<endl;
}