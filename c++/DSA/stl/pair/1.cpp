#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p;
    p.first=2;
    p.second="hello";
    cout<<p.first<<" "<<p.second<<endl;
    cout<<"----------------------"<<endl;

    pair<int,vector<int>>p1;
    p1.first=3;
    p1.second={1,2,3,4};
    //p1={3,{1,2,3,4}}; //eita use korbo
    cout<<endl<<p1.first<<" "
                        
    
    
    
                                        
    
    
    
    
    
    
    
    
                                                                
    
    888uio 
    <<p1.second.size()<<endl;
    for(auto ele:p1.second)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"----------------------"<<endl;

    cout<<"make_pair function"<<endl;
    pair<int,char>p2;
    p2=make_pair(4,'u');
    p2={5,'t'};//eita use korbo
    cout<<p2.first<<" "<<p2.second<<endl;
    p2.first++;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<"----------------------"<<endl;
}