#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="123456";
    reverse(str.begin() , str.end());
    cout<<str<<endl;
}