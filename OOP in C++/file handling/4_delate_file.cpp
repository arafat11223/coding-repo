#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int value=remove("C:\\Users\\HP\\Desktop\\file.txt");
    if(value==0)
    {
        cout<<"file deleted"<<endl;
    }
    else
    {
        cout<<"file not delated"<<endl;
    }

}