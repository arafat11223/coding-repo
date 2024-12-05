#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream onfile;
    onfile.open("C:\\Users\\HP\\Desktop\\file.txt");
    cout<<"file created successfully"<<endl;
    onfile<<"thank you so much"<<endl;
    cout<<"data has been written in the file"<<endl;
    
    onfile.close();

}
