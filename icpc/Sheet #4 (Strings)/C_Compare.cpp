#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    if(str1<str2)
    {
        cout<<str1<<endl;
    }
    else
    {
        cout<<str2<<endl;
    }

}