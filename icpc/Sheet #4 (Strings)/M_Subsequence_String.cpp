#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    string test={"hello"};
    cin>>str;
    int count=0;
    int find=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==test[count])
        {
            count++;
            find++;
        }

    }
    
    if(find==test.length())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
