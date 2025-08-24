#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"size: "<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    stack<int>sta;
    sta.push(5);
    sta.push(4);
    sta.push(3);
    sta.push(1);
    sta.push(6);
    sta.push(9);
    cout<<"size: "<<sta.size()<<endl;

    while(!sta.empty())
    {
        cout<<sta.top()<<" ";
        sta.pop();

    }
    


    



} 

