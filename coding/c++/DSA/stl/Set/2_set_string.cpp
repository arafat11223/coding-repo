#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>s;
    s.insert("tamim");
    s.insert("arafat");
    s.insert("tamim");
    s.insert("niloy");
    s.insert("wasim");
    s.insert("tamim");
    s.insert("tanvir");
    cout<<"size :"<<s.size()<<endl;
    for(auto ele:s)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}