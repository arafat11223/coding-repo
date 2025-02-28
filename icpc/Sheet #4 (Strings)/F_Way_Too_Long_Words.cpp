#include<iostream>
#include<string>

using namespace std;
int main()
{
    int test;
    cin>>test;
    cin.ignore();
    for(int i=0;i<test;i++)
    {
        string str;
        getline(cin,str);
        if(str.size()<=10)
        {
            cout<<str<<endl;
        }
        else
        {
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }

        
        

    }

}