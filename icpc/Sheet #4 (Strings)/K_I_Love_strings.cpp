#include<iostream>
#include<string>
using namespace std;
int main()
{
    int test;
    cin>>test;
    cin.ignore();
    while(test--)
    {
        string str1,str2;
        getline(cin,str1);
        getline(cin,str2);
        //cin>>str1>>str2;
        int len1=str1.length();
        int len2=str2.length();
        int i=0;
        while(i<len1 && i<len2)
        {
            cout<<str1[i]<<str2[i];
            i++;
        }
        while(i<len1)
        {
            cout<<str1[i];
            i++;

        }
        while(i<len2)
        {
            cout<<str2[i];
            i++;
        }
        cout<<endl;
    }    
}
