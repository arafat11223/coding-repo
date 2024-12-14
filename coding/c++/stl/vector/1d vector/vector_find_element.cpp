#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];

    }
    cout<<"enter element :";
    int x;
    cin>>x;
    int pos=-1;
    for(int i=0;i<v.size();i++)
    {
        if(x==v[i])
        { 
            pos=i;
        }
    }
    cout<<"occurrence :"<<pos;
}