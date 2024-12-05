#include<iostream>
#include<string>
#include<algorithm>


using namespace std;
bool palindrome(string s)
{
    int st=0;
    int end=s.length()-1;
    while(st<end)
    {
        if(s[st]!=s[end])
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
    string str;
    getline(cin,str);
    if(palindrome(str))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}