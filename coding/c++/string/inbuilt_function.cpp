#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="arafat";

    //reverse(str.begin(),str.end());
    cout<<str.substr(1,4)<<endl;
    string str1="hossain";
    cout<<str+str1<<endl;
    str+=str1;
    cout<<str<<" "<<str1<<endl;
    char ch='h';
    str.push_back(ch);
    cout<<str<<endl;
    char e='d';
    str1.push_back(e);
    cout<<str1<<endl;
    int num=432;
    string s=to_string(num);
    s+='1';
    cout<<s<<endl;


}