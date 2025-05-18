#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    set<char>s(str.begin(),str.end());
    s.erase(',');
    s.erase(' ');
    s.erase('{');
    s.erase('}');
    cout<<s.size()<<endl;

}