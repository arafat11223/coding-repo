#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,34,2,543,2,4,532,4};
    vector<int>::iterator it;
    it=max_element(v.begin(),v.end());
    cout<<"max element is : "<<*it<<endl;

    vector<int>::iterator i;
    i=min_element(v.begin(),v.end());
    cout<<"min element is : "<<*i<<endl;

    vector<int>v1={2,4,6,7,9,6,4,8,9,9,0};
    int index=max_element(v1.begin(),v1.end())-v1.begin();
    cout<<v1[index]<<endl;

    int idex=max_element(v1.begin(),v1.begin()+3)-v1.begin();//2 4 6
    cout<<v1[idex]<<endl;

    
    
}