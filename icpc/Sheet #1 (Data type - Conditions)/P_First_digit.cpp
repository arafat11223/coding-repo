#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str=to_string(n);
    if(str[0]%2==0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
    
}