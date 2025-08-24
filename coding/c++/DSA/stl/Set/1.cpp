#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s={3,1,1,0,5,6,4,5};
    for(auto ele:s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"----set iterator-----"<<endl;
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"----set clear, insert ,size-----"<<endl;
    s.clear();
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(9);
    s.insert(6);
    s.insert(8);
    s.insert(0);//log2(n)
    cout<<"size :"<<s.size()<<endl;
    s.find(8);
    for(auto ele:s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<*(s.begin())<<endl;
    cout<<*(--s.end())<<endl;
    cout<<*(s.rbegin())<<endl;

    cout<<"----set erase-----"<<endl;
    s.erase(3);
    s.erase(s.begin());
    s.erase(--s.end());
    cout<<"size: "<<s.size()<<endl;
    for(auto ele:s)
    {
        cout<<ele<<" ";

    }
    cout<<endl;







}