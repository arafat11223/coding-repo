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
        set<char>s(str.begin(),str.end());
        if(s.size()<=2 )
        {
            if(str.size()<4)
            {
                cout<<"no"<<endl;
            }
            else
            {
                cout<<"yes"<<endl;
            }
        
            //cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
}