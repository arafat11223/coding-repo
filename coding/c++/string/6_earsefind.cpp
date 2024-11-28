#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="hello motherfucker";
    str.erase(6,6);
    cout<<str<<endl;
    string str1="aaabcdabc";
    int position=str1.find("abc");
    cout<<position<<endl;
    //insert
    str.insert(6,"mother");
    cout<<str<<endl;
    //empty
    string test="";
    if(test.empty())
    {
        cout<<"string is empty"<<endl;
    }
    else
    {
        cout<<"string is not empty"<<endl;
    }

}