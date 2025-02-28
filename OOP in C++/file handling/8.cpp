#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream myfile;
    myfile.open("8.txt");
    if(myfile.is_open())
    {
        cout<<"file open successful";
    }
    else
    {
        cout<<"failed to open file";
    }
}