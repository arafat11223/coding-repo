#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="aabcdabcbacabc";
    //getline(cin,str);
    string substr="abc";
    //getline(cin,substr);
    while(/*str.length()>0 && */str.find(substr)<str.length())
    {
        str.erase(str.find(substr),substr.length());

    }
    cout<<str<<endl;
}