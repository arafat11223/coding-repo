#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    cout<<"push_back and push_front"<<endl;
    l.push_back(2); //2
    l.push_back(5); //2 5
    l.push_front(5);//5 2 5
    l.push_front(8);//8 5 2 5
    l.emplace_back(1);
    l.push_back(2);
    l.remove(2);
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto ele:l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    cout<<l.empty()<<endl;
    cout<<(l.empty() ? "empty" : "not empty")<<endl;

    cout<<"print last element"<<endl;
    cout<<l.back()<<endl;

    cout<<"print first element"<<endl;
    cout<<l.front()<<endl;

    cout<<l.size()<<endl;

    // l.clear();
    
    // for(auto ele:l)
    // {
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    cout<<"insert value"<<endl;// iterator dia korte hbe
    l.insert(l.begin(),5);
    //l.insert(l.begin()+2,5);  error 
    for(auto ele:l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    cout<<"insert nth index "<<endl;
    advance(it,3);
    //l.insert(it,9);
    l.insert(it,2,9);
    for(auto ele:l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    cout<<"erase"<<endl;
    it=l.begin();
    advance(it,5);
    l.erase(it);
    for(auto ele:l)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    cout<<"erase 3 element"<<endl;
    list<int>::iterator it2;
    it=l.begin();
    it2=l.begin();
    advance(it2,3);
    l.erase(it,it2);
    
    for(auto ell:l)
    {
        cout<<ell<<" ";
    }
    cout<<endl;

    l.push_back(4);
    l.push_back(4);
    l.push_back(6);
    l.push_back(9);
    for(auto ell:l)
    {
        cout<<ell<<" ";
    }
    cout<<endl;


    cout<<"remove"<<endl;
    l.remove(4);
    for(auto ell:l)
    {
        cout<<ell<<" ";
    }
    cout<<endl;

    cout<<"reverse"<<endl;
    l.reverse();
    for(auto ell:l)
    {
        cout<<ell<<" ";
    }
    cout<<endl;

    cout<<"sort"<<endl;
    l.sort();
    for(auto ell:l)
    {
        cout<<ell<<" ";
    }
    cout<<endl;

    cout<<"unique"<<endl;
    l.unique();
    for(auto ell:l)
    {
        cout<<ell<<" ";
    }
    cout<<endl;

    cout<<"swap"<<endl;
    list<int>l2={2,4,5,7,8,4,3};
    l.swap(l2);
    cout<<"list1"<<endl;
    for(auto ell:l)
    {
        cout<<ell<<" ";
    }
    cout<<endl;
    cout<<"list2"<<endl;
    for(auto ell:l2)
    {
        cout<<ell<<" ";
    }
    cout<<endl;





}
