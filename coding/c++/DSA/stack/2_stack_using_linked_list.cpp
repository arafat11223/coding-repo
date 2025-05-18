#include<bits/stdc++.h>
using namespace std;
class Stack
{
    list<int>l;
    public:
    void push(int x) //o(1)
    {
        l.push_front(x);
    }
    void pop()
    {
        l.pop_front();;

    }
    int top()
    {
        return l.front();
    }
    bool empty()
    {
        return l.size()==0;
    }
};
int main()
{
    Stack s;
    s.push(4);
    s.push(5); 
    s.push(6);
    s.push(7);    
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    } 
    cout<<endl;


}