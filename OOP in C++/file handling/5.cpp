#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //opening file using constructor and writing it
    ofstream out("5.txt");
    string str="coder";
    string str2;
    out<<"hello"<<endl;
    out<<str<<endl;
    //opening file using constructor and reading it
    ifstream in("5reading.txt");
    //in>>str2; // output only single word
    getline(in,str2); // output one line
    getline(in,str2); // outpot second line
    cout<<str2<<endl;

}