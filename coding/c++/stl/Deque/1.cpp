#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(5);
    dq.push_back(9);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_front(4);
    dq.push_front(8);
    dq.push_front(5);

    cout<<dq.front()<<"  "<<dq.back()<<endl;

    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
    deque<int>d={3,4,56,4,2,45,7,7,54,2,};
    sort(d.begin(),d.end());
    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop_front();
    }



}