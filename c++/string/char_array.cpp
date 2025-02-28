#include<iostream>
using namespace std;
int main()
{
    char str[]={'h','e','l','l','o','\0'};// \0 na dile valid result asbena
    cout<<str<<endl;
    char str1[]="hello";
    cout<<str1<<endl;
    char s[100];
    cin.getline(s,100);
    cout<<s<<endl;
    cin.getline(s,100,'.');
    cout<<s<<endl;
    int len=0;
    for(int i=0;i<str1[i]!='\0';i++)
    {
        len++;

    }
    cout<<"length : "<<len<<endl;
    //cout<<strlen(str)<<endl;
}
