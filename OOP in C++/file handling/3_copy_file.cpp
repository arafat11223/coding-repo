#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    ofstream onfile;
    char str;
    infile.open("C:\\Users\\HP\\Desktop\\file.txt");
    onfile.open("C:\\Users\\HP\\Desktop\\file2.txt");

    while(infile.get(str))
    {
        onfile.put(str);
    }
    cout<<"copied";
    infile.close();
    onfile.close();


}