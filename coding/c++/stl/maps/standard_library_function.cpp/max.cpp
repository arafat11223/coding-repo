#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    cout<<"maximum: "<<max(a,b)<<endl;
    cout<<"-----------------"<<endl;
    char c1='e',c2='i';
    cout<<"maximum character :"<<max(c1,c2)<<endl;

    cout<<"-----------------"<<endl;
    cout<<"maximum:"<<max({4,23,4,6,7,4,4,5,69})<<endl;

    cout<<"-------------"<<endl;
    pair<int,int>m={6,3};
    //m[2]=6;
    cout<<"pair maximum :"<<max(m.first,m.second)<<endl;

    cout<<"------------------"<<endl;
    int arr[]={2,3,4,56,7,45,4,3,2,3,4,56,7,7,5,4,3};
    //cout<<max(arr[]);
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxv=arr[0];
    for(int i=1;i<size;i++)
    {
        maxv=max(maxv,arr[i]);
    }
    cout<<"max value: "<<maxv<<endl;
}