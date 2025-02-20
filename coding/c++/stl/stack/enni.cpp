    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int a=-1,b=-1;
        stack<int>s;
        s.push(4);
        s.push(5);
        if(!s.empty())
        {
            a=s.top();
            s.pop();
        }
        if(!s.empty())
        {
            b=s.top();
        }
        cout<<a<<" "<<b;
    }
    