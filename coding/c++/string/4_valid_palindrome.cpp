#include<iostream>
#include<string>
using namespace std;


bool isalphanum(char ch)
{
    if((ch>='0'&& ch<='9') || (tolower(ch)>='a'&& tolower(ch)<='z'))
    {
        return true;
    }
    return false;
    
}
bool palindrome(string str)
{
    
    // getline(cin,str);

    int st=0; 
    int end=str.size()-1;
    while(st<end)
    {
        if(!isalphanum(str[st]))
        {
            st++;
            continue;

        }
        if(!isalphanum(str[end]))
        {
            end--;
            continue;

        }
        if(tolower(str[st])!=tolower(str[end]))
        {
            return false;
        }
        st++;
        end--;
    }
    return true;


    
}

int main()
{
    string s;
    getline(cin,s);
    if(palindrome(s))
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }

}