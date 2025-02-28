#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream hout("6.txt");
    cout<<"enter your name :";
    string str;
    //cin>>str;
    getline(cin,str);
    
    hout<<str+" is my name "<<endl;;
    
    hout.close();
    ifstream hin("6.txt");
    string content;
    int n;

    hin>>content;
    
    
    cout<<content;
    hin.close();


}
