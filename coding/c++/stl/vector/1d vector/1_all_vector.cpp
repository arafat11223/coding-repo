#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int> v;

    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );

    cout << v[0] << " " << v[1] << " " << v[2] << endl; /// 1 2 3

    v[1] = 3;
    cout << v[0] << " " << v[1] << " " << v[2] << endl; /// 1 3 3

    cout << v.size() << endl; /// 3
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " "; /// 1 3 3
    cout << endl;

    vector <int> v1 = { 2, 3, 4 };

    cout << v1.size() << endl; /// 3
    for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4
    cout << endl;

    v.clear();
    cout << v.size() << endl; /// 0
    cout << v.empty() << endl; /// 1
    cout << v1.empty() << endl; /// 0

    v1.resize(5);
    cout << v1.size() << endl; /// 5
    for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4 0 0
    cout << endl;

    vector<int> a(5);

    cout << a.size() << endl; /// 5
    for ( int i = 0; i < a.size(); i++ ) cout << a[i] << " "; /// 0 0 0 0 0
    cout << endl;
    vector<int>b(5,3);
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"assign one vector to another vector"<<endl;
    vector<int>c={1,2,3,4,5};
    vector<int>temp;
    temp=c;
    cout<<"temp size: "<<temp.size()<<endl;
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    //vector iterator
    cout<<"use vestor iterator"<<endl;
    vector<int>::iterator it;
    for(it=temp.begin();it!=temp.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(it=temp.begin();it!=temp.end();it++)
    {
        *it=*it *2;  // value digon
    }
    cout<<"using for each loop"<<endl;
    for(int ele: temp)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<"using auto"<<endl;
    for(auto ele: temp)
    {
        cout<<ele<<" ";

    }
    cout<<endl;
    cout<<"sort temp vector non increasing order"<<endl;
    sort(temp.rbegin(),temp.rend());
    for(auto ele: temp)
    {
        cout<<ele<<" ";
    }
    cout<<endl;  

    //print last element
    cout<<"print last element"<<endl;
    cout<<temp.back()<<endl;

    cout<<"delete last element"<<endl;
    temp.pop_back(); // o(1)complexity

    cout<<temp.back()<<endl;

    cout<<"print first element"<<endl;
    cout<<*temp.begin()<<endl;

    cout<<"erase "<<endl;
    //temp.erase(temp.begin());
    temp.erase(temp.begin()+2); //o(n) complexity
    
    for(auto ele: temp)
    {
        cout<<ele<<" ";
    }
    cout<<endl;



}