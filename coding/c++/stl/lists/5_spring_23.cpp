//  Write a program that initializes a list with the values (10, 20, 30, 40, 50), Perform the following operations:

// Remove the element at index 2.

// Insert the value 15 at index 1.

// Remove the first element from the list.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={10,20,30,40,50};
    cout<<"initial list: ";
    for(auto ele: l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    list<int>::iterator it;
    it=l.begin();
    advance(it,2);
    l.erase(it);
    for(auto ele: l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    it=l.begin();
    advance(it,1);
    l.insert(it,15);
    for(auto ele: l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    l.pop_front();
    for(auto ele: l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    
    


    
}