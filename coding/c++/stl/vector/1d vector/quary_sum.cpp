//given an array of integer of size n.answer n quary where you need to print the sum
//of value in a given range of indices from l to t(both are include)
//note:the value of l and r in quaries follow 1 based indexing 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);//1 based index
    for(int i=1;i<=v.size();i++)//n==5  v.size==5
    {
        cin>>v[i];
    }
    for(int i=1;i<=v.size();i++)
    {
        v[i]+=v[i-1];
    }
    for(int i=0;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    //cout<<v[5];
    int q;
    cout<<"enter quaries";
    cin>>q;
    while(q--)
    {
        int l,r;
        cout<<"l :";
        cin>>l;
        cout<<"r :";
        cin>>r;
        int res=0;
        res=v[r]-v[l-1];
        cout<<res<<endl;
        
    }




}