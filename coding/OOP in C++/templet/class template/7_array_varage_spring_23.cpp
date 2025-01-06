#include<bits/stdc++.h>
using namespace std;
template<class t>
t avarage(vector<t>&v)
{
    if(v.empty())
    {
        cout<<"empyt"<<endl;
        
    }
    t sum=0;
    for(auto ele: v)
    {
        sum+=ele;
    }
    t avarage =sum/v.size();
    return avarage;
    //return accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}


int main()
{
    vector<int>v={10, 20, 30, 40, 50};
    cout<<"avarage for integer :"<<avarage(v)<<endl;

    vector<double>ve={3.5, 4.7, 2.9, 6.1, 1.8};
    cout<<"avarage for double :"<<avarage(ve)<<endl;

    vector<char>vec={'A', 'B', 'C', 'D', 'E'};
    cout<<"avarage for char :"<<avarage(vec)<<endl;


    
}

