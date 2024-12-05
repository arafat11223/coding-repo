#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("7.txt");
    out<<"this is me\n";
    out<<"this is also me";
    out.close();

    ifstream in;
    in.open("7.txt");
    // string str,str2;
    // in>>str>>str2;
    // cout<<str<<str2;
    string str;
    while(in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();


}
