#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(2); //2
    l.push_back(5); //2 5
    l.push_front(5);//5 2 5
    l.push_front(8);//8 5 2 5
    l.emplace_back(1);
    l.push_back(2);
    l.remove(2);
    //l.erase(l.end()-2);
    for(auto ele:l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<l.empty()<<endl;
    cout<<(l.empty() ? "empty" : "not empty")<<endl;
}
