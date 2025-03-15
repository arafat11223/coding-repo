#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>cnt;
    //insert using bracket
    cout<<"insert using bracket"<<endl;
    cnt["arafat"]=78;
    cnt["tamim"]=87;
    cout<<cnt["arafat"]<<endl;

    //insert using insert method
    map<string,int>id;
    id.insert({"razin",67});
    id.insert({"intisar",7});
    id.insert({"raju",67});
    id.insert({"tausin",67});
    cout<<id["raju"]<<endl;//log2(size of map)---log2(4)


    //benificial casee
    cout<<"----frequency-----"<<endl;
    map<string,int>s;
    cout<<s["hello"]<<endl;

    vector<long long>v={45,21432555232,21432555232,21432555232,4,3,4,5,3,2};
    map<long long,int>m;
    for(int i=0;i<v.size();i++)
    {
        m[v[i]]++;
    }
    cout<<m[21432555232]<<endl;
    for(auto ele:m)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }


}