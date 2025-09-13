#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={9,9,4,5,6,4};
    //list<int>::iterator it;
    l.sort();
    for(auto ele:l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    
    l.reverse();
    for(auto ele:l)
    {
        cout<<ele<<" ";
    }
   

}