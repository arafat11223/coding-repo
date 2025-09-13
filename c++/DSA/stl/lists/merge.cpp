#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l1={3,2,4,6,7,9,0};
    list<int>l2={16,12,18,19,15,18};
    l1.sort();
    l2.sort();
    l1.merge(l2);
    for(auto ele:l1)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    
    cout<<"is l2 empty: "<<(l2.empty() ? "yes" : "no")<<endl;

}