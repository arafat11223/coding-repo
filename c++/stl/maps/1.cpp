#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    m["arafat"]=34;
    m["tamim"]=3;
    m["sadim"]=38;
    m["tanim"]=90;
    m["tani"]=78;
    //or
    m.insert({"sifat",56});
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;

    map<int, string> myMap = {{1, "One"}, {5, "five"}, {3, "Three"}};
    for(auto &ele:myMap)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    
}