#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(3);
    q.push(5);
    q.push(2);
    q.push(1);
    q.push(8);
    
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"size:"<<q.size()<<endl;

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"size:"<<q.size()<<endl;
}