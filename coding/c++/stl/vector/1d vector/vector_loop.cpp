#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
       
        v.push_back(element);
    }
    for(int i=0;i<v.size();i++)
    {
        
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //for each loop
    v.insert(v.begin()+2,45);
    v.erase(v.end()-1);
    
    
    
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    v.erase(v.end()-2);
    //whlile loop
    int idx=0;
    while(idx<v.size())
    {
        cout<<v[idx]<<" ";
        idx++;
    }

}