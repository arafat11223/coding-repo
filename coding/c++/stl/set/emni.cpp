//https://www.hackerrank.com/challenges...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    while(n--)
    {

        int x,y;
        cin>>x>>y;
        if(x==1)
        {
            s.insert(y);
        }
        else if(x==2)
        {
            s.erase(y);
        }
        else
        {
            if(s.count(y))
            {
                cout<<"Yes"<<endl;

            }
            else
            {
                cout<<"No"<<endl;
            }
        }

    }
}