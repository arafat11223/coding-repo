#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(52);
    s.insert(2);
    s.insert(8);
    s.insert(0);
    s.insert(11);
    for(auto ele:s)
    {
        cout<<ele<<endl;
    }


}