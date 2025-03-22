#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        int size=str.size()-2;
        if(str.size()>10)
        {
            cout<<str[0]<<size<<str[str.length()-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
}