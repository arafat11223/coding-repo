#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(52);
    s.insert(2);
    s.insert(8);
    for(auto ele:s)
    {
        cout<<ele<<endl;
    }


}