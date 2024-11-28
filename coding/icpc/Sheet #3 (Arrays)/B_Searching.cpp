#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int i;
    for(i=0;i<n;i++)
    {
        long long ele;
        cin>>ele;
        v.push_back(ele);
    }
    int pos=-1;
    long long x;
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(x==v[i])
        {
            pos=i;
            cout<<pos;
            break;
        }
       
    }
    if(pos==-1)
    {
        cout<<"-1";
    }
    

}