#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="i cdi coding";
    //1
    str.replace(2,3,"love");
    cout<<str<<endl;
    //2
    string str1="i fuck coding";
    string s="cdi";
    str1.replace(2,4,s);
    cout<<str1<<endl;
    //3
    str1.replace(2,3,str,2,4);
    cout<<str1<<endl;
}
