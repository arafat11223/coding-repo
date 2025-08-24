#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="hello coder bd";
    set<char>unique(str.begin(),str.end());
    unique.erase(' ');
    cout<<unique.size()<<endl;
}