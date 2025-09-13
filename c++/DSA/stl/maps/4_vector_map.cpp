#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<map<string,int>>v;
    map<string,int>student;
    student["arafat"]=78;
    student["rafat"]=8;
    student["tamim"]=578;
    v.push_back(student);
    cout<<v[0]["arafat"]<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<student.first<<" "<<student.second<<endl;

    // }


    map<int,int>st;
    st[1]=9;
    st[7]=9;
    st[1]=9;
    st[8]=9;
    st[1]=9;
    cout<<"unique key:"<<st.size()<<endl;
}