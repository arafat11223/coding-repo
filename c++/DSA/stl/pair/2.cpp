#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p1,p2;
    p1={2,3};
    p2={4,5};
    if(p1<p2)  //first gula compare korbe(2,4) jodi first gula same hoi tahole second gula compare korbe
    {
        cout<<"p1 is smaller than p2"<<endl;
    }
    else
    {
        cout<<"p2 is smaller than p1"<<endl;
    }
    cout<<"----------------------"<<endl;
    cout<<"max and min function"<<endl;
    pair<int,int>p=min(p1,p2);
    cout<<p.first<<" "<<p.second<<endl;
    
}