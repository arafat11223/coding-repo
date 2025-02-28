#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    string str;
    infile.open("C:\\Users\\HP\\Desktop\\file.txt");
    
    while(getline(infile,str))
    {
        cout<<str;

    }
    // ofstream onfile;
    // onfile.open("C:\\Users\\HP\\Desktop\\file.txt");
    // onfile<<"hello cooder"<<endl;
    // infile.open("C:\\Users\\HP\\Desktop\\file.txt");
    // //infile.open("file.txt");
    // while(getline(infile,str))
    // {
    //     cout<<str;

    // }
    infile.close();

}