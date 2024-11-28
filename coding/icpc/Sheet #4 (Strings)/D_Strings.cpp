#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    cout<<str1.length()<<" "<<str2.length()<<endl;
    cout<<str1+str2<<endl;
    // eita dia hoi
    // char temp;
    // temp=str1[0];
    // str1[0]=str2[0];
    // str2[0]=temp;
    swap(str1[0],str2[0]);
    cout<<str1<<" "<<str2<<endl;
    

    
}