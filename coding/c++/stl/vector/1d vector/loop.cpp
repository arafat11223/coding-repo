#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    //for loop
    cout<<"for loop"<<endl;
    for(int i=0;i<5;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
        
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //for each
    cout<<"for each"<<endl;
    
    for(int ele:v)
    {
        cin>>ele;
        v.push_back(ele);


    }
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"while loop"<<endl;
    int indx=0;
    while(indx<v.size())
    {
        cout<<v[indx]<<" ";
        indx++;
    }
}